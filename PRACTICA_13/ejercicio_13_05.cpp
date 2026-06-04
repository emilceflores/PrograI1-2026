// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 22/05/2026

/*Sistema de gestión de películas
Descripción: Define una estructura llamada Pelicula con los siguientes campos:
• titulo (cadena de caracteres)
• director (cadena de caracteres)
• duracion (entero, en minutos)
• anio_estreno (entero)
• genero (cadena de caracteres)
Escribe un programa que permita al usuario registrar N películas en un arreglo de
estructuras y luego realice lo siguiente:
• Mostrar todas las películas de un género específico introducido por el usuario.
• Mostrar todas las películas dirigidas por un director específico introducido por
el usuario.*/

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

// Definicion de estructuras

struct Pelicula
{
    char titulo[30];
    char director[30];
    int duracion;
    int anio_estreno;
    char genero[30];
};

// Prototipado de funciones

void CargarPeliculas(vector<Pelicula> &peliculas, int n);
void MostrarGenero(vector<Pelicula> peliculas);
void MostrarDirector(vector<Pelicula> peliculas);

int main()
{
    vector<Pelicula> peliculas;
    int n = 0;

    cout << "Ingrese la cantidad de peliculas: ";
    cin >> n;
    cin.ignore();

    CargarPeliculas(peliculas, n);

    MostrarGenero(peliculas);
    MostrarDirector(peliculas);

    return 0;
}

void CargarPeliculas(vector<Pelicula> &peliculas, int n)
{
    Pelicula aux_pelicula;

    for (int i = 0; i < n; i++)
    {
        cout << "\nPELICULA " << i + 1 << endl;

        cout << "Ingrese el titulo: ";
        cin.getline(aux_pelicula.titulo, 30);

        cout << "Ingrese el director: ";
        cin.getline(aux_pelicula.director, 30);

        cout << "Ingrese la duracion (minutos): ";
        cin >> aux_pelicula.duracion;

        cout << "Ingrese el anio de estreno: ";
        cin >> aux_pelicula.anio_estreno;
        cin.ignore();

        cout << "Ingrese el genero: ";
        cin.getline(aux_pelicula.genero, 30);

        peliculas.push_back(aux_pelicula);
    }
}

void MostrarGenero(vector<Pelicula> peliculas)
{
    char genero_buscar[30];

    cout << "\nIngrese el genero a buscar: ";
    cin.getline(genero_buscar, 30);

    cout << "\nPELICULAS DEL GENERO " << genero_buscar << endl;

    for (int i = 0; i < peliculas.size(); i++)
    {
        if (strcmp(peliculas[i].genero, genero_buscar) == 0)
        {
            cout << "Titulo: " << peliculas[i].titulo << endl;
            cout << "Director: " << peliculas[i].director << endl;
            cout << "Duracion: " << peliculas[i].duracion << endl;
            cout << "Anio estreno: " << peliculas[i].anio_estreno << endl;
            cout << "Genero: " << peliculas[i].genero << endl;
            cout << endl;
        }
    }
}

void MostrarDirector(vector<Pelicula> peliculas)
{
    char director_buscar[30];

    cout << "Ingrese el director a buscar: ";
    cin.getline(director_buscar, 30);

    cout << "\nPELICULAS DEL DIRECTOR " << director_buscar << endl;

    for (int i = 0; i < peliculas.size(); i++)
    {
        if (strcmp(peliculas[i].director, director_buscar) == 0)
        {
            cout << "Titulo: " << peliculas[i].titulo << endl;
            cout << "Director: " << peliculas[i].director << endl;
            cout << "Duracion: " << peliculas[i].duracion << endl;
            cout << "Anio estreno: " << peliculas[i].anio_estreno << endl;
            cout << "Genero: " << peliculas[i].genero << endl;
            cout << endl;
        }
    }
}