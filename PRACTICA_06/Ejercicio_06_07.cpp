// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet: 9226768
// Carrera del estudiante: Diseño Digital
// Fecha creación: 27/03/2026



#include <iostream>

using namespace std;


void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota);

int main()
{
    double sumaTotal = 0;
    int cantidadNotas = 0;
    int Numero;
    double nota;

    cout << "Ingrese la cantidad de notas: ";
    cin >> Numero;

    cout << "Antes: sumaTotal = " << sumaTotal << ", cantidadNotas = " << cantidadNotas << endl;

    for(int i = 1; i <= Numero; i++)
    {
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;

        agregarNota(sumaTotal, cantidadNotas, nota);
    }

    cout << "Despues:" << endl;
    cout << "Suma total = " << sumaTotal << endl;
    cout << "Cantidad de notas = " << cantidadNotas << endl;

    return 0;
}


void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota)
{
    sumaTotal = sumaTotal + nuevaNota;
    cantidadNotas = cantidadNotas + 1;
}