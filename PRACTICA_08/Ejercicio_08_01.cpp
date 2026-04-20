// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 13/04/2026

/*Se tiene 3 vectores de 10 elementos cada uno:
• Vector de nombres.
• Vector Apellidos
• Vector de Edad
Seleccione 1 nombre, 1 apellido y una edad al azar y despliegue en pantalla.
Esto debe realizar N veces.*/

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void generar_Nombres(vector<string> &nombres);
void generar_Apellidos(vector<string> &apellidos);
void generar_Edades(vector<int> &edades);
void mostrar_Personas(vector<string> nombres, vector<string> apellidos, vector<int> edades, int N);

int main()
{
    srand(time(NULL));

    vector<string> listNombres;
    vector<string> listApellidos;
    vector<int> listEdades;

    generar_Nombres(listNombres);
    generar_Apellidos(listApellidos);
    generar_Edades(listEdades);

    int N;
    cout << "Cuantas veces desea generar personas: ";
    cin >> N;

    mostrar_Personas(listNombres, listApellidos, listEdades, N);

    return 0;
}

void generar_Nombres(vector<string> &nombres)
{
    nombres = {"Jael", "Emilce", "Avril", "Emilka", "Dennis",
               "Janet", "Jorge", "Gabriela", "Miguel", "Belen"};
}

void generar_Apellidos(vector<string> &apellidos)
{
    apellidos = {"Flores", "Gutierrez", "Arce", "Bustillo", "Valeriano",
                 "Hubner", "Parra", "Vargas", "Quispe", "Maydana"};
}

void generar_Edades(vector<int> &edades)
{
    for(int i=0; i<10; i++)
    {
        edades.push_back(18 + rand()%43); // edades entre 18 y 60
    }
}

void mostrar_Personas(vector<string> nombres, vector<string> apellidos, vector<int> edades, int N)
{
    for(int i=0; i<N; i++)
    {
        string nombre = nombres[rand()%nombres.size()];
        string apellido = apellidos[rand()%apellidos.size()];
        int edad = edades[rand()%edades.size()];

        cout << nombre << " " << apellido << " - Edad: " << edad << endl;
    }
}