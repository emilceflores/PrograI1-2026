// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 15/04/2026
// Número de ejercicio: 2

/*Ejercicio 2: Control de Inventario Multi-Depósito (Integración Total)
Este es el reto más completo, simulando un sistema real donde se cruza
información de nombres (strings), listas de stock (vectores) y distribución física
(matrices).
Problema: Una empresa tiene una lista de nombres de productos (vector<string>).
El stock físico se almacena en una matriz int bodega[N][M] donde cada fila es un
producto y cada columna es un depósito diferente. Requerimiento: Desarrolle un
sistema modular con las siguientes funciones void:
1. void inicializarInventario(int bodega[3][3]): Llena la matriz con valores
aleatorios entre 0 y 100.
2. void balancearCarga(int bodega[3][3], int filaProducto, int
&totalTransferido): Si el depósito 1 de un producto tiene más de 80
unidades, transfiere el excedente al depósito 2 de ese mismo producto,
modificando la matriz original y actualizando el totalTransferido por
referencia.
3. void mostrarReporte(const vector<string> &nombres, int bodega[3][3]):
Imprime el nombre del producto seguido de su stock en los 3 depósitos.*/

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void inicializarInventario(int bodega[3][3]);
void balancearCarga(int bodega[3][3], int filaProducto, int &totalTransferido);
void mostrarReporte(vector<string> &nombres, int bodega[3][3]);

int main() 
{
    vector<string> nombres = {"Laptop", "Mouse", "Teclado"};

    int bodega[3][3];

    srand(time(NULL));

    int totalTransferido = 0;

    inicializarInventario(bodega);

    for (int i = 0; i < 3; i++) 
    {
        balancearCarga(bodega, i, totalTransferido);
    }

    mostrarReporte(nombres, bodega);

    cout << "\nTotal transferido: " << totalTransferido << endl;

    return 0;
}

void inicializarInventario(int bodega[3][3]) 
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) 
        {
            bodega[i][j] = rand() % 101; 
        }
    }
}

void balancearCarga(int bodega[3][3], int filaProducto, int &totalTransferido) {

    if (bodega[filaProducto][0] > 80) 
    {
        int excedente = bodega[filaProducto][0] - 80;

        bodega[filaProducto][0] -= excedente;
        bodega[filaProducto][1] += excedente;

        totalTransferido += excedente;
    }
}

void mostrarReporte(vector<string> &nombres, int bodega[3][3])
 {
    cout << "\nREPORTE DE INVENTARIO:\n";

    for (int i = 0; i < 3; i++) 
    {
        cout << nombres[i] << ": ";

        for (int j = 0; j < 3; j++) 
        {
            cout << bodega[i][j] << " ";
        }

        cout << endl;
    }
}