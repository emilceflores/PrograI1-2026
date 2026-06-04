// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 22/05/2026

/*Datos de un atleta
Descripción: Crea una estructura llamada Atleta que contenga los siguientes
campos:
• nombre (cadena de caracteres)
• pais (cadena de caracteres)
• edad (entero)
• mejor_tiempo (entero, en segundos)
Escribe un programa que permita al usuario ingresar los datos de N atletas y, al final,
muestre el nombre y país del atleta con el mejor tiempo registrado.*/

#include <iostream>
#include <vector>

using namespace std;



struct Atleta // Definicion de estructuras
{
    char nombre[30];
    char pais[30];
    int edad;
    int mejor_tiempo;
};

// Prototipado de funciones

void CargarAtletas(vector<Atleta> &atletas, int n);
void MostrarMejorAtleta(vector<Atleta> atletas);

int main()
{
    vector<Atleta> atletas;
    int n = 0;

    cout << "Ingrese la cantidad de atletas: ";
    cin >> n;
    cin.ignore();

    CargarAtletas(atletas, n);
    MostrarMejorAtleta(atletas);

    return 0;
}

void CargarAtletas(vector<Atleta> &atletas, int n)
{
    Atleta aux_atleta;

    for (int i = 0; i < n; i++)
    {
        cout << "\nATLETA " << i + 1 << endl;

        cout << "Ingrese el nombre: ";
        cin.getline(aux_atleta.nombre, 30);

        cout << "Ingrese el pais: ";
        cin.getline(aux_atleta.pais, 30);

        cout << "Ingrese la edad: ";
        cin >> aux_atleta.edad;

        cout << "Ingrese el mejor tiempo (segundos): ";
        cin >> aux_atleta.mejor_tiempo;

        cin.ignore();

        atletas.push_back(aux_atleta);
    }
}

void MostrarMejorAtleta(vector<Atleta> atletas)
{
    int pos_mejor = 0;

    for (int i = 1; i < atletas.size(); i++)
    {
        if (atletas[i].mejor_tiempo < atletas[pos_mejor].mejor_tiempo)
        {
            pos_mejor = i;
        }
    }

    cout << "\nMEJOR ATLETA" << endl;
    cout << "Nombre: " << atletas[pos_mejor].nombre << endl;
    cout << "Pais: " << atletas[pos_mejor].pais << endl;
    cout << "Mejor tiempo: " << atletas[pos_mejor].mejor_tiempo << " segundos" << endl;
}