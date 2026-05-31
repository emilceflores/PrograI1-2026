// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 13/05/2026
// Número de ejercicio: 7

/*Promedio de calificaciones por estudiante
Descripción: Escribe un programa que lea un archivo calificaciones.txt,
donde cada línea contiene el nombre de un estudiante seguido de varias
calificaciones. El programa debe calcular el promedio de cada estudiante y
escribirlo en un archivo promedios.txt en el formato Nombre Promedio*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void calcularpromedio(string calificaciones);
int main()
{
    calcularpromedio("calificaciones.txt");

    return 0;
}

void calcularpromedio(string calificaciones)
{
    ifstream archivoentrada;
    archivoentrada.open(calificaciones);

    ofstream archivosalida;
    archivosalida.open("promedios.txt");

    string nombre;
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float promedio;

    archivoentrada >> nombre >> nota1 >> nota2 >> nota3 >> nota4;

    promedio = (nota1 + nota2 + nota3 + nota4) / 4;
    archivosalida << nombre << " " << promedio << endl;

    archivoentrada >> nombre >> nota1 >> nota2 >> nota3 >> nota4;

    promedio = (nota1 + nota2 + nota3 + nota4) / 4;
    archivosalida << nombre << " " << promedio << endl;

    archivoentrada >> nombre >> nota1 >> nota2 >> nota3 >> nota4;

    promedio = (nota1 + nota2 + nota3 + nota4) / 4;
    archivosalida << nombre << " " << promedio << endl;

    archivoentrada.close();
    archivosalida.close();
}