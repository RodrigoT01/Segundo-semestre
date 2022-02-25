//contador de vocales con punteros punteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Rodrigo Tapia

#include <stdio.h>
#include <iostream>
#include <ctype.h>
using namespace std;
int contarVocales(char* contar);

int main(int a, char const* b[])
{
	//Definimos el arreglo poniendo de entrada 1000 letras como maximo
	char palabra[1000];
	cout << "Escribe una palabra:" << endl;
	cin >> palabra;
	int vocales = contarVocales(palabra);
	cout << "El numero de vocales que tiene la palabra son : " << vocales;
	return 0;
}

//La funcion que cuenta las vocales
int contarVocales(char* contar) 
{
	int vocales = 0;

	// Recorre toda la palabra para ver cuantas vocales hay
	for (int i = 0; contar[i] != '\0'; ++i) 
	{		
		char letra = tolower(contar[i]);
		//Cuenta las vocales de la palabra y las va sumando
		if (
			letra == 'a' ||
			letra == 'e' ||
			letra == 'i' ||
			letra == 'o' ||
			letra == 'u'
			)
		{
			vocales++;
		}
	}
	return vocales;
}

