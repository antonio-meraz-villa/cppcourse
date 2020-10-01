// P9.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*
Nombre: Jesus Antonio Meraz Villa
Fecha: 21/09/2020
Version: 1.0
Parcial: 1ro.
*/

#include <iostream>
using namespace std;

class Media
{
	private:
		double vectorPromedio[100] = {0}; // Se que se hace con listas pero son mi debilidad
		double contador;
		double promedio;

	public:
		Media();
		void iniciaSec();
		void pideDatos();
		void promedia();
		void muestraDatos();
};

Media::Media()
{
	contador = 0;
	promedio = 0;
}

void Media::iniciaSec()
{
	int resp = 0;
	do
	{
		pideDatos();
		cout << "Desea intentar de nuevo: \n 1)Si \n 2)No:";
		cin >> resp;
		while (resp != 2 && resp != 1)
		{
			cout << "Respuesta incorrecta, desea intentar de nuevo: \n 1)Si \n 2)No: ";
			cin >> resp;
		}
	} while (resp == 1);
	
}

void Media::pideDatos()
{
	int i = 0;
	do
	{
		cout << "\nInserte valores para promediar: ";
		cin >> vectorPromedio[i];
		i++;
	} 
	while (vectorPromedio[i-1] != 0);
	contador = i;
	
	promedia();
}

void Media::promedia()
{
	promedio = 0;
	double suma;
	suma = 0;
	for (int i = 0; i <= contador; i++)
	{
		suma = suma + vectorPromedio[i];
	}
	promedio = suma / (contador-1);
	muestraDatos();
}

void Media::muestraDatos()
{
	cout << "El promedio obtenido de los numeros ingresados es: " << promedio << ". \n";
}

int main()
{
	Media inicia;
	inicia.iniciaSec();
}

