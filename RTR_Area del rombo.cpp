// RTR_Area del rombo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
float valorD;
float valord;

int main()
{
    //Se da la instruccion de lo que se hara
    cout << "Calcularemos el area de un rombo." << endl;
    cout << endl;
    //Se da la formula del area
    cout << "La formula para sacar el area del rombo es: D*d/2." << endl;
    cout << endl;
    //Nota para el usuario
    cout << "*Nota: Recuerda que D debe ser mayor que d" << endl;
    cout << endl;
    //El usuario ingresara las medidas del rombo
    cout << "Ingresa el valor de D" << endl;
    cin >> valorD;
    cout << "Ingresa el valor de d" << endl;
    cin >> valord;
    cout << endl;
    //Se hara la multiplicacion de los valores dados por el usuario
    cout << "Ahora multiplicaremos el primer valor que es: " << valorD << " por el segundo valor que es: " << valord << endl;
    cout << endl;
    float resultadom = valorD * valord;
    cout << "El resultado de la multiplicacion es: " << resultadom << endl;
    cout << endl;
    //Se hara la division del resultado anterior
    cout << "Ahora dividiremos el resultado de la multiplicacion entre 2, es decir: " << resultadom << "/2" << endl;
    cout << endl;
    float resultadod = resultadom / 2;
    cout << "El resultado de la division es: " << resultadod;
    cout << endl;
    //Resultado final
    cout << "Entonces el area del rombo es: " << resultadod;
    cout << endl;
    
}


