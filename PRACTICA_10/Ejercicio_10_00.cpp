// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 15/04/2026
// Número de ejercicio: 0

/*Ejercicio 0: Generador de Nombres y Apellidos.
Generar una función que en base a dos vectores llamados Nombres[10] y
Apellidos[10], genere aleatoriamente N nombres completos.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

using namespace std;


int GenerarAleatorio(int LimInferior, int LimSuperior);
void generar_nombre(vector<string> Nombres, vector<string> Apellidos, int n);

int main() 
{
    vector<string> Nombres = {"Luna", "Dennis", "Jorge", "Janet", "Iker", "Jairo", "Natalia", "Hanna", "Emika", "Avril"};
    
    vector<string> Apellidos = {"Flores", "Gutierrez", "Pilco", "Olivares", "Arce", "Bustillo", "Ticona", "Valeriano", "Hubner", "Maydana"};

    srand(time(NULL));

    int n;
    cout << "Ingrese la cantidad de nombres a generar: ";
    cin >> n;

    generar_nombre(Nombres, Apellidos, n);

    return 0;
}

void generar_nombre(vector<string> Nombres, vector<string> Apellidos, int n) {
    for (int i = 0; i < n; i++) 
    {
        string nombre_completo = 
            Nombres[GenerarAleatorio(0, 9)] + " " +
            Apellidos[GenerarAleatorio(0, 9)] + " " +
            Apellidos[GenerarAleatorio(0, 9)];

        cout << nombre_completo << endl;
    }
}

int GenerarAleatorio(int LimInferior, int LimSuperior) {
    return rand() % (LimSuperior - LimInferior + 1) + LimInferior;
}