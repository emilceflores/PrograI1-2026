// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet: 9226768
// Carrera del estudiante: Diseño Digital
// Fecha creación: 27/03/2026

/*6. Cree una función void calcularTiempo(int totalSegundos, int &horas, int &minutos, int
&segundos). La función recibe un número entero de segundos y debe modificar las
variables de referencia para que contengan las horas, minutos y segundos y desplegarlos
en el main().*/

#include <iostream>

using namespace std;


void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos);

int main()
{
    int totalSegundos;
    int horas;
    int minutos;
    int segundos;

    cout << "Ingrese los segundos totales: ";
    cin >> totalSegundos;

    cout << "Antes: totalSegundos = " << totalSegundos << endl;

    calcularTiempo(totalSegundos, horas, minutos, segundos);

    cout << "Despues:" << endl;
    cout << "Horas = " << horas << endl;
    cout << "Minutos = " << minutos << endl;
    cout << "Segundos = " << segundos << endl;

    return 0;
}

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos)
{
    horas = totalSegundos / 3600;
    totalSegundos = totalSegundos % 3600;

    minutos = totalSegundos / 60;
    segundos = totalSegundos % 60;
}