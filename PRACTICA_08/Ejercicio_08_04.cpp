// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet: 9226768.
// Carrera del estudiante: Diseño digital..
// Fecha creación: 13/04/2023

/*Compresión de datos en una imagen en escala de grises: Dada una imagen en escala
de grises representada por un vector de N valores entre 0 y 255 (estos valores deben ser
generados aleatoriamente), agrupa los valores en segmentos de 10 unidades y muestra
cuántos píxeles hay en cada rango.*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void generar_Pixeles(vector<int> &pixeles, int N);
void contar_Rangos(vector<int> pixeles);

int main()
{
    srand(time(NULL));

    vector<int> pixeles;
    int N;

    cout << "Cantidad de pixeles: ";
    cin >> N;

    generar_Pixeles(pixeles, N);

    cout << "\nPixeles: ";
    for(int i=0;i<pixeles.size();i++)
    {
        cout << pixeles[i] << " ";
    }

    cout << "\n\n";
    contar_Rangos(pixeles);

    return 0;
}

void generar_Pixeles(vector<int> &pixeles, int N)
{
    for(int i=0;i<N;i++)
    {
        pixeles.push_back(rand()%100); // 👈 para que salga como tu ejemplo (0-99)
    }
}

void contar_Rangos(vector<int> pixeles)
{
    vector<int> contador(10, 0); // 0-9 hasta 90-99

    for(int i=0;i<pixeles.size();i++)
    {
        int indice = pixeles[i] / 10;
        contador[indice]++;
    }

    for(int i=0;i<10;i++)
    {
        int inicio = i * 10;
        int fin = inicio + 9;

        cout << inicio << "-" << fin << ": ";

        if(contador[i] == 1)
            cout << "1 pixel\n";
        else
            cout << contador[i] << " pixeles\n";
    }
}