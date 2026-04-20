// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 15/04/2026
// Número de ejercicio: 3

/*Ejercicio 3: Sistema de Bitácora de Seguridad (Strings y Vectores)
Este ejercicio se centra en la limpieza y validación de datos dentro de
contenedores dinámicos, utilizando referencias para reportar el estado del
proceso.
Contexto: Un sistema de seguridad registra los nombres de las personas que
ingresan a un edificio en un vector<string>. Sin embargo, algunos registros tienen
errores de formato (espacios extra o caracteres no permitidos).
Requerimiento: Implemente una función void limpiarBitacora(vector<string>
&registros, char caracterProhibido, int &correccionesRealizadas) que:
1. 2. 3. 4. Recorra cada string dentro del vector.
Si el nombre contiene el caracterProhibido, debe eliminarlo del string
original (modificando el vector por referencia).
Incremente el contador correccionesRealizadas cada vez que se detecte y
limpie un error.
En el main, muestre la lista antes y después de la limpieza.*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;


void limpiar_Bitacora(vector<string> &registros, char caracterProhibido, int &correccionesRealizadas);

int main() 
{
    vector<string> registros = {" Jorge", "Janet#", " Dennis ", "Gaby#", " ik#er "};

    char caracterProhibido = '#';
    int correccionesRealizadas = 0;

    cout << "Antes de limpiar:\n";
    for (int i = 0; i < registros.size(); i++) 
    {
        cout << registros[i] << endl;
    }

    limpiar_Bitacora(registros, caracterProhibido, correccionesRealizadas);

    cout << "\nDesoues de limpiar:\n";
    for (int i = 0; i < registros.size(); i++) 
    {
        cout << registros[i] << endl;
    }

    cout << "\nCorrecciones realizadas: " << correccionesRealizadas << endl;

    return 0;
}

void limpiar_Bitacora(vector<string> &registros, char caracterProhibido, int &correccionesRealizadas) {
    correccionesRealizadas = 0;

    for (int i = 0; i < registros.size(); i++) 
    {
        string limpio = "";

        for (int j = 0; j < registros[i].size(); j++) 
        {
            char letra = registros[i][j];

            
            if (letra == caracterProhibido) // eliminar caracter prohibido
            {
                correccionesRealizadas++;
                continue;
            }

            
            if (letra == ' ')// eliminar espacios 
            {
                correccionesRealizadas++;
                continue;
            }

            limpio += letra;
        }

        registros[i] = limpio;
    }
}