// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 11/05/2026

/*7. Un hospital regional requiere un sistema para controlar la temperatura de 5 pacientes
en la Unidad de Cuidados Intensivos durante las últimas 24 horas.
• Use un vector<string> para los nombres de los pacientes y una matriz monitoreo
[5][24] para las temperaturas registradas cada hora.
• Llenar el vector con los siguientes datos de los pacientes:
o Ana Torroja
o Juan Luna
o Sergio Murillo
o Liliana Espinoza
o Mercedes Lima
• Llenar la matriz con valores aleatorios entre 20 y 40.
• Implemente una función VerificarAlertas que reciba un umbral de temperatura. La
función debe indicar qué pacientes superaron ese umbral en más de 3 ocasiones
durante el día.*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void VerificarAlertas (int matriz[5][24], vector<string> pacientes, int umbral);
void llenar_matriz (int matriz[5][24],vector<string> Lista_Pacientes);

int main()
{
    int matriz[5][24];
    int umbral;

    srand(time(NULL));
    
    vector<string> Lista_Pacientes {"Ana Torroja","Juan Luna","Sergio Murillo","Liliana Espinoza","Mercedes Lima" };

    llenar_matriz (matriz, Lista_Pacientes);
    cout<<"Ingrese umbral de temperatura: ";
    cin>>umbral;
    VerificarAlertas (matriz,Lista_Pacientes,umbral);
    
    return 0;
}

void llenar_matriz (int matriz[5][24],vector<string> Lista_Pacientes)
{
    for (int i = 0; i < 5; i++)
    {
        cout << Lista_Pacientes[i] << "\t";

        for (int j = 0; j < 24; j++)
        {
            matriz [i][j] = ( rand() % ( 40 - 20 + 1) ) + 20; 
            cout << matriz[i][j] << "\t";  //llenar la matriz con numeros al azar
        }
        cout << endl;
    }
}

void VerificarAlertas (int matriz[5][24], vector<string> pacientes, int umbral)
{
    int contador;
    
    for(int i = 0; i < 5; i++)
    {
        contador = 0;

        for(int j = 0; j < 24; j++)
        {
            if(matriz[i][j] > umbral)
            {
                contador++;
            }
        }
        if(contador > 3)
        {
            cout << pacientes[i]<< " supero el umbral "<< contador << " veces" << endl;
        }
    }

}