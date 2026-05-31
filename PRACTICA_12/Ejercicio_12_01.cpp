// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 13/05/2026
// Número de ejercicio: 1
/*Escritura y lectura básica de archivos
Descripción: Escribe un programa que pida al usuario ingresar una lista de
nombres y guarde cada nombre en un archivo de texto llamado
nombres.txt. Después, el programa debe leer el archivo y mostrar todos los
nombres en la consola*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void archivosalida(string Nombres);
void archivoentrada(string Nombres);

int main()
{
    archivosalida ("Nombres.txt");
    cout<<endl;
    
    archivoentrada ("Nombres.txt");

return 0;
}

void archivosalida(string Nombres)
{
    ofstream archivosalida;
    archivosalida.open (Nombres);
    
    int cantidad;
    string nombre;
    
    cout<<"ingrsar cantidad de nombres: ";
    cin>> cantidad;
    
    for (int i = 0; i < cantidad; i++)
    {
        cout<< "Ingresar nombres: ";
        cin>> nombre;
        archivosalida<<nombre<<endl;
    }
    archivosalida.close();
}
void
archivoentrada(string Nombres)
{
    ifstream archivoentrada;
    archivoentrada.open(Nombres);
    string nombre;
    cout << "\nNombres guardados en el archivo:\n";

    while (archivoentrada >> nombre)
    {
        cout << nombre << endl;
    }
    archivoentrada.close();
}