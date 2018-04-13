#include <iostream>

using namespace std;

.
int tam_cadena(char C[])
{
    int tamanio=0;
    while (C[tamanio++]!='\0');
    return tamanio;
}
//arrays..
void mostrar(char C[],int tam)
{
    for (int i=0;i<tam;i++){
        cout<<C[i];
    }
}
void copiar1(char C[],char C2[],int tam1,int tam2)
{
    for (int i=0;i<tam2;i++){
        if (i<tam1){
            C2[i] = C[i];
        }
        else
            C2[i] = '\0';
    }
    mostrar(C2,tam1);
}
//punteros...
void mostrar2(char *C)
{
    while (*C){
        cout<<*C++;
    }
}
void copiar2(char *C,char *C2,int tam)
{
    while (*C2){
        *C2++ = *C++;
    }
    mostrar2(C2);
}
int main()
{
    char cadt[] = "una cadena";
    char cads[] = "otra cadena";
    int tamanio1=0,tamanio2=0;
    tamanio1 = tam_cadena(cadt);
    tamanio2 = tam_cadena(cads);

    if (tamanio2 < tamanio1){
        cout<<"No es posible copiar la cadena"<<endl;
    }
    else{
        copiar1(cadt,cads,tamanio1,tamanio2);
        cout<<"\n\n";
        copiar2(cadt,cads,tamanio1);
    }
}
