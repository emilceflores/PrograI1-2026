// Materia: Programación I, Paralelo 4
// Autor: Emilce Flores
// Carnet: 9226768.
// Carrera del estudiante: Diseño Digital..
// Fecha creación: 23/02/2026



#include <iostream>

using namespace std;

int main ()
{
    int numero;
    int sumaIngresados =0;
    int sumaImpares =0;
    int sumaPares =0;
    int sumaPrimos =0;
    int esPrimo =0;

    
    system("cls");
    do
    {
        cout<< "ingrese un numero: ";
        cin >> numero;

        if (numero > 0 && numero <= 100)
        {
           sumaIngresados += numero;

           if (numero % 2 == 0)
           {
            sumaPares += numero;
           }
           else
           {
            sumaImpares += numero;
           }
           if (numero >=2)
           {
            for (int i = 2; i * i <= numero; i++)
            {
                if (numero % i == 0)
                {
                   esPrimo = 1;
                }    
            }
            if (esPrimo == 0)
                {
                    sumaPrimos += numero;
                }
    
           }
        }
        else
           {
            cout << "numero fuera de rango"<< endl;
           }
        
    } while (numero != 0);

   cout << "suma de los numeros ingresados es: "<< sumaIngresados << endl ;
   cout << "suma de los numeros pares es: "<< sumaPares << endl;
   cout << "suma de los numeros impares es: "<< sumaImpares << endl;
   cout << "suma de los numeros primo es: "<< sumaPrimos << endl;
    


    
    return 0;
}