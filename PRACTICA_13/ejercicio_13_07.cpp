// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 22/05/2026

/*Inventario de productos en una tienda
Descripción: Define una estructura llamada Producto con los siguientes campos:
• nombre (cadena de caracteres)
• codigo (cadena de caracteres)
• precio (decimal)
• cantidad_en_inventario (entero)
• observaciones (cadena de caracteres)
Luego, escribe un programa que permita:
• Registrar N productos en el inventario.
• Mostrar el producto más caro en el inventario.
• Mostrar la cantidad total de productos en inventario.
• Si un producto se encuentra con cantidad_en_inventario menor a 5, en el
campo observaciones debe tener un mensaje de advertencia “PRUDUCTO
CON BAJA CANTIDAD DE INVENTARIO”.*/

#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

// Definicion de estructuras

struct DatosProducto
{
    char nombre[30];
    char codigo[5];
    double precio;
    int cantidad_en_inventario;
    char observaciones[50];
};

// Prototipado de funciones
void IngresarProductos(vector<DatosProducto> &productos, int n);
void MostrarProductos(vector<DatosProducto> productos);
void ProductoMasCaro(vector<DatosProducto> productos);
int CantidadProductos(vector<DatosProducto> productos);

int main()
{
    vector<DatosProducto> productos;
    int n = 0;
    cout << "Ingrese la cantidad de productos: ";
    cin >> n;
    cin.ignore();
    IngresarProductos(productos, n);
    MostrarProductos(productos);
    ProductoMasCaro(productos);
    cout << endl << "La cantidad total de productos es: " << CantidadProductos(productos) << endl;
    return 0;
}

void IngresarProductos(vector<DatosProducto> &productos, int n)
{
    DatosProducto aux_producto; // Utilizar variable auxiliares, cuando lleno un vector
    for (int i = 0; i < n; i++)
    {
        cout << "DATOS PRODUCTO " << i+1 << endl;
        cout << "================" << endl;
        cout << "Nombre del producto: ";
        cin.getline(aux_producto.nombre, 30);
        cout << "Codigo del producto: ";
        cin.getline(aux_producto.codigo, 5);
        cout << "Precio del producto: ";
        cin >> aux_producto.precio;
        cout << "Cantidad del producto: ";
        cin >> aux_producto.cantidad_en_inventario;
        cin.ignore();
        if (aux_producto.cantidad_en_inventario < 5)
        {
            strcpy(aux_producto.observaciones, "PRODUCTO CON BAJA CANTIDAD DE INVENTARIO");
        }
        else
        {
            strcpy(aux_producto.observaciones, "-");
        }

        productos.push_back(aux_producto);
    }
}

void MostrarProductos(vector<DatosProducto> productos)
{
    system("cls");
    for (int i = 0; i < productos.size(); i++)
    {
        cout << "DATOS PRODUCTO " << i+1 << endl;
        cout << "================" << endl;
        cout << "\tNombre: " << productos[i].nombre << endl;
        cout << "\tCodigo: " << productos[i].codigo << endl;
        cout << "\tPrecio: " << productos[i].precio << endl;
        cout << "\tCantidad: " << productos[i].cantidad_en_inventario << endl;
        cout << "\tObservacion: " << productos[i].observaciones << endl;
        cout << endl;
    }    
}

void ProductoMasCaro(vector<DatosProducto> productos)
{
    DatosProducto producto_mas_caro;
    for (int i = 0; i < productos.size(); i++)
    {
        if (i == 0)
        {
            producto_mas_caro = productos[i];
        }
        else
        {
            if (productos[i].precio > producto_mas_caro.precio)
            {
                producto_mas_caro = productos[i];
            }
        }
    }

    cout << "PRODUCTO MAS CARO" << endl;
    cout << "=================" << endl;
    cout << "\tNombre: " << producto_mas_caro.nombre << endl;
    cout << "\tCodigo: " << producto_mas_caro.codigo << endl;
    cout << "\tPrecio: " << producto_mas_caro.precio << endl;
    cout << "\tCantidad: " << producto_mas_caro.cantidad_en_inventario << endl;
    cout << "\tObservacion: " << producto_mas_caro.observaciones << endl;
}

int CantidadProductos(vector<DatosProducto> productos)
{
    int sumaCantidad = 0; // Cuando es suma, siempre comenzar en cero
    for (int i = 0; i < productos.size(); i++)
    {
        sumaCantidad += productos[i].cantidad_en_inventario;
    }
    return sumaCantidad;
}