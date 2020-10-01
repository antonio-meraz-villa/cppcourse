// P8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*
Nombre: Jesus Antonio Meraz Villa
Fecha: 08/09/2020
Version: 1.0
Parcial: 1ro.
*/

#include <iostream>
using namespace std;

class Intermedios
{
    private: 
        int inicio;
        int fin;

    public:
        Intermedios();
        void iniciaSec();
        void pideDatos();
        void calculaInter();
};

Intermedios::Intermedios() 
{
    inicio = 0;
    fin = 0;
}

void Intermedios::iniciaSec()
{
    int resp = 0;
    do
    {
        pideDatos();
        cout << "Desea intentar de nuevo: \n 1)Si \n 2)No: ";
        cin >> resp;
        while (resp != 2 && resp != 1)
        {
            cout << "Respuesta incorrecta, desea intentar de nuevo: \n 1)Si \n 2)No: ";
            cin >> resp;
        }
    } while (resp == 1);
}

void Intermedios::pideDatos()
{
    cout << "\n Ingresa el numero inicial: ";
    cin >> inicio;
    cout << "\nIngresa numero final: ";
    cin >> fin;
    calculaInter();
}

void Intermedios::calculaInter()
{
    for (int i = inicio; i <= fin; i++)
    {
        cout << i<<endl;
    }
}
int main()
{
    Intermedios iniciar;
    iniciar.iniciaSec();
}

