// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet: 9226768
// Carrera del estudiante: Diseño Digital
// Fecha creación: 27/03/2026

/*5. Implemente una función llamada calcularArea. Debe sobrecargarla para tres casos
distintos:
• Un parámetro (double): Calcula el área de un cuadrado.
• Dos parámetros (double, double): Calcula el área de un rectángulo.
• Un parámetro (float, float PI): Calcula el área de un círculo.*/

#include <iostream>

using namespace std;

double calcularArea(double lado);
double calcularArea(double base, double altura);
float calcularArea(float radio, float PI);

int main()
{
    double lado;
    double base; 
    double altura;
    float radio;
    double area1;
    double area2;
    float area3;

    cout << "Ingrese el lado: "; //cuadrado
    cin >> lado;
    cout << "Antes: lado = " << lado << endl;

    area1 = calcularArea(lado);
    cout << "Despues: area cuadrado = " << area1 << endl;

    
    cout << " Ingrese la base: "; //rectangulo
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;

    cout << "Antes: base = " << base << ", altura = " << altura << endl;

    area2 = calcularArea(base, altura);
    cout << "Despues: area rectangulo = " << area2 << endl;

    
    cout << " Ingrese el radio: ";//Círculo
    cin >> radio;

    cout << "Antes: radio = " << radio << endl;

    area3 = calcularArea(radio, 3.1416);
    cout << "Despues: area circulo = " << area3 << endl;

    return 0;
}


double calcularArea(double lado)//cuadrado
{
    double area;
    area = lado * lado;
    return area;
}

double calcularArea(double base, double altura)//rectangulo
{
    double area;
    area = base * altura;
    return area;
}

float calcularArea(float radio, float PI) //Círculo
{
    float area;
    area = PI * radio * radio;
    return area;
}