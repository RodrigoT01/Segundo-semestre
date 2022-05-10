// cadenas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Rodrigo Tapia Robles

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str("Hello world, este ser el ejercicio 1.");
    string str2;

    cout << "Esta es la frase(cadena): 'Hello world, este ser el ejercicio 1.'" << endl;
    cout << "Ingresa la palabra(subcadena) a buscar." << endl;
    cin >> str2;
    size_t found = str.find(str2);
    if (found != string::npos) 
    {
        cout << "Indice encontrado en el espacio: " << found << '\n';
    }

    return 0;
}


