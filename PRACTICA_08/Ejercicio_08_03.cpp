// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 13/04/2026

/*Rango de calificaciones en un curso: Un maestro tiene N calificaciones de sus
estudiantes en un vector. Las calificaciones deben ser llenadas en forma aleatoria entre 0
y 100. Luego debe calcular el porcentaje de estudiantes en cada rango:
• 0-59 (Reprobado)
• 60-79 (Regular)
• 80-89 (Bueno)
• 90-100 (Excelente)*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void generar_Calificaciones(vector<int> &calif, int N);
void calcular_Rangos(vector<int> calif);

int main()
{
    srand(time(NULL));

    vector<int> calificaciones;
    int N;

    cout << "Ingrese cantidad de estudiantes: ";
    cin >> N;

    generar_Calificaciones(calificaciones, N);

    cout << "\nCalificaciones:\n";
    for(int i=0;i<calificaciones.size();i++)
    {
        cout << calificaciones[i] << " ";
    }

    cout << "\n\nResultados:\n";
    calcular_Rangos(calificaciones);

    return 0;
}

void generar_Calificaciones(vector<int> &calif, int N)
{
    for(int i=0;i<N;i++)
    {
        int nota = rand()%101; 
        calif.push_back(nota);
    }
}

void calcular_Rangos(vector<int> calif)
{
    int reprobado=0, regular=0, bueno=0, exelente=0;

    for(int i=0;i<calif.size();i++)
    {
        if(calif[i] <= 59) reprobado++;
        else if(calif[i] <= 79) regular++;
        else if(calif[i] <= 89) bueno++;
        else exelente++;
    }

    int total = calif.size();

    cout << "Reprobados: " << (reprobado*100)/total << "%\n";
    cout << "Regulares: " << (regular*100)/total << "%\n";
    cout << "Buenos: " << (bueno*100)/total << "%\n";
    cout << "Excelentes: " << (exelente*100)/total << "%\n";
}