// Operacion 4.cpp
//

#include <iostream>
#include "math.h"
#include "cmath"

using namespace std;
float n;
float m;
float resum;
float resur;
float resumultli;
float resultado;
float potencia;

int main()
{
	// Se dice que se hara en el programa
	cout << "Resolveremos la siguiemte operacion: ( ( n+m )( n-m ) ) / m^n = R " << endl;
	cout << endl;
	// Se piden los datos para la operacion
	cout << "Primero ingresa el valor de n: " << endl;
	cin >> n;
	cout << "Ahora ingresa el valor de m: " << endl;
	cin >> m;
	//Sustituimos los valores
	cout << "Ahora sustituimos los valores datos en la operacion: " << endl;
	cout << "( (" << n << "+" << m << ")" << "(" << n << "-" << m << ") ) / " << m << " ^ " << n << " = R" << endl;
	cout << endl;
	//Se realiza la suma y la resta
	cout << "Siguiendo la jerarqui de operaciones resolvemos primero los parentesis, que serian la suma y resta: " << endl;
	resum = n + m;
	resur = n - m;
	cout << "Entonces la operacion quedaria asi: " << endl;
	cout << "( (" << resum << ") (" << resur << ") ) / " << m << " ^ " << n << " = R" << endl;
	cout << endl;
	cout << "Ahora seguiremos con lo de los parentesis multiplicando lo ya obtenido: " << endl;
	resumultli = resum * resur;
	cout << "( " << resumultli << " ) / " << m << " ^ " << n << " = R" << endl;
	cout << endl;
	//Se eleva a la potencia
	cout << "Ahora elevamos a la potencia:" << endl;
	potencia = pow(m, n);
	cout << "( " << resumultli << " ) / " << potencia << " = R" << endl;
	cout << endl;
	//Se hace la division
	cout << "Y por ultimo nada mas dividimos:" << endl;
	resultado = potencia / resumultli;
	cout << "El resultado final es de: " << resultado << endl;
}
