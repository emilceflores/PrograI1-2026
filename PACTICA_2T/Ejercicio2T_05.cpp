// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 11/05/2026

/*5. Análisis de Ventas por Sucursal: Una empresa tiene 4 sucursales y registra sus ventas
diarias durante una semana (7 días) en una matriz de 4 X 7:
Diseñe un programa modular que calcule y muestre el total de ventas de cada sucursal
(en una fusión llamada VentasPorSucursal y otra función llamada VentasPorDia en donde
calcule las ventas por día.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void VentasPorSucursal (int matriz [4][7] );
void VentasPorDia (int matriz [4][7] );
int main()
{
    int matriz [4][7];
    srand(time(NULL));

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            matriz[i][j]= ( rand() % ( 500 - 100 + 1) ) + 100; 
            cout << matriz[i][j] << "\t";  //llenar la matriz con numeros al azar
        }
        cout << endl;
    }
    cout<<"VENTA TOTAL: "<<endl;
    VentasPorSucursal (matriz);
    cout<<"VENTAS DIARIAS: "<<endl;
    VentasPorDia (matriz);

    return 0;
}

void VentasPorSucursal (int matriz [4][7] )
{
    int sumasursal_1 =0;
    int sumasursal_2 =0;
    int sumasursal_3 =0;
    int sumasursal_4 =0;

    for (int i = 0; i < 7; i++)
    {
        sumasursal_1 +=matriz[0][i];
        sumasursal_2 +=matriz[1][i];
        sumasursal_3 +=matriz[2][i];
        sumasursal_4 +=matriz[3][i];   
    }
    cout << " la suma total de la Sucursal 1: " << sumasursal_1<<endl;
    cout << " la suma total de la Sucursal 2: " << sumasursal_2<<endl;
    cout << " la suma total de la Sucursal 3: " << sumasursal_3<<endl;
    cout << " la suma total de la Sucursal 4: " << sumasursal_4<<endl;

}
void VentasPorDia (int matriz [4][7] )
{
    int suma_lunes =0;
    int sumas_martes =0;
    int sumas_miercoles =0;
    int sumas_jueves =0;
    int sumas_viernes =0;
    int sumas_sabado =0;
    int sumas_domingo =0;

    for (int i = 0; i < 4; i++)
    {
        suma_lunes +=matriz[i][0];
        sumas_martes+=matriz[i][1];
        sumas_miercoles +=matriz[i][2];
        sumas_jueves +=matriz[i][3];   
        sumas_viernes +=matriz[i][4]; 
        sumas_sabado +=matriz[i][5];
        sumas_domingo +=matriz[i][6]; 
    }
    cout << " las ventas diarias del lunes es: " << suma_lunes<<endl;
    cout << " las ventas diarias del martes es: " << sumas_martes<<endl;
    cout << " las ventas diarias del miercoles es: " << sumas_miercoles<<endl;
    cout << " las ventas diarias del jueves es: " << sumas_jueves<<endl;
    cout << " las ventas diarias del viernes es: " << sumas_viernes<<endl;
    cout << " las ventas diarias del sabado es: " << sumas_sabado<<endl;
    cout << " las ventas diarias del domingo es: " << sumas_domingo<<endl;

}