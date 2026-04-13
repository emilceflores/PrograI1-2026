// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet 9226768.
// Carrera del estudiante: Diseño Digital.
// Fecha creación: 06/04/2026

/*Escriba un programa para introducir los N números enteros en un arreglo llamado
calificaciones.
Después que todos los números son introducidos obtener:
• La suma total de calificaciones,
• El promedio de los números
• Use el promedio para determinar la desviación de cada valor del promedio.
• Almacene cada desviación en un arreglo llamado desviación. Cada desviación se
obtiene como el valor del elemento menos el promedio de todos los datos. Haga
que su programa despliegue cada desviación al lado de su elemento
correspondiente del arreglo calificaciones.
• Calcule la varianza de los datos usados. La varianza se obtiene elevando al
cuadrado cada desviación individual y dividiendo la suma de las desviaciones
cuadradas entre el número de desviaciones.*/

#include <iostream>
#include <vector>
using namespace std;

void ingresarCalificaciones(vector<int> &calificaciones, int cantidad);
int calcularSuma(vector<int> &calificaciones);
double calcularPromedio(int suma, int cantidad);
void calcularDesviaciones(vector<int> &calificaciones, vector<double> &desviaciones, double promedio);
double calcularVarianza(vector<double> &desviaciones);

int main() {
    int cantidad;

    vector<int> calificaciones;
    vector<double> desviaciones;

    cout << "Ingrese cantidad de calificaciones: ";
    cin >> cantidad;

    ingresarCalificaciones(calificaciones, cantidad);

    int sumaTotal = calcularSuma(calificaciones);
    double promedio = calcularPromedio(sumaTotal, cantidad);

    calcularDesviaciones(calificaciones, desviaciones, promedio);

    double varianza = calcularVarianza(desviaciones);

    cout << "\nSuma total: " << sumaTotal;
    cout << "\nPromedio: " << promedio;

    cout << "\n\nCalificacion - Desviacion:\n";
    for(int i = 0; i < calificaciones.size(); i++) {
        cout << calificaciones[i] << " -" << desviaciones[i] << endl;
    }

    cout << "\nVarianza: " << varianza;

    return 0;
}

void ingresarCalificaciones(vector<int> &calificaciones, int cantidad){
    for(int i = 0; i < cantidad; i++){
        int calificacion;
        cout << "Ingrese calificacion: ";
        cin >> calificacion;
        calificaciones.push_back(calificacion);
    }
}
int calcularSuma(vector<int> &calificaciones){
    int suma = 0;
    for(int i = 0; i < calificaciones.size(); i++){
        suma += calificaciones[i];
    }
    return suma;
}
double calcularPromedio(int suma, int cantidad){
    return (double)suma / cantidad;
}
void calcularDesviaciones(vector<int> &calificaciones, vector<double> &desviaciones, double promedio){
    for(int i = 0; i < calificaciones.size(); i++){
        double desviacion = calificaciones[i] - promedio;
        desviaciones.push_back(desviacion);
    }
}
double calcularVarianza(vector<double> &desviaciones){
    double suma = 0;

    for(int i = 0; i < desviaciones.size(); i++){
        suma += desviaciones[i] * desviaciones[i];
    }

    return suma / desviaciones.size();
}