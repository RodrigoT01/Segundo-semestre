// RTR_numero factorial.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	int i;
	int factorial = 1;
	int numero;
	
	//Se pide el numero 
	cout << "Ingresa un numero: " << endl;
	cin >> numero;

	//Se saca el numero factorial del ingresado
	if (numero < 0)
	{
		factorial = 0;
	}
	else if (numero == 0)
	{
		factorial = 1;
	}
	else
	{
		for (i = 1; i <= numero; i++) 
		{
			factorial = factorial * i;
		}
	}
	//Se presenta el total del numero factorial
	cout << "El factorial de " << numero << " es: " << factorial << endl;

}

