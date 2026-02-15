// Materia: Programación I, Paralelo 4
// Autor: Emilce Flores
// Carnet: 9226768.
// Carrera del estudiante: Diseño Digital.
// Fecha creación: 11/02/2026

/*Mostrar los meses del año, pidiéndole al usuario un 
número entre (1-12), y
mostrar el mes al que corresponde.*/

#include <iostream>

using namespace std;

int main()
{
    int numero;

    system("cls");
    cout << "ingrese el numero entre (1-12): "  ;
    cin >> numero ;

    switch (numero)
    {
    case 1:
        cout << "el mes es enero" << endl ;
        break;
    case 2:
        cout << "el mes es febro" << endl ;
        break;
    case 3:
        cout << "el mes es marzo" << endl ;
        break;
    case 4:
        cout << "el mes es abril" << endl ;
        break;
    case 5:
        cout << "el mes es mayo" << endl ;
        break;
    case 6:
        cout << "el mes es junio" << endl ;
        break;
    case 7:
        cout << "el mes es julio" << endl ;
        break;
    case 8:
        cout << "el mes es agosto" << endl ;
        break;
    case 9:
        cout << "el mes es septiempre" << endl ;
        break;
    case 10:
        cout << "el mes es octubre" << endl ;
        break;
    case 11:
        cout << "el mes es noviembre" << endl ;
        break;
    case 12:
        cout << "el mes es diciembre" << endl ;
        break;
    default:
        break;
    }

 return 0 ;
}