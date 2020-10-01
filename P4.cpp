// P4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.*
/*Nombre: Jesus Antonio Meraz Villa
Fecha : 21 / 09 / 2020
Version: 1.0
Parcial : 1ro.
*/

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class Ventas
{
	private:
		string vendedor;
		double ganancias[12] = { 0 };
		double granTotal;

	public:
		Ventas();
		void iniciaSec();
		void pideDatos();
		void muestraTotal();
};

Ventas::Ventas()
{
	vendedor = "vendedor";

	granTotal = 0;
}

void Ventas::iniciaSec()
{
	int resp = 0;
	do
	{
		pideDatos();
		cout << "\nDesea registrar otro vendedor: \n 1)Si \n 2)No \n Respuesta: ";
		cin >> resp;
		while (resp != 2 && resp != 1)
		{
			cout << "\nRespuesta incorrecta, ingrese respuesta valida: \n 1)Si \n 2)No: ";
			cin >> resp;
		}
	} while (resp == 1);
	muestraTotal();
}

void Ventas::pideDatos()
{
	cout << "Ingrese nombre del vendedor: ";
	cin >> vendedor;
	
	for (int i=0;i<=11;i++)
	{
		cout << "Ingrese ventas generadas en el mes " << i + 1 << " : ";
		cin >> ganancias[i];
		granTotal = granTotal + ganancias[i];
	}
}

void Ventas::muestraTotal()
{
	cout << "\nEl gran total es de $" << granTotal<<" MXN." << endl;
}
int main()
{
	Ventas iniciar;
	iniciar.iniciaSec();
}

