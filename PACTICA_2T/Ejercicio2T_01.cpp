// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 11/05/2026

/*1. Intersección de dos listas de clientes: dos empresas tienen listas de clientes y quieren
saber cuántos clientes tienen en común. Escribe un programa que compare dos vectores
de nombres y muestre los clientes repetidos.*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> listaA = {"Avril", "Iker", "Jorge", "Jannet", "juan"};
    vector<string> listaB = {"Iker", "Avril", "Jorge", "camila", "maria"};
 
    for (int i = 0; i < listaA.size(); i++)
    {
        for (int j = 0; j < listaB.size(); j++)
        {
            if (listaA[i] == listaB[j])
            {
                cout<<"Nombres : "<<listaA[i]<<endl;
            
            }

        }
        
    }
    
    return 0;
}

