// burbuja y busqueda binaria.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Rodrigo Tapia Robles

#include <iostream>
using namespace std;

#define SIZE 5


void mostrarLista(int*);
int busquedaBinaria(const int[], int);

int main(int argc, char** argv) {
    int clave = 0;
	int arreglo[SIZE] = { 5,2,4,1,6 };
	int n, l = SIZE, i, temp;

	mostrarLista(arreglo);

	do {
		n = 0;
		//Recorrer la lista
		for (i = 1; i < l; i++) {
			//Verificar si los dos valores estan ordenados
			if (*(arreglo + i - 1) > *(arreglo + i)) {
				//Ordenar si es necesario
				temp = *(arreglo + i - 1);
				*(arreglo + i - 1) = *(arreglo + i);
				*(arreglo + i) = temp;
				n = i;
				mostrarLista(arreglo);
			}
		}
		l = n;
	} while (n != 0);
    
    cout << "Indique un valor a buscar y se le devolvera el indice: " << endl;
    cin >> clave;
    cout << "Su valor se encuentra en arreglo[" << busquedaBinaria(arreglo,clave) << "]" << endl;
    cout << "Fin del programa" << endl;
    return 0;

}
void mostrarLista(int* a) {
	int i;
	for (i = 0; i < SIZE; i++) printf("\t[%d]", *(a + i));
	printf("\n");
}

int busquedaBinaria(const int arreglo[SIZE], int clave)
{
    int Iarriba = SIZE - 1;
    int Iabajo = 0;
    int Icentro;
    while (Iabajo <= Iarriba)
    {
        Icentro = (Iarriba + Iabajo) / 2;
        if (arreglo[Icentro] == clave)
            return Icentro;
        else
            if (clave < arreglo[Icentro])
                Iarriba = Icentro - 1;
            else
                Iabajo = Icentro + 1;
    }
    return -1;
}
