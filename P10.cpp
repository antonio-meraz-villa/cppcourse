// P10.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*
Nombre: Jesus Antonio Meraz Villa
Fecha: 08/09/2020
Version: 1.0
Parcial: 1ro.
*/

#include <iostream>
using namespace std;

class Estudiante
{
    private:
        string cedula;
        string nombre;
        double notas[3] = { 100,100,100 };
        double notaFinal;
        int bandAprobado;

    public:
        Estudiante();
        void imprimeDatos();
        void entregaNota();
        void aprobado();
};

Estudiante::Estudiante()
{
    cedula = "270484";
    nombre = "Meraz Villa Jesus Antonio";
    notaFinal = 100;
    bandAprobado = 0;
}

void Estudiante::imprimeDatos()
{
    cout << "\nEl estudiante de nombre " << nombre << " con cedula " <<cedula<< ". \n";
    if (bandAprobado == 1)
    {
        cout << "Ha aprobado el curso de Programacion II con " << notaFinal << ". \n";
    }
    else
    {
        cout << "Ha reprobado el curso de Programacion II con " << notaFinal << ". \n";
    }
    
}

void Estudiante::entregaNota()
{
    double  promedio = 0;
    int j = 0;

    for (int i = 0; i <= 2; i++)
    {
        promedio = promedio + notas[i];
        j++;
    }
    
    notaFinal = promedio / j;
    aprobado();
}


void Estudiante::aprobado()
{
    if (notaFinal < 48)
    {
        bandAprobado = 0;
    }
    else
    {
        bandAprobado = 1; 
    }
    imprimeDatos();
}
int main()
{
    Estudiante iniciar;
    iniciar.entregaNota();
}

