#include <iostream>

using namespace std;
//clase encapsulada para poder ver la edad
class edad {
private:
    int numero;
public:
    edad();
    virtual void setEdad(int);
    virtual int getEdad();
};
//Clase de la edad para llamarla
edad::edad() {
}
void edad::setEdad(int _numero)
{
    numero = _numero;
}
int edad::getEdad()
{
    return numero;
}

//clase herada para polimorfismo
class edad2 :public edad {
public:
    void setEdad(int);
    int getEdad();
};

void edad2::setEdad(int _edadwonita) {
    edad::setEdad(_edadwonita);
    cout << "Edad creada con metodo polimorfico: " << endl;
}

int edad2::getEdad()
{
    return edad::getEdad();
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
    edad2 dl = edad2();
    dl.setEdad(40);
    cout << "edad:" << dl.getEdad() << endl;

    return 0;

}


