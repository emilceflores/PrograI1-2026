// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 22/05/2026

/*Calificaciones Curso
Desarrollo: Se desea calcular las notas finales de N alumnos de un curso, así
como también el promedio, mínimo y máximo de éstas. Se recibirá el número de
alumnos y las notas parciales de cada uno de éstos. Las notas parciales
corresponden a la T1, T2, T3, T4 y EF. La nota final se calcula empleando la
fórmula:
NF = 0.7*NP + 0.3*EF
En donde NP es la nota de presentación calculada como:
NP = (T1+T2+T3+T4)/4*/

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

// Definicion de estructuras

struct DatosNotas
{
    int T1;
    int T2;
    int T3;
    int T4;
    int EF;
};

// Prototipado de funciones
void CargarNotas(vector<DatosNotas> &notas, int n);
void MostrarNotas(vector<DatosNotas> notas);
int NumeroAleatorio(int inicio, int fin);

int main()
{
    vector<DatosNotas> notas;
    int n = 0;
    srand(time(NULL));
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> n;
    CargarNotas(notas, n);
    MostrarNotas(notas);
    return 0;
}

int NumeroAleatorio(int inicio, int fin)
{
    return rand() % (fin-inicio+1) + inicio;
}

void CargarNotas(vector<DatosNotas> &notas, int n)
{
    DatosNotas aux_notas;
    for (int i = 0; i < n; i++)
    {
        aux_notas.T1 = NumeroAleatorio(1,100);
        aux_notas.T2 = NumeroAleatorio(1,100);
        aux_notas.T3 = NumeroAleatorio(1,100);
        aux_notas.T4 = NumeroAleatorio(1,100);
        aux_notas.EF = NumeroAleatorio(1,100);
        notas.push_back(aux_notas); // Carga los datos a mi vector
    }
}

void MostrarNotas(vector<DatosNotas> notas)
{
    for (int i = 0; i < notas.size(); i++)
    {
        cout << "NOTAS ESTUDIANTE " << i+1 << endl;
        cout << "\tNota T1: " << notas[i].T1 << endl;
        cout << "\tNota T2: " << notas[i].T2 << endl;
        cout << "\tNota T3: " << notas[i].T3 << endl;
        cout << "\tNota T4: " << notas[i].T4 << endl;
        cout << "\tNOTA PARCIAL: " << (notas[i].T1 + notas[i].T2 + notas[i].T3 + notas[i].T4) / 4 << endl;
        cout << "\tNota EF: " << notas[i].EF << endl;
        cout << "\tNOTA FINAL: " << (((notas[i].T1 + notas[i].T2 + notas[i].T3 + notas[i].T4) / 4) * 0.7) + (notas[i].EF * 0.3) << endl;
    }
}