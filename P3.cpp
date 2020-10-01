// P3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*
Nombre: Jesus Antonio Meraz Villa
Fecha: 08/09/2020
Version: 1.0
Parcial: 1ro.
*/

#include <iostream>
using namespace std;

class Circulos
{
    private:
        double circulo[5] = { 0 };
        double diametro[5] = { 0 };
        double circunferencia[5] = { 0 };

    public:
        void pideDatos();
        void calcDiametro();
        void calcCircunferencia();
        void muestraDatos();
        void iniciaSec();
};



void Circulos::pideDatos()
{
    int i = 0;
    while (i<5)
    {
        cout << "Ingresa el radio del circulo " << i + 1 << " : ";
        cin >> circulo[i];
        i++;
    }
    calcDiametro();
}

void Circulos::calcDiametro()
{
    int i = 0;
    while (i < 5)
    {
       
        diametro[i] = 2*circulo[i];
        i++;
    }
    calcCircunferencia();
}

void Circulos::calcCircunferencia()
{
    int i = 0;
    while (i < 5)
    {

        circunferencia[i] = 3.1416*diametro[i];
        i++;
    }
    muestraDatos();
}

void Circulos::muestraDatos()
{
    int i = 0;
    while (i < 5)
    {
        cout << "Circulo " << i + 1 << " con radio " << circulo[i] <<" con diametro " << diametro[i] <<" y circunferencia " << circunferencia[i] <<endl ;
        i++;
    }
}

void Circulos::iniciaSec()
{
    int resp = 0;
    do
    {
        pideDatos();
        cout << "Desea intentar de nuevo: \n 1)Si \n 2)No:";
        cin >> resp;
        while (resp != 2 && resp !=1)
        {
            cout << "Respuesta incorrecta, desea intentar de nuevo: \n 1)Si \n 2)No: ";
                cin >> resp;
        }
    } while (resp == 1);
}

int main()
{
    Circulos circ;

    circ.iniciaSec();
}

