#include <iostream>

using namespace std;

void ingresar(int L[],int t)
{
    for (int i=0;i<t;i++){
        cout<<"Ingrese un numero: "; cin>>L[i];
    }
}
int suma_iterativa(int L[],int t)
{
    int suma=0,i;
    for (i=0;i<t;i++){
        suma += L[i];
    }
    return suma;
}
int sum_2(int L[],int t) //suma recursiva...
{
    int suma=0;
    if (t==1){ //este es el caso base
        suma += L[0];
    }
    else {
        suma = L[t-1]+sum_2(L,t-1); //caso general...
    }
    return suma;
}
int main()
{
    int L_num[100],tamanio;
    cout<<"Cantidad de elementos del arreglo: "; cin>>tamanio;
    ingresar(L_num,tamanio); //llamada a la funcion

    cout<<"\nSuma de elementos del arreglo: "<<suma_iterativa(L_num,tamanio)<<endl;

    cout<<"\nSuma ...:"<<sum_2(L_num,tamanio);
}
