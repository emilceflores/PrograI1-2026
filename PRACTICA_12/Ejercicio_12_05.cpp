// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 13/05/2026
// Número de ejercicio: 5

/*Actualizar datos en un archivo
Descripción: Escribe un programa que permita actualizar un archivo de
texto llamado productos.txt, el cual contiene una lista de productos y sus
precios. Cada línea del archivo tiene el formato Producto Precio (por
ejemplo, Manzana 1.50). El programa debe permitir al usuario ingresar el
nombre de un producto y el nuevo precio, y actualizar ese precio en el
archivo. Si el producto no se encuentra, debe indicar que no existe.*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void actualizarproducto(string productos);
void mostrarproductos(string productos);

int main()
{
    actualizarproducto("productos.txt");
    cout << endl;

    mostrarproductos("productos.txt");

    return 0;
}

void actualizarproducto(string productos)
{
    ifstream archivoentrada;
    archivoentrada.open(productos);

    string producto[100];
    float precio[100];

    int cantidad = 0;

    while (!archivoentrada.eof())
    {
    archivoentrada >> producto[cantidad];
    archivoentrada >> precio[cantidad];

    cantidad++;
    }
    archivoentrada.close();

    string buscar;
    float nuevoprecio;
    bool encontrado = false;

    cout << "Ingrese el producto a actualizar: ";
    cin >> buscar;

    cout << "Ingrese el nuevo precio: ";
    cin >> nuevoprecio;

    for (int i = 0; i < cantidad; i++)
    {
        if (producto[i] == buscar)
        {
            precio[i] = nuevoprecio;
            encontrado = true;
        }
    }
    if (encontrado == false)
    {
        cout << "El producto no existe." << endl;
    }
    else
    {
        ofstream archivosalida;
        archivosalida.open(productos);

        for (int i = 0; i < cantidad; i++)
        {
            archivosalida << producto[i] << " "<< precio[i] << endl;
        }
        archivosalida.close();
    }
}

void mostrarproductos(string productos)
{
    ifstream archivoentrada;
    archivoentrada.open(productos);

    string producto;
    float precio;

    cout << "Lista de productos:" << endl;

    while (archivoentrada >> producto >> precio)
    {
        cout << producto << " " << precio << endl;
    }
    archivoentrada.close();
}