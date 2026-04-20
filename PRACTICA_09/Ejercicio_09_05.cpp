// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Fecha creación: 13/04/2026
// Número de ejercicio: 5

/*5. Multiplique dos matrices una de N x M y la otra de M x N*/

#include <iostream>
#include <vector>
using namespace std;

void leer_Matriz(vector<vector<int>> &matriz, int f, int c);
void mostrar_Matriz(vector<vector<int>> matriz, int f, int c);
vector<vector<int>> multiplicar_Matrices(vector<vector<int>> A, vector<vector<int>> B, int n, int m);

int main()
{
    int n, m;

    cout << "Ingrese N (filas de A): ";
    cin >> n;

    cout << "Ingrese M (columnas de A / filas de B): ";
    cin >> m;

    vector<vector<int>> A(n, vector<int>(m));
    vector<vector<int>> B(m, vector<int>(n));

    cout << "\nIngrese matriz A:\n";
    leer_Matriz(A, n, m);

    cout << "\nIngrese matriz B:\n";
    leer_Matriz(B, m, n);

    cout << "\nMatriz A:\n";
    mostrar_Matriz(A, n, m);

    cout << "\nMatriz B:\n";
    mostrar_Matriz(B, m, n);

    vector<vector<int>> productoMatrices = multiplicar_Matrices(A, B, n, m);

    cout << "\nResultado (A x B):\n";
    mostrar_Matriz(productoMatrices, n, n);

    return 0;
}

void leer_Matriz(vector<vector<int>> &matriz, int f, int c)
{
    for(int i=0;i<f;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin >> matriz[i][j];
        }
    }
}

void mostrar_Matriz(vector<vector<int>> matriz, int f, int c)
{
    for(int i=0;i<f;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

vector<vector<int>> multiplicar_Matrices(vector<vector<int>> A, vector<vector<int>> B, int n, int m)
{
    vector<vector<int>> productoMatrices(n, vector<int>(n, 0));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            {
                productoMatrices[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return productoMatrices;
}