// clases.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;
//clase encapsulada para poder ver la edad
class edad {
private:
    int numero;
public:
    edad(void);
    void setEdad(int);
    int getEdad();
};
//Clase de la edad para llamarla
edad::edad(void) {
}
void edad::setEdad(int _numero)
{
    numero = _numero;
}
int edad::getEdad()
{
    return numero;
}

//Clase padre para dar la raza de los personajes
class DragonBall {

public:

    string raza0 = "saiyajin";
    string raza1 = "humano";
    string raza2 = "androide";
    void frase() {
        cout << "Im am the super saiyajin";
    }
private:
    string raza3 = "Dios de la destruccion";
    string raza4 = "Angel";

    void frase1() {
        cout << "Destruire el mundo";
    }
};

//clase hijo para las transformaciones
class transformaciones : public DragonBall {
public:
    string transformacion = "Super saiyajin";
};



int main()
{
   //Llamamos las clases para dar los datos
    transformaciones personaje;
    personaje.frase();
    cout << endl;

    cout << "Raza: " << personaje.raza0 << endl;
    cout << "Transfromacion: " << personaje.transformacion << endl;

    //Llamamos el dato que esta en privado
    edad dl = edad();
    dl.setEdad(40);
    cout << "edad:" << dl.getEdad() << endl;

    return 0;

}


