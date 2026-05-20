// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 11/05/2026

/*4. Generar una matriz de N x N con números al azar entre A y B, y determinar:
• La suma de la primera columna
• El producto total de la primera fila
• Obtener el menor valor y su posición*/

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
    int n;
    int A=0;
    int B=0;
    int suma_columna=0;
    int producto_fila=1;

    cout<<"Ingresar tamanio de matriz: ";
    cin>>n;
    cout<<"Ingresar valor minimo: ";
    cin>>A;
    cout<<"Ingresar valor maximo: ";
    cin>>B;

    int menor = B ;
    int fila;
    int columna;
    int matriz [n][n];
    
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz[i][j]= ( rand() % ( B - A + 1) ) + A; 
            cout << matriz[i][j] << "\t";  //llenar la matriz con numeros al azar
        }
        cout << endl;
    }
    for(int i=0; i<n; i++)
    {
        suma_columna += matriz[i][0];
    }
    for(int i=0; i<n; i++)
    {
        producto_fila *= matriz[0][i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ( matriz[i][j] < menor )
            {
                menor= matriz[i][j];
                fila = i;
                columna = j;
            }
            
        
        }
        
    }
    
    cout<<"El menor valor es: "<<menor<< " y se encontro en: ["<< fila<< "]["<<columna<<"]";
    cout << "La suma de la primera columna es: " << suma_columna<<endl;
    cout << "El producto total de la primera fila es: " << producto_fila;
    
    return 0;
}
