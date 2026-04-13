// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet 9226768.
// Carrera del estudiante: Diseño Digital.
// Fecha creación: 06/04/2026

/*Escriba un programa para introducir los siguientes valores en un arreglo nombrado
voltios: 11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59. Después que se hayan
introducido los datos, haga que su programa despliegue los valores.
11.95 16.32 12.15
8.22 15.98 26.22
13.54 6.45 17.59*/

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<double> voltios;

    voltios.push_back(11.95);
    voltios.push_back(16.32);
    voltios.push_back(12.15);
    voltios.push_back(8.22);
    voltios.push_back(15.98);
    voltios.push_back(26.22);
    voltios.push_back(13.54);
    voltios.push_back(6.45);
    voltios.push_back(17.59);

    cout << "Valores de voltios:\n";// esto muetra una matriz 3x3

    for(int i = 0; i < voltios.size(); i++) {
        cout << voltios[i] << " ";

        if((i + 1) % 3 == 0) // salto de línea cada 3
            cout << endl;
    }

    return 0;
}