// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet 9226768.
// Carrera del estudiante: Diseño Digital.
// Fecha creación: 06/04/2026

/*Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros
cada uno, pida valores para ‘vector1’ y ‘vector2’ y calcule vector3=vector1+vector2.*/

#include <iostream>
#include <vector>

using namespace std;

void sumarVectores(vector<int> &vector1, vector<int> &vector2, vector<int> &vectorResultado);

int main() 
{
    vector<int> vector1;
    vector<int> vector2;
    vector<int> vector3;

    cout << "Ingrese valores para el primer vector:\n";
    for(int i = 0; i < 5; i++)
    {
        int numero;
        cout << "Ingrese numero: ";
        cin >> numero;
        vector1.push_back(numero);
    }

    cout << "\nIngrese valores para el segundo vector:\n";
    for(int i = 0; i < 5; i++)
    {
        int numero;
        cout << "Ingrese numero: ";
        cin >> numero;
        vector2.push_back(numero);
    }

    sumarVectores(vector1, vector2, vector3);

    cout << "\nResultado (vector3 = vector1 + vector2):\n";
    for(int i = 0; i < vector3.size(); i++)
    {
        cout << vector3[i] << " - ";
    }

    return 0;
}

void sumarVectores(vector<int> &vector1, vector<int> &vector2, vector<int> &vectorResultado)
{
    for(int i = 0; i < vector1.size(); i++)
    {
        int suma = vector1[i] + vector2[i];
        vectorResultado.push_back(suma);
    }
}