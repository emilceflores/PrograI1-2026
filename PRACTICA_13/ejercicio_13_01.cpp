// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 22/05/2026

/*Registro de una biblioteca
Descripción: Define una estructura llamada Libro con los siguientes campos:
• titulo (cadena de caracteres)
• autor (cadena de caracteres)
• anio_publicacion (entero)
• disponible (booleano, que indica si el libro está disponible o no)
Escribe un programa que permita al usuario registrar los datos de 1 libros, y luego
muestre los datos del libro, indicando si está o no disponible.*/

#include <iostream>

using namespace std;

// Definir estructuras
struct DatosLibro
{
    char titulo[30]; // No utlizar string
    char autor[30];
    int anio_publicacion;
    bool disponible;
};

// Prototipar Funciones
void RegistrarLibro(DatosLibro &libro);
void MostrarLibro(DatosLibro libro);

int main()
{
    DatosLibro libro;
    RegistrarLibro(libro);
    MostrarLibro(libro);
    return 0;
}

void RegistrarLibro(DatosLibro &libro)
{
    char opcion;
    cout << "Ingrese el titulo: ";
    cin.getline(libro.titulo, 30);
    cout << "Ingrese el autor: ";
    cin.getline(libro.autor, 30);
    cout << "Ingrese el año de publicacion: ";
    cin >> libro.anio_publicacion;
    cout << "El libro esta disponible (S/N):";
    cin >> opcion;
    if (opcion == 'S' || opcion == 's')
    {
        libro.disponible = true;
    }
    else
    {
        libro.disponible = false;
    }
}

void MostrarLibro(DatosLibro libro)
{
    system("cls");
    cout << "DATOS LIBRO" << endl;
    cout << "Titulo: " << libro.titulo << endl;
    cout << "Autor: " << libro.autor << endl;
    cout << "Año publicacion: " << libro.anio_publicacion << endl;
    if (libro.disponible)
    {
        cout << "Libro DISPONIBLE" << endl;
    }
    else
    {
        cout << "Libro NO ESTA DISPONIBLE" << endl;
    }
}