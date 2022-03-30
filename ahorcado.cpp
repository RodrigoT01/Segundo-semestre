#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Da instrucciones al usuario para como jugar
    cout << "Jugaremos ahorcado!!!!." << endl;
    cout << endl;
    cout << "Sera de dos jugadores, el jugador 1 ingresa la palabra y el jugador 2 tendra que adivinarla." << endl;
    cout << endl;
    cout << "Presiona ENTER para continuar." << endl;
    _getch();
    system("CLS");

    //Pide al usuario que ingrese la palabra a adivinar
    string palabra;
    cout << "Jugador 1, ingresa la palabra a adivinar porfavor." << endl;
    cout << endl;
    cin >> palabra;
    system("CLS");

    int aciertos = 0;
    //Se imprimen el numero de letras osea espacios que tiene la palabra escrita
    int tamp = palabra.length();
    for (int i = 0; i < tamp; i++)
    {
        cout << " - ";
    }
    cout << endl;
    
    int numintentos = 5;

    //Comienza a pedir al usuerio las letras mediante un bucle
    char letra;
    for (int j = 0; j < numintentos; j++)
    {
        cout << "    Jugador 2, comience a ingresar letras para tratar de adivinar la palabra." << endl;
        cin >> letra;
        for (int n = 0; n < tamp; n++)
        {
            //Si la letra es correcta aumenta un acierto y la imprime en el lugar donde esta correcta 
            if (letra == palabra[n])
            {
                cout << palabra[n];
                aciertos = aciertos + 1;

            }
            //En caso de que no sea correcta la letra lo deja en blanco
            else
            {
                cout << " - ";
            }
            

        }
        cout << " Aciertos: " << aciertos << endl;

        //Si adivinas todas las letras ganaras
        if (aciertos == tamp)
        {
           cout << "Ganaste" << endl;
           return 0;
        }

    }
       
    //Si fallas los 5 intentos perderas
    if (numintentos == 0);
    {
       cout << "Perdiste" << endl;
       cout << "La palabra a adivinar era: " << palabra << endl;

    }
    
}