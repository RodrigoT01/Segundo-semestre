// RTR_Par e impar.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int numero;

int main()
{
	div_t resultado;
	//Se dice que se hara en el programa
	cout << "Ingresa un numero cualquiera entero y se mostrara si es par o impar" << endl;
	cout << endl;
	//Se socilicita el numero 
	cin >> numero;
	//Se busca si el numero es divisible entre 2 y si lo es par y si no es impar
	resultado = div(numero, 2);
	if (resultado.rem > 0)
	{
		cout << numero << " :tu numero es impar" << endl;
	}
	else
	{
		cout << numero << " :tu numero es par" << endl;
	}
	
}
