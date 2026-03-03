// Materia: Programación I, Paralelo 4
// Autor: Emilce Flores
// Carnet: 9226768.
// Carrera del estudiante: Diseño Digital..
// Fecha creación: 23/02/2026


#include <iostream>
using namespace std;

int main (){
    int numero;
    double precio;
    double suma = 0.0;

    cout <<"Ingrese la cantidad de productos" << endl;
    cin >> numero;

    for(int i = 0; i < numero; i++){
        cout << "Ingrese el precio del producto: " << endl;
        cin >> precio;
        suma += precio;
    }

    if(suma >= 2500.0){
        suma -= (suma * 0.05);
        cout <<"Se aplica el descuento" << endl;
    }

    cout << "El precio total es: " << suma << endl;
    double iva = suma * 0.13;
    cout << "El IVA es: " << iva << endl;
    cout << "La ganancia neta es: " << suma - iva << endl;

    return 0;
}