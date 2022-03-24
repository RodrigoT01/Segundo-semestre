// recursividad_Rodrigo_Tapia.cpp.
// Rodrigo Tapia Robles------Fundamentos de programacion

#include <iostream>
#include <conio.h>
using namespace std;

//Prototipo de la funcion de recursividad
int factorial(int);

int main()
{
    int numero;
    //Pide al usuario ingresar un numero el cual se sacara su factorial
    cout << "Ingresa un numero para sacar el factorial del mismo" << endl;
    cin >> numero;
    //Se saca el factorial mediante la funcion de recursividad
    cout << "El factorial de ese numero es: " << factorial(numero) << endl;

}

//Funciond de recursividad
int factorial(int numero)
{
    //Condicional de si el numero es igual a cero entonces para la recursividad y le da el valor de 1
    if (numero == 0)
    {
        numero = 1;
    }
    //Else de si el numero no es cero es igual a el factorila de ese numero menos 1
    else
    {
        numero = numero * factorial(numero - 1);
    }
    //Regresa el numero hasta que sea igual a cero entonces lo combierte en 1 y ese lo regresa a cada uno multiplicando lo anterior
    return numero;
}
