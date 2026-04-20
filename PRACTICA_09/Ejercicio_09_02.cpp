// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Fecha creación: 13/04/2026
// Número de ejercicio: 2

/*Generar una matriz de N x N con números al azar entre A y B, y determinar:
• La suma de la última columna
• El producto total de la última fila
• Obtener el mayor valor y su posición
• Obtener la desviación estándar de todos los elementos de la matriz*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void generar_Matriz(vector<vector<int>> &matriz, int n, int A, int B);
void mostrar_Matriz(vector<vector<int>> matriz, int n);
int suma_Ultima_Columna(vector<vector<int>> matriz, int n);
long long producto_Ultima_Fila(vector<vector<int>> matriz, int n);
void mayor_Valor(vector<vector<int>> matriz, int n);
double desviacion_Estandar(vector<vector<int>> matriz, int n);

int main()
{
    srand(time(NULL));

    int n, A, B;

    cout << "Ingrese dimension N: ";
    cin >> n;

    cout << "Ingrese rango A y B: ";
    cin >> A >> B;

    vector<vector<int>> matriz(n, vector<int>(n));

    generar_Matriz(matriz, n, A, B);

    cout << "\nMatriz:\n";
    mostrar_Matriz(matriz, n);

    cout << "\nSuma ultima columna: " << suma_Ultima_Columna(matriz, n) << endl;
    cout << "Producto ultima fila: " << producto_Ultima_Fila(matriz, n) << endl;

    mayor_Valor(matriz, n);

    cout << "Desviacion estandar: " << desviacion_Estandar(matriz, n) << endl;

    return 0;
}

void generar_Matriz(vector<vector<int>> &matriz, int n, int A, int B)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            matriz[i][j] = A + rand() % (B - A + 1);
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

int suma_Ultima_Columna(vector<vector<int>> matriz, int n)
{
    int suma = 0;
    for(int i=0;i<n;i++)
    {
        suma += matriz[i][n-1];
    }
    return suma;
}

long long producto_Ultima_Fila(vector<vector<int>> matriz, int n)
{
    long long prod = 1;
    for(int j=0;j<n;j++)
    {
        prod *= matriz[n-1][j];
    }
    return prod;
}

void mayor_Valor(vector<vector<int>> matriz, int n)
{
    int mayor = matriz[0][0];
    int fila = 0, col = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matriz[i][j] > mayor)
            {
                mayor = matriz[i][j];
                fila = i;
                col = j;
            }
        }
    }

    cout << "Mayor valor: " << mayor 
         << " en posicion (" << fila << "," << col << ")\n";
}

double desviacion_Estandar(vector<vector<int>> matriz, int n)
{
    int total = n * n;
    double suma = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            suma += matriz[i][j];
        }
    }

    double media = suma / total;

    double suma2 = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            suma2 += pow(matriz[i][j] - media, 2);
        }
    }

    return sqrt(suma2 / total);
}