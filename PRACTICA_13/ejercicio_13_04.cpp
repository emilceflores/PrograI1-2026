// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 22/05/2026

/*Personal de la UCB
Descripción: Se tiene una lista de empleados de la UCB y esta se almacena en
una variable tipo struct llamada “empleado”. La información con la que se cuenta
es:
• nombre (cadena de caracteres)
• genero (cadena de caracteres)
• salario (decimal)
Realizar un programa en C++ que lea un array de estructuras los datos de los N
trabajadores de la empresa e imprima los datos de los empleados con menor y
mayor salario*/

#include <iostream>
#include <vector>

using namespace std;

// Definicion de estructuras

struct Empleado
{
    char nombre[30];
    char genero[15];
    float salario;
};

// Prototipado de funciones

void CargarEmpleados(vector<Empleado> &empleados, int n);
void MostrarSalarios(vector<Empleado> empleados);

int main()
{
    vector<Empleado> empleados;
    int n = 0;

    cout << "Ingrese la cantidad de empleados: ";
    cin >> n;
    cin.ignore();

    CargarEmpleados(empleados, n);
    MostrarSalarios(empleados);

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

        cout << "Ingrese el genero: ";
        cin.getline(aux_empleado.genero, 15);

        cout << "Ingrese el salario: ";
        cin >> aux_empleado.salario;
        cin.ignore();

        empleados.push_back(aux_empleado);
    }
}

void MostrarSalarios(vector<Empleado> empleados)
{
    int pos_mayor = 0;
    int pos_menor = 0;

    for (int i = 1; i < empleados.size(); i++)
    {
        if (empleados[i].salario > empleados[pos_mayor].salario)
        {
            pos_mayor = i;
        }

        if (empleados[i].salario < empleados[pos_menor].salario)
        {
            pos_menor = i;
        }
    }

    cout << "\nEMPLEADO CON MAYOR SALARIO" << endl;
    cout << "Nombre: " << empleados[pos_mayor].nombre << endl;
    cout << "Genero: " << empleados[pos_mayor].genero << endl;
    cout << "Salario: " << empleados[pos_mayor].salario << endl;

    cout << "\nEMPLEADO CON MENOR SALARIO" << endl;
    cout << "Nombre: " << empleados[pos_menor].nombre << endl;
    cout << "Genero: " << empleados[pos_menor].genero << endl;
    cout << "Salario: " << empleados[pos_menor].salario << endl;
}