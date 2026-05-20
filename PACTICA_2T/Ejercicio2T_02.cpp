// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 11/05/2026

/*2. Compresión de datos en una imagen en escala de grises: Dada una imagen en escala
de grises representada por un vector de N valores entre 0 y 255 (estos valores deben ser
generados aleatoriamente), agrupa los valores en segmentos de 10 unidades y muestra
cuántos píxeles hay en cada rango.*/


#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main ()
{
    int n;
    int pix1=0,pix2=0,pix3=0,pix4=0,pix5=0,pix6=0,pix7=0,pix8=0,pix9=0,pix10=0;
    cout<<"Ingrese cantidad de valores: ";
    cin>>n;
    srand(time(NULL));

    vector<int> valores(n);
    for (int i = 0; i < n; i++)
    {
        valores[i]=(rand()%256);
        cout<<valores[i]<<endl;
        

        if(valores[i]>=0 && valores[i]<=9){
            pix1++;
        }
        if(valores[i]>=10 && valores[i]<=19){
            pix2++;
        }
        if(valores[i]>=20 && valores[i]<=29){
            pix3++;
        }
        if(valores[i]>=30 && valores[i]<=39){
            pix4++;
        }
        if(valores[i]>=40 && valores[i]<=49){
            pix5++;
        }
        if(valores[i]>=50 && valores[i]<=59){
            pix6++;
        }
        if(valores[i]>=60 && valores[i]<=69){
            pix7++;
        }
        if(valores[i]>=70 && valores[i]<=79){
            pix8++;
        }
        if(valores[i]>=80 && valores[i]<=89){
            pix9++;
        }
        if(valores[i]>=90 && valores[i]<=99){
            pix10++;
        }
    
    }
    cout<<"pixel 0-9 : "<<pix1<<endl;
    cout<<"pixel 10-19 : "<<pix2<<endl;
    cout<<"pixel 20-29 : "<<pix3<<endl;
    cout<<"pixel 30-39 : "<<pix4<<endl;
    cout<<"pixel 40-49 : "<<pix5<<endl;
    cout<<"pixel 50-59 : "<<pix6<<endl;
    cout<<"pixel 60-69 : "<<pix7<<endl;
    cout<<"pixel 70-79 : "<<pix8<<endl;
    cout<<"pixel 80-89 : "<<pix9<<endl;
    cout<<"pixel 90-99 : "<<pix10<<endl;

    
    
    return 0;

}