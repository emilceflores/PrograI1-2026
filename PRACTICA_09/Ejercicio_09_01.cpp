// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Fecha creación: 13/04/2026
// Número de ejercicio: 1

/*Elabore un programa que lea una matriz de orden n x n y la cambie la fila 1 por la fila
n.
Por ejemplo, si la matriz que da el usuario es:
4 7 1 3 5
2 0 6 9 7
3 1 2 6 4
Entonces el programa debe escribir la matriz:
3 1 2 6 4
2 0 6 9 7
4 7 1 3 5*/

#include <iostream>
#include <vector>
using namespace std;

void leer_Matriz(vector<vector<int>> &matriz, int n);
void mostrar_Matriz(vector<vector<int>> matriz, int n);
void intercambiar_Filas(vector<vector<int>> &matriz, int n);

int main()
{
    int n;
    cout << "Ingrese dimension n: ";
    cin >> n;

    vector<vector<int>> matriz(n, vector<int>(n));

    leer_Matriz(matriz, n);

    cout << "\nMatriz original:\n";
    mostrar_Matriz(matriz, n);

    intercambiar_Filas(matriz, n);

    cout << "\nMatriz modificada:\n";
    mostrar_Matriz(matriz, n);

    return 0;
}

void leer_Matriz(vector<vector<int>> &matriz, int n)
{
    cout << "Ingrese los datos:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> matriz[i][j];
        }
    }
}

void mostrar_Matriz(vector<vector<int>> matriz, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void intercambiar_Filas(vector<vector<int>> &matriz, int n)
{
    for(int j=0;j<n;j++)
    {
        int aux = matriz[0][j];
        matriz[0][j] = matriz[n-1][j];
        matriz[n-1][j] = aux;
    }
}