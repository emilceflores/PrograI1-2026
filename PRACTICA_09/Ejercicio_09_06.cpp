// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Fecha creación: 13/04/2026
// Número de ejercicio: 6

/*Traspones una matriz de N x M*/

#include <iostream>
#include <vector>
using namespace std;

void leer_Matriz(vector<vector<int>> &matriz, int n, int m);
void mostrar_Matriz(vector<vector<int>> matriz, int n, int m);
vector<vector<int>> transponer_Matriz(vector<vector<int>> matriz, int n, int m);

int main()
{
    int n, m;

    cout << "Ingrese filas (N): ";
    cin >> n;

    cout << "Ingrese columnas (M): ";
    cin >> m;

    vector<vector<int>> matriz(n, vector<int>(m));

    leer_Matriz(matriz, n, m);

    cout << "\nMatriz original:\n";
    mostrar_Matriz(matriz, n, m);

    vector<vector<int>> transpuesta = transponer_Matriz(matriz, n, m);

    cout << "\nMatriz transpuesta:\n";
    mostrar_Matriz(transpuesta, m, n);

    return 0;
}

void leer_Matriz(vector<vector<int>> &matriz, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> matriz[i][j];
        }
    }
}

void mostrar_Matriz(vector<vector<int>> matriz, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

vector<vector<int>> transponer_Matriz(vector<vector<int>> matriz, int n, int m)
{
    vector<vector<int>> nueva(m, vector<int>(n));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            nueva[j][i] = matriz[i][j];
        }
    }

    return nueva;
}