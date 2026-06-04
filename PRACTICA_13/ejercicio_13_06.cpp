// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 22/05/2026

/*Gestión de empleados con funciones
Descripción: Define una estructura llamada Empleado que contenga los siguientes
campos:
• nombre (cadena de caracteres)
• id (entero)
• sueldo (decimal)
• antiguedad (entero, en años)
Escribe un programa que permita:
• Ingresar los datos de N empleados.
• Crear una función que reciba un arreglo de empleados y un valor de sueldo y
devuelva cuántos empleados tienen un sueldo mayor a ese valor.
• Crear otra función que reciba el arreglo y calcule el promedio de antigüedad
de todos los empleados.*/

#include <iostream>
#include <vector>

using namespace std;

// Definicion de estructuras

struct Empleado
{
    char nombre[30];
    int id;
    float sueldo;
    int antiguedad;
};

// Prototipado de funciones

void CargarEmpleados(vector<Empleado> &empleados, int n);
int ContarSueldosMayores(vector<Empleado> empleados, float sueldo);
float PromedioAntiguedad(vector<Empleado> empleados);

int main()
{
    vector<Empleado> empleados;
    int n = 0;
    float sueldo;

    cout << "Ingrese la cantidad de empleados: ";
    cin >> n;
    cin.ignore();

    CargarEmpleados(empleados, n);

    cout << "\nIngrese un sueldo para comparar: ";
    cin >> sueldo;

    cout << "\nCantidad de empleados con sueldo mayor a "
         << sueldo << ": "
         << ContarSueldosMayores(empleados, sueldo) << endl;

    cout << "Promedio de antiguedad: "
         << PromedioAntiguedad(empleados) << endl;

    return 0;
}

void CargarEmpleados(vector<Empleado> &empleados, int n)
{
    Empleado aux_empleado;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEMPLEADO " << i + 1 << endl;

        cout << "Ingrese el nombre: ";
        cin.getline(aux_empleado.nombre, 30);

        cout << "Ingrese el ID: ";
        cin >> aux_empleado.id;

        cout << "Ingrese el sueldo: ";
        cin >> aux_empleado.sueldo;

        cout << "Ingrese la antiguedad: ";
        cin >> aux_empleado.antiguedad;
        cin.ignore();

        empleados.push_back(aux_empleado);
    }
}

int ContarSueldosMayores(vector<Empleado> empleados, float sueldo)
{
    int contador = 0;

    for (int i = 0; i < empleados.size(); i++)
    {
        if (empleados[i].sueldo > sueldo)
        {
            contador++;
        }
    }

    return contador;
}

float PromedioAntiguedad(vector<Empleado> empleados)
{
    int suma = 0;

    for (int i = 0; i < empleados.size(); i++)
    {
        suma += empleados[i].antiguedad;
    }

    return (float)suma / empleados.size();
}