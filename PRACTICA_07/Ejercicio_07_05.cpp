// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet 9226768.
// Carrera del estudiante: Diseño Digital.
// Fecha creación: 06/04/2026

/*Leer 2 vectores de dimensión N y combine ambos en otro vector.*/

#include <iostream>
#include <vector>
using namespace std;

void combinarVectores(vector<int> &vectorA, vector<int> &vectorB, vector<int> &vectorCombinado);

int main() {
    int cantidad;

    vector<int> vectorA;
    vector<int> vectorB;
    vector<int> vectorCombinado;

    cout << "Ingrese cantidad de elementos: ";
    cin >> cantidad;

    cout << "\nVector A:\n";
    for(int i = 0; i < cantidad; i++){
        int numero;
        cout << "Ingrese numero: ";
        cin >> numero;
        vectorA.push_back(numero);
    }

    cout << "\nVector B:\n";
    for(int i = 0; i < cantidad; i++){
        int numero;
        cout << "Ingrese numero: ";
        cin >> numero;
        vectorB.push_back(numero);
    }

    combinarVectores(vectorA, vectorB, vectorCombinado);

    cout << "\ncombinado:\n";
    for(int i = 0; i < vectorCombinado.size(); i++){
        cout << vectorCombinado[i] << " - ";
    }

    return 0;
}
void combinarVectores(vector<int> &vectorA, vector<int> &vectorB, vector<int> &vectorCombinado){
    for(int i = 0; i < vectorA.size(); i++){
        vectorCombinado.push_back(vectorA[i]);
    }

    for(int i = 0; i < vectorB.size(); i++){
        vectorCombinado.push_back(vectorB[i]);
    }
}