// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 15/04/2026
// Número de ejercicio: 1

/*Ejercicio 1: Analizador de Calificaciones (Vectores y Strings)
Este ejercicio se enfoca en la manipulación de contenedores dinámicos y el uso
de referencias para devolver múltiples estadísticas desde un módulo void.
Problema: Una institución educativa almacena los nombres de sus estudiantes
en un vector<string> y sus notas finales en un vector<double>. Requerimiento:
Desarrolle una función void procesarResultados(vector<string> &nombres,
vector<double> &notas, double &promedio, int &aprobados) que:
1. 2. 3. 4. Calcule el promedio general de la clase.
Cuente cuántos estudiantes tienen una nota mayor o igual a 51
(aprobados).
Si un estudiante tiene una nota entre 45 y 50, la función debe subirle la nota
a 51 directamente en el vector original (paso por referencia).
En el main, muestre la lista actualizada y las estadísticas.*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void procesarResultados(vector<string> &nombres, vector<double> &notas, double &promedio, int &aprobados);

int main() 
{
    vector<string> nombres = {"Luna", "Dennis", "Jorge", "Janet", "Iker"};
    vector<double> notas = {60, 48, 30, 50, 80};

    double promedio = 0;
    int aprobados = 0;

    procesarResultados(nombres, notas, promedio, aprobados);

    cout << "\nLista actualizada:\n";
    for (int i = 0; i < nombres.size(); i++) 
    {
        cout << nombres[i] << " - " << notas[i] << endl;
    }

    cout << "\nPromedio general: " << promedio << endl;
    cout << "Cantidad de aprobados: " << aprobados << endl;

    return 0;
}

void procesarResultados(vector<string> &nombres, vector<double> &notas, double &promedio, int &aprobados) {
    double suma = 0;
    aprobados = 0;

    for (int i = 0; i < notas.size(); i++) 
    {
        
        if (notas[i] >= 45 && notas[i] <= 50) // Subir nota si está entre 45 y 50
        {
            notas[i] = 51;
        }

        
        if (notas[i] >= 51) // Contar aprobados 
        {
            aprobados++;
        }

        suma += notas[i];
    }

    promedio = suma / notas.size();
}