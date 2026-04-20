// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet: 9226768.
// Carrera del estudiante: Diseño digital..
// Fecha creación: 13/04/2023

/*Intersección de dos listas de clientes: dos empresas tienen listas de clientes y quieren
saber cuántos clientes tienen en común. Escribe un programa que compare dos vectores
de nombres y muestre los clientes repetidos.*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void generar_ListaA(vector<string> &A);
void generar_ListaB(vector<string> &B);
void mostrar_Comunes(vector<string> A, vector<string> B);

int main()
{
    vector<string> listaA;
    vector<string> listaB;

    generar_ListaA(listaA);
    generar_ListaB(listaB);

    cout << "Lista A: ";
    for(int i=0;i<listaA.size();i++)
        cout << listaA[i] << ", ";

    cout << "\nLista B: ";
    for(int i=0;i<listaB.size();i++)
        cout << listaB[i] << ", ";

    cout << "\n\nClientes en comun: ";
    mostrar_Comunes(listaA, listaB);

    return 0;
}

void generar_ListaA(vector<string> &A)
{
    A.push_back("Jael");
    A.push_back("Maria");
    A.push_back("Jorge");
    A.push_back("Avril");
    A.push_back("Janet");
}

void generar_ListaB(vector<string> &B)
{
    B.push_back("Avril");
    B.push_back("Carlos");
    B.push_back("Jorge");
    B.push_back("Sofia");
    B.push_back("Janet");
}

void mostrar_Comunes(vector<string> A, vector<string> B)
{
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<B.size();j++)
        {
            if(A[i] == B[j])
            {
                cout << A[i] << ", ";
            }
        }
    }
}