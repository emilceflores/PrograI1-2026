// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet 9226768.
// Carrera del estudiante: Diseño Digital.
// Fecha creación: 06/04/2026

/* Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro
vector.*/

#include <iostream>
#include <vector>

using namespace std;

void ingresarVector(vector<int> &vectorNumeros, int cantidad);
void multiplicarVectores(vector<int> &vector1, vector<int> &vector2, vector<int> &Resultado);

int main() 
{
    int cantidad;

    vector<int> vector_1;
    vector<int> vector_2;
    vector<int> Resultado;

    cout << "Ingrese cantidad de elementos: ";
    cin >> cantidad;

    cout << "\nPtimer vector:\n";
    ingresarVector(vector_1, cantidad);

    cout << "\nSegundo vector:\n";
    ingresarVector(vector_2, cantidad);

    multiplicarVectores(vector_1, vector_2,Resultado);

    cout << "\nResultado de la multiplicacion:\n";
    for(int i = 0; i < Resultado.size(); i++){
        cout << Resultado[i] << " - ";
    }

    return 0;
}
void ingresarVector(vector<int> &vectorNumeros, int cantidad)
{
    for(int i = 0; i < cantidad; i++){
        int numero;
        cout << "Ingrese numero: ";
        cin >> numero;
        vectorNumeros.push_back(numero);
    }
}
void multiplicarVectores(vector<int> &vector1, vector<int> &vector2, vector<int> &vectorResultado)
{
    for(int i = 0; i < vector1.size(); i++){
        int resultado = vector1[i] * vector2[i];
        vectorResultado.push_back(resultado);
    }
}