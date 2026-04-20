// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Fecha creación: 13/04/2026
// Número de ejercicio: 3

/*En la segunda temporada de The Walking Dead, los personajes llegaron a una
cárcel para refugiarse. La cárcel estaba rodeada de vallas por lo que los muertos
vivientes no podían entrar en ella. Sin embargo, dentro de las instalaciones aun
existían muertos vivientes que amenazaban a los personajes. Por tanto, Rick y
otros miembros del grupo decidieron ir a investigar las instalaciones con el fin de
determinar cuáles eran los lugares seguros. Para lograr su objetivo construyeron
un mapa basado en una matriz que indicaba las zonas seguras. Después de un
tiempo, tu grupo llega al mismo complejo y encuentra el mapa hecho por Rick.
Para mantener a salvo a tus amigos decides diseñar e implementar un programa
que te ayude a determinar las zonas seguras.
Tu trabajo es determinar los siguientes datos:
a) b) c) d) e) Mostrar la matriz que describe el área.
Mostrar el número de filas y columnas que no tienen un muerto viviente.
Determinar las coordenadas de los muertos vivientes en la matriz. Utilice
vectores paralelos para almacenar la posición de los muertos vivientes. Un
vector almacenara el índice de la fila y otro vector almacenara el índice de la
columna.
La cantidad de muertos vivientes que existen en toda la matriz.
Determinar si dos o más muertos vivientes se encuentran en la primera
columna. Si es así imprimir “no es posible entrar al complejo” de otro modo
imprimir “es posible entrar al complejo”.
NOTA 1.- INICIALIZE LA SIGUIENTE MATRIZ COMO CONSTANTE PARA PROBAR
SU PROGRAMA
x o x o
o o o o
o o x o
Las "o" describen lugares seguros mientras que las "x" describen los lugares
con un muerto viviente.
NOTA 2.- AYUDA --> PUEDE DECLARAR DOS VARIABLES GLOBALES
CONSTANTES PARA DETERMINAR EL TAMANO DE LA MATRIZ
NOTA 3.- CADA INCISO DEBE SER RESUELTO CON UNA FUNCION
ESTRICTAMENTE, EXCEPTO EL ULTIMO INCISO QUE NO REQUIERE DE UNA
FUNCION.*/


#include <iostream>
#include <vector>
using namespace std;

const int FILAS = 3;
const int COLUMNAS = 4;

void mostrar_Matriz(char matriz[FILAS][COLUMNAS]);
void filas_Columnas_Seguras(char matriz[FILAS][COLUMNAS]);
void coordenadas_Muertos(char matriz[FILAS][COLUMNAS], vector<int> &f, vector<int> &c);
int contar_Muertos(char matriz[FILAS][COLUMNAS]);
int contar_Espacios_Libres(char matriz[FILAS][COLUMNAS]);

int main()
{
    char matriz[FILAS][COLUMNAS] = {
        {'x','o','o','o'},
        {'o','o','o','o'},
        {'x','o','o','o'}
    };

    vector<int> filasM, colsM;

    cout << "a) Mostrar matriz\n";
    mostrar_Matriz(matriz);

    cout << "b) ";
    filas_Columnas_Seguras(matriz);

    cout << "c) Posiciones en la matriz:\n";
    coordenadas_Muertos(matriz, filasM, colsM);

    int cantidadMuertos = contar_Muertos(matriz);
    cout << "d) total muertos vivientes: " << cantidadMuertos << endl;

    // inciso e (sin función)
    int cantidadMuertosCol1 = 0;
    for(int i=0;i<FILAS;i++)
    {
        if(matriz[i][0] == 'x')
            cantidadMuertosCol1++;
    }

    if(cantidadMuertosCol1 >= 2)
        cout << "e) no es posible entrar al complejo!\n";
    else
        cout << "e) es posible entrar al complejo!\n";

    cout << "f) espacio libre: " << contar_Espacios_Libres(matriz) << endl;

    return 0;
}

void mostrar_Matriz(char matriz[FILAS][COLUMNAS])
{
    for(int i=0;i<FILAS;i++)
    {
        for(int j=0;j<COLUMNAS;j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void filas_Columnas_Seguras(char matriz[FILAS][COLUMNAS])
{
    int filasLibres = 0, columnasLibres = 0;

    for(int i=0;i<FILAS;i++)
    {
        bool libre = true;
        for(int j=0;j<COLUMNAS;j++)
        {
            if(matriz[i][j] == 'x')
                libre = false;
        }
        if(libre) filasLibres++;
    }

    for(int j=0;j<COLUMNAS;j++)
    {
        bool libre = true;
        for(int i=0;i<FILAS;i++)
        {
            if(matriz[i][j] == 'x')
                libre = false;
        }
        if(libre) columnasLibres++;
    }

    cout << "filas libres: " << filasLibres << endl;
    cout << "   columnas libres: " << columnasLibres << endl;
}

void coordenadas_Muertos(char matriz[FILAS][COLUMNAS], vector<int> &f, vector<int> &c)
{
    for(int i=0;i<FILAS;i++)
    {
        for(int j=0;j<COLUMNAS;j++)
        {
            if(matriz[i][j] == 'x')
            {
                f.push_back(i);
                c.push_back(j);
                cout << i << " -- " << j << endl;
            }
        }
    }
}

int contar_Muertos(char matriz[FILAS][COLUMNAS])
{
    int cantidadMuertos = 0;

    for(int i=0;i<FILAS;i++)
    {
        for(int j=0;j<COLUMNAS;j++)
        {
            if(matriz[i][j] == 'x')
                cantidadMuertos++;
        }
    }

    return cantidadMuertos;
}

int contar_Espacios_Libres(char matriz[FILAS][COLUMNAS])
{
    int espacios = 0;

    for(int i=0;i<FILAS;i++)
    {
        for(int j=0;j<COLUMNAS;j++)
        {
            if(matriz[i][j] == 'o')
                espacios++;
        }
    }

    return espacios;
}