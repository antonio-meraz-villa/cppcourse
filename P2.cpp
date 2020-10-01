// P2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*
Nombre: Jesus Antonio Meraz Villa
Fecha: 21/09/2020
Version: 1.0
Parcial: 1ro.
*/

#include <iostream>
using namespace std;

class Cajero 
{
    private:
        double saldo;
        double movimiento;

    public:
        Cajero();
        void iniciaSec();
        void deposito();
        void retiro();
        void transaccion();
        void muestraSaldo();
};

//Constructor 
Cajero::Cajero() 
{
    saldo = 0;
    movimiento = 0;
}

void Cajero::iniciaSec()
{
    int resp = 0;
    do
    {
        transaccion();
        cout << "\nDesea hacer otra transaccion: \n 1)Si \n 2)No: ";
        cin >> resp;
        while (resp != 2 && resp != 1)
        {
            cout << "Respuesta incorrecta, desea intentar de nuevo: \n 1)Si \n 2)No: ";
            cin >> resp;
        }
    } while (resp == 1);
}

void Cajero::transaccion()
{
    int seleccion = 0;
    
    do
    {
        cout << "Que transaccion desea realizar: \n 1)Deposito \n 2)Retiro \n Movimiento:";
        cin >> seleccion;
        if (seleccion == 1)
        {
            deposito();
        }
        else if(seleccion == 2)
        {
            retiro();
        }
        else
        {
            cout << "\nSeleccion incorrecta, escoja una opcion valida.\n";
        }
    } while (seleccion != 1 && seleccion != 2);
}

void Cajero::deposito()
{
    cout << "\nIngrese cantidad a depositar: $";
    cin >> movimiento;
    saldo = saldo + movimiento;
    muestraSaldo();
}

void Cajero::retiro()
{
    cout << "\nIngrese cantidad a retirar: $";
    cin >> movimiento;
    if (movimiento > saldo)
    {
        cout<<"\nSaldo insuficiente, intente de nuevo.\n";
        retiro();
    }
    else
    {
        saldo = saldo - movimiento;
        muestraSaldo();
    }
}

void Cajero::muestraSaldo()
{
    cout << "\nSu saldo es de: $" << saldo << endl;
}

int main()
{
    Cajero inicia;
    inicia.iniciaSec();
}

