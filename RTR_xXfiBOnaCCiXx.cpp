// RTR_xXfiBOnaCCiXx.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int resultado;
int numero;
int numero1 = 1;
int numero2 = resultado + numero;



int main()
{
    
    //Presenta lo que se hara en este programa
    cout << "Serie de fibonacci" << endl;
    cout << endl;
    //Instruccion principal
    cout << "completa la serie de fibonacci" << endl;
    cout << endl;
    //ciclo para imprimir y pedir datos de la serie
    for (int i = 0; i < 8; i++)
    {

    int numero1 = 1+resultado;
    int numero2 = resultado + numero;
    //primer suma de la serie
    cout << numero1 << "+" << numero2 << "=" << endl;
    cin >> resultado;
    //se pregunta el siguiente numero dependiendo de la suma anterior
    cout << "cual seria el numero siguiente de la serie?" << endl;
    cin >> numero;
    int total = resultado + numero;
    i = total;
    //se muiestra el suguiente numero de la serie dependiendo de lo anterior
    cout << "el siguiente numero de la serie es:" << total;
    cout << endl;
    }

    


}

