// pilas y colas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <stack>

using namespace std;

struct nodo {
    string new_string;

    nodo* siguiente;
};

void agregarPila(nodo*&, string);
void sacarPila(nodo*&, string&);

int main() {
    nodo* pila = NULL;

    string string, new_string;
    cout << "introduzca una cadena: ";
    getline(cin, string);

    for (int i = string.length(); i >= 0; i--) {
        new_string += string[i];
    }

    cout << new_string << endl;
    agregarPila(pila, new_string);

    cout << "Sacando todos los elementos de Pila: ";
    while (pila != NULL) {
        sacarPila(pila, new_string);
        if (pila != NULL) {
            cout << new_string << endl;
        }
        else {
            cout << new_string << endl;
        }
    }

    return 0;
}

void agregarPila(nodo*& pila, string nuevostr) {
    nodo* nuevo_nodo = new nodo();
    nuevo_nodo->new_string = nuevostr;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    cout << "\tLa palabra '" << nuevostr << "' ha sido agregada a PILA correctamente." << endl;
}

void sacarPila(nodo*& pila, string& nuevostr) {
    nodo* aux = pila;
    nuevostr = aux->new_string;
    pila = aux->siguiente;
    delete aux;
}



