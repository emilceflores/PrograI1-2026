// Materia: Programación I, Paralelo 4
// Autor: Emilce Flores
// Carnet: 9226768.
// Carrera del estudiante: Diseño Digital.
// Fecha creación: 11/02/2026

/*Escribe un programa que lea de la entrada estándar tres números. Después
debe leer un cuarto número e indicar si el número coincide con alguno de
los introducidos con anterioridad.*/

#include <iostream>

using namespace std;

int main()
{
    int numero1;
    int numero2;
    int numero3;
    int numero4;
    
    cout << "ingresar primer valor: " ;
    cin >> numero1;
    cout << "ingresar sugundo valor: " ;
    cin >> numero2;
    cout << "ingresar tercer valor: " ;
    cin >> numero3;
    cout << "ingresar cuarto valor: " ;
    cin >> numero4;
    
    if (numero1 == numero4)
    {
        cout << "cuarto valor es igual a al primer valor" << endl ;
    }
     else if (numero2 == numero4)
     {
       cout << "cuarto valor es igual a al segundo valor" << endl ;
     }
     else if (numero3 == numero4)
     {
        cout << "cuarto valor es igual a al tercer valor" << endl ;
     }
    else
    {
        cout << "cuarto valor no coincide con ningun valor anteriro" << endl ;
    }
    
 return 0 ;
}