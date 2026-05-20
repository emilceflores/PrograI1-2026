// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 11/05/2026

/*6. Sistema de Gestión de Notas (Parciales)
Un docente almacena las notas de 3 parciales de un grupo de 20 estudiantes en una
matriz de 20 X 3.
Utilizando funcione, calcule la nota final de cada estudiante (promedio simple).
Al finalizar, el programa debe reportar el índice (número de lista) del estudiante con el
mejor promedio de todo el curso y el promedio general del grupo.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void llenar_notas(int matriz[20][3]);
void calcular_nota_final(int matriz[20][3]);
int main()
{
    int matriz[20][3];
    srand (time(NULL));

    llenar_notas(matriz);
    calcular_nota_final(matriz);

    return 0;
}
void llenar_notas(int matriz[20][3])
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = rand() % 101; // nota al azar
        }
    }
}
void calcular_nota_final(int matriz[20][3])//calcule la nota final de cada estudiante (promedio simple).
{
    float promedio=0;
    float suma= 0;
    float mejor_promedio = 0;
    int mejor_estudiante = 0;

    for(int i = 0; i < 20; i++)
    {
        promedio = (matriz[i][0] + matriz[i][1] + matriz[i][2]) / 3.0;
        cout << "ESTUDIANTE " << i + 1<< ": " << promedio << endl;

        suma+= promedio;

        if(promedio > mejor_promedio)
        {
            mejor_promedio = promedio;
            mejor_estudiante = i + 1;
        }
    }
    cout << "\n";

    cout << "MEJOR PROMEDIO:\n";
    cout << "Estudiante " << mejor_estudiante<< ": " << mejor_promedio << endl;

    cout << "\nPROMEDIO GENERAL DEL GRUPO:\n"<< suma / 20 << endl;
}
