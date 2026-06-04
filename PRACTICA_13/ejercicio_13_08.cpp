// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 22/05/2026

/*Olimpiada Nacional
Descripción: El viceministerio de deportes hace una olimpiada a nivel nacional de
los siguientes deportes:
• Tiro con arco
• Atletismo
• Boxeo
• Ciclismo
• Natación
• Esgrima
También se registra los nombres de los atletas y que departamento representa y
que deporte practica.
Realizar un programa en C++ que simule y registre cuantas medallas ha ganado un
atleta y que me muestre el medallero final por departamento*/

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

// Definicion de estructuras

struct DatosAtleta
{
    char nombre[30];
    char departamento[30];
    char deporte[30];
    int medallas;
};

// Prototipado de funciones

void CargarAtletas(vector<DatosAtleta> &atletas, int n);
void MostrarMedallero(vector<DatosAtleta> atletas);
int NumeroAleatorio(int inicio, int fin);

int main()
{
    vector<DatosAtleta> atletas;
    int n = 0;

    srand(time(NULL));

    cout << "Ingrese la cantidad de atletas: ";
    cin >> n;
    cin.ignore();

    CargarAtletas(atletas, n);
    MostrarMedallero(atletas);

    return 0;
}

int NumeroAleatorio(int inicio, int fin)
{
    return rand() % (fin - inicio + 1) + inicio;
}

void CargarAtletas(vector<DatosAtleta> &atletas, int n)
{
    DatosAtleta aux_atleta;

    for (int i = 0; i < n; i++)
    {
        cout << "\nATLETA " << i + 1 << endl;

        cout << "Ingrese el nombre: ";
        cin.getline(aux_atleta.nombre, 30);

        cout << "Ingrese el departamento: ";
        cin.getline(aux_atleta.departamento, 30);

        cout << "Ingrese el deporte: ";
        cin.getline(aux_atleta.deporte, 30);

        aux_atleta.medallas = NumeroAleatorio(0, 5);

        atletas.push_back(aux_atleta);
    }
}

void MostrarMedallero(vector<DatosAtleta> atletas)
{
    int total = 0;

    for (int i = 0; i < atletas.size(); i++)
    {
        cout << "\nATLETA " << i + 1 << endl;
        cout << "Nombre: " << atletas[i].nombre << endl;
        cout << "Departamento: " << atletas[i].departamento << endl;
        cout << "Deporte: " << atletas[i].deporte << endl;
        cout << "Medallas: " << atletas[i].medallas << endl;

        total += atletas[i].medallas;
    }

    cout << "\nMEDALLERO FINAL" << endl;
    cout << "Total de medallas obtenidas: " << total << endl;
}