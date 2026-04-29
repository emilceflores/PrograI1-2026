// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Fecha creación: 13/04/2026
// Número de ejercicio: 4

/*Generar la matriz para un orden nxn
Sea n=5
1 2 3 4 5
3 4 5 6 7
5 6 7 8 9
7 8 9 10 11
9 10 11 12 13*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Ingrese n: ";
    cin >> n;

    vector<vector<int>> matriz(n, vector<int>(n));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            matriz[i][j] = (2*i + 1) + j;
        }
    }

    cout << "\nMatriz generada:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}