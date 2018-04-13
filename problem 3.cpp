#include <iostream>

using namespace std;

void mostrar(int L[])
{
    for (int i=0;i<10;i++){
        cout<<L[i]<<' ';
    }
}
void insertion_sort(int L[])
{
    int posicion,aux;
    for (int i=0;i<10;i++){
        aux = L[i];
        posicion = i;
        while (posicion>0 && (L[posicion-1]>aux)){
            L[posicion] = L[posicion-1];
            posicion--;
        }
        L[posicion]=aux;

    }
    mostrar(L);
}
void quick_sort(int* L,int izq,int der)
{
    int i=izq, j=der, aux;
    int piv = L[(izq + der)/2];//valor del pivote
    while (i <= j){
        while (L[i] < piv) i++;
        while (L[j] > piv) j--;
        if (i <= j){//se realiza el intercambio
            aux = L[i];
            L[i] = L[j];
            L[j] = aux;
            i++; j--;
        }
    }
    if (izq < j)
        quick_sort(L, izq, j);
    if (i < der)
        quick_sort(L, i, der);
}
int main()
{
    int numeros[] = {4,8,1,2,9,3,7,11,0,6};
    insertion_sort(numeros);
    cout<<"\n\n";
    quick_sort(numeros,0,9);//ingresan la lista, la posicion inicial y la final
    mostrar(numeros);
}
