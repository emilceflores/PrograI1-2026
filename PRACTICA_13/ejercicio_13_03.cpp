// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 22/05/2026

/* Estudiantes de Programación I:
Descripción: Desarrolle una estructura que guarde los datos de los n alumnos de
la materia Programación I y los muestres por pantalla, la estructura debe tener los
siguientes datos:
• cedula (entero)
• nombre (cadena de caracteres)
• apellido (cadena de caracteres)
• edad (entero)
• profesión (cadena de caracteres)
• lugar_nacimiento (cadena de caracteres)
• dirección (cadena de caracteres)
• teléfono (entero)*/

#include <iostream>
#include <vector>

using namespace std;

// Definicion de estructuras

struct DatosAlumno
{
    int cedula;
    char nombre[30];
    char apellido[30];
    int edad;
    char profesion[30];
    char lugar_nacimiento[30];
    char direccion[50];
    int telefono;
};

// Prototipado de funciones

void CargarAlumnos(vector<DatosAlumno> &alumnos, int n);
void MostrarAlumnos(vector<DatosAlumno> alumnos);

int main()
{
    vector<DatosAlumno> alumnos;
    int n = 0;

    cout << "Ingrese la cantidad de alumnos: ";
    cin >> n;
    cin.ignore();

    CargarAlumnos(alumnos, n);
    MostrarAlumnos(alumnos);

    return 0;
}

void CargarAlumnos(vector<DatosAlumno> &alumnos, int n)
{
    DatosAlumno aux_alumno;

    for (int i = 0; i < n; i++)
    {
        cout << "\nALUMNO " << i + 1 << endl;

        cout << "Ingrese la cedula: ";
        cin >> aux_alumno.cedula;
        cin.ignore();

        cout << "Ingrese el nombre: ";
        cin.getline(aux_alumno.nombre, 30);

        cout << "Ingrese el apellido: ";
        cin.getline(aux_alumno.apellido, 30);

        cout << "Ingrese la edad: ";
        cin >> aux_alumno.edad;
        cin.ignore();

        cout << "Ingrese la profesion: ";
        cin.getline(aux_alumno.profesion, 30);

        cout << "Ingrese el lugar de nacimiento: ";
        cin.getline(aux_alumno.lugar_nacimiento, 30);

        cout << "Ingrese la direccion: ";
        cin.getline(aux_alumno.direccion, 50);

        cout << "Ingrese el telefono: ";
        cin >> aux_alumno.telefono;
        cin.ignore();

        alumnos.push_back(aux_alumno);
    }
}

void MostrarAlumnos(vector<DatosAlumno> alumnos)
{
    for (int i = 0; i < alumnos.size(); i++)
    {
        cout << "\nDATOS ALUMNO " << i + 1 << endl;
        cout << "Cedula: " << alumnos[i].cedula << endl;
        cout << "Nombre: " << alumnos[i].nombre << endl;
        cout << "Apellido: " << alumnos[i].apellido << endl;
        cout << "Edad: " << alumnos[i].edad << endl;
        cout << "Profesion: " << alumnos[i].profesion << endl;
        cout << "Lugar de nacimiento: " << alumnos[i].lugar_nacimiento << endl;
        cout << "Direccion: " << alumnos[i].direccion << endl;
        cout << "Telefono: " << alumnos[i].telefono << endl;
    }
}
