// P5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*
Nombre: Jesus Antonio Meraz Villa
Fecha : 21 / 09 / 2020
Version: 1.0
Parcial : 1ro.
*/

#include <iostream>
using namespace std;

class Sueldo
{
    private:
        int anios;
        int sueldo;

    public:
        Sueldo(); //constructor sin parametros
        void iniciaSec();
        void pideDatos();
        void calculaSueldo();
        void muestraDatos();
};

Sueldo::Sueldo()
{
    anios = 0;
    sueldo = 0;;
}

void Sueldo::iniciaSec()
{
    int resp = 0;
    do
    {
        pideDatos();
        cout << "Desea intentar de nuevo: \n 1)Si \n 2)No:";
        cin >> resp;
        cout << endl;
        while (resp != 2 && resp != 1)
        {
            cout << "Respuesta incorrecta, desea intentar de nuevo: \n 1)Si \n 2)No: ";
            cin >> resp;
        }
    } while (resp == 1);
}

void Sueldo::pideDatos()
{
    cout << "Ingrese los anos de trabajo: ";
    cin >> anios;
    cout<<endl;
    calculaSueldo();
}

void Sueldo::calculaSueldo()
{
    int paga = 40000;
    if (anios > 10)
    {
        sueldo = paga + (0.1 * paga);
    }
    else if (anios < 10 && anios > 5)
    {
        sueldo = paga + (0.07 * paga);
    }
    else if (anios < 5 && anios > 3)
    {
        sueldo = paga + (0.05 * paga);
    }
    else
    {
        sueldo = paga + (0.03 * paga);
    }
    muestraDatos();
}

void Sueldo::muestraDatos()
{
    cout << "El sueldo anual que debe estar percibiendo por " << anios << " anos de trabajo es: $" << sueldo << endl << endl;
}

int main()
{
    Sueldo inicia;
    inicia.iniciaSec();
}

