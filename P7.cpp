// P3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*
Nombre: Jesus Antonio Meraz Villa
Fecha: 08/09/2020
Version: 1.0
Parcial: 1ro.
*/

#include <iostream>
using namespace std;

class Sumacien
{
private:
    double suma;
    double cuenta;
    
public:
    void calculaSuma();
    void muestraDatos();
};

void Sumacien::calculaSuma()
{
    suma = 0;
    cuenta = 0;
    for (int i = 1; i <= 100; i=i+2)
    {
        suma = suma + i;
        cuenta++;
    }
    muestraDatos();
}


void Sumacien::muestraDatos()
{
    cout << "\n Hay "<<cuenta<<" numeros impares del 1 a 100 que suman " << suma << endl;
}


int main()
{
    Sumacien empieza;

    empieza.calculaSuma();
}
