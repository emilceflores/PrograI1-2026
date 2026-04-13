// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet 9226768.
// Carrera del estudiante: Diseño Digital.
// Fecha creación: 06/04/2026

/*Escriba un programa con 6 funciones utilizando vectores para lo siguiente:
a. Una lista de 100 voltajes de precisión doble (entre 20.00 V y 220.00 V)
b. Una lista de 50 temperaturas de precisión doble (Entre 0.00 y 100.00)
c. Una lista de 30 caracteres alfanuméricos.
d. Una lista de 100 años en número entero (entre 1990 y 2025)
e. Una lista de 32 velocidades de precisión doble (entre 10.00 y 300.00)
f. Una lista de 1000 distancias de precisión doble (entre 1.00 a 1000.00)
Los datos debes ser generados utilizando numero aleatorios.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;


void generar_Voltajes(vector<double> &voltajes);
void generar_Temperaturas(vector<double> &temperaturas);
void generar_Caracteres(vector<char> &caracteres);
void generar_Anios(vector<int> &anios);
void generar_Velocidades(vector<double> &velocidades);
void generar_Distancias(vector<double> &distancias);

int main() 
{
    srand(time(NULL));

    vector<double> listVoltajes;
    vector<double> listTemperaturas;
    vector<char> listCaracteres;
    vector<int> listAnios;
    vector<double> listVelocidades;
    vector<double> listDistancias;

    generar_Voltajes(listVoltajes);
    generar_Temperaturas(listTemperaturas);
    generar_Caracteres(listCaracteres);
    generar_Anios(listAnios);
    generar_Velocidades(listVelocidades);
    generar_Distancias(listDistancias);

    cout << "Voltajes:\n";
    for(int i=0;i<listVoltajes.size();i++)
    {
        cout << listVoltajes[i] << " - ";
    }
    
    cout << "\n\nTemperaturas:\n";
    for(int i=0;i<listTemperaturas.size();i++)
    {
        cout << listTemperaturas[i] << " - ";
    }
        
    cout << "\n\nCaracteres:\n";
    for(int i=0;i<listCaracteres.size();i++)
    {
        cout << listCaracteres[i] << " - ";
    }
    
    cout << "\n\nAnios:\n";
    for(int i=0;i<listAnios.size();i++)
    {
         cout << listAnios[i] << " - ";
    }   

    cout << "\n\nVelocidades:\n";
    for(int i=0;i<listVelocidades.size();i++)
    {
        cout << listVelocidades[i] << " - ";
    }
        
    cout << "\n\nDistancias:\n";
    for(int i=0;i<listDistancias.size();i++)
    {
        cout << listDistancias[i] << " - ";
    }    

    return 0;
}


void generar_Voltajes(vector<double> &voltajes)
{
    for(int i=0;i<100;i++)
    {
        double voltaje = 20 + (rand()%20001)/100.0;
        voltajes.push_back(voltaje);
    }
}
void generar_Temperaturas(vector<double> &temperaturas)
{
    for(int i=0;i<50;i++)
    {
        double temperatura = (rand()%10001)/100.0;
        temperaturas.push_back(temperatura);
    }
}
void generar_Caracteres(vector<char> &caracteres)
{
    for(int i=0;i<30;i++)
    {
        int tipo = rand()%3;

        if(tipo==0) caracteres.push_back('A' + rand()%26);
        else if(tipo==1) caracteres.push_back('a' + rand()%26);
        else caracteres.push_back('0' + rand()%10);
    }
}
void generar_Anios(vector<int> &anios)
{
    for(int i=0;i<100;i++)
    {
        int anio = 1990 + rand()%36;
        anios.push_back(anio);
    }
}
void generar_Velocidades(vector<double> &velocidades)
{
    for(int i=0;i<32;i++)
    {
        double velocidad = 10 + (rand()%29001)/100.0;
        velocidades.push_back(velocidad);
    }
}
void generar_Distancias(vector<double> &distancias)
{
    for(int i=0;i<1000;i++)
    {
        double distancia = 1 + (rand()%100000)/100.0;
        distancias.push_back(distancia);
    }
}