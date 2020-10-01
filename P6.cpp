// P6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*
Nombre: Jesus Antonio Meraz Villa
Fecha: 08/09/2020
Version: 1.0
Parcial: 1ro.
*/

#include <iostream>
using namespace std;

class Primo
{
    private:
        int numero;
        int res;

    public:
        Primo();
        void iniciaSec();
        void pideDato();
        void calcula();
        void muestraRes();
};

Primo::Primo() {
    numero = 0 ;
    res = 0 ;
}

void Primo::iniciaSec()
{
    int resp = 0;
    do
    {
        pideDato();
        cout << "Desea intentar de nuevo: \n 1)Si \n 2)No:";
        cin >> resp;
        while (resp != 2 && resp != 1)
        {
            cout << "Respuesta incorrecta, desea intentar de nuevo: \n 1)Si \n 2)No: ";
            cin >> resp;
        }
    } while (resp == 1);
}

void Primo::pideDato() 
{
    cout << " \n Ingresa el numero para conocer si es primo: ";
    cin >> numero;
    calcula();
}

void Primo::calcula()
{
    double mod = 1;
    res = 1;
    for (int i = 2; i <= numero-1; i++)
    {
        mod = numero % i;
        if (mod == 0)
        {
            res = 0;
        }
    }
    muestraRes();
}

void Primo::muestraRes()
{
    if (res == 1) 
    {
        cout << "\n El numero: " << numero << " es primo. \n"; 
    }
    else
    {
        cout << "\n El numero: " << numero << " no es primo. \n";
    }
}
int main()
{
    Primo inicia;
    inicia.iniciaSec();
}

