// P1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*
Nombre: Jesus Antonio Meraz Villa
Fecha: 21/09/2020
Version: 1.0
Parcial: 1ro.
*/

// Dados 3 numeros calcule su suma, el promedio, el producto y el menor de los 3.

#include <iostream>
using namespace std;


class Operaciones
{
    private:
        double v1;
        double v2;
        double v3;
        double resultado;

    public:
        Operaciones(); //Constructor sin parametros
        void pideNum();
        void suma();
        void promedio();
        void producto();
        void menor();
};

//Constructor
Operaciones::Operaciones()
{
    v1 = 0;
    v2 = 0;
    v3 = 0;
    resultado = 0;
}

//Metodos

void Operaciones::pideNum()
{
    cout << "Ingresa primer valor : ";
    cin >> v1;
    cout << "Ingresa segundo valor : ";
    cin >> v2; 
    cout << "Ingresa tercer valor : ";
    cin >> v3;
}

void Operaciones::suma() 
{
    resultado = v1 + v2 + v3;
    cout << "El resultado de tu suma es: "<< resultado << endl;
}

void Operaciones::promedio()
{
    resultado = (v1 + v2 + v3) / 3;
    cout << "El resultado de tu promedio es: " << resultado << endl;
}

void Operaciones::producto()
{
    resultado = v1 * v2 * v3;
    cout << "El resultado de tu producto es: " << resultado << endl;
}

void Operaciones::menor()
{
    if ((v1 < v2) & (v1 < v3))
    {
        resultado = v1;
    }
    else if ((v2<v1)&(v2<v3))
    {
        resultado = v2;
    }
    else
    {
        resultado = v3;
    }
    

    cout << "El menor de tus valores es: " << resultado << endl;
}



int main()
{
    Operaciones numero;

    numero.pideNum();
    numero.suma();
    numero.promedio();
    numero.producto();
    numero.menor();
}


