#include <iostream>

using namespace std;

int tam_cadena(char C[])
{
    int tamanio=0;
    while (C[tamanio++]!='\0');
    return tamanio-1;
}
void copiar1(char C[],char C2[],int tam1,int tam2)
{
    for (int i=0;i<tam2+tam1;i++){
        C2[tam2 + i] = C[i];
    }
}

void mostrar2(char *C)
{
    while (*C){
        cout<<*C++;
    }
}
void copiar2(char *C,char *C2)
{
    while (*C2++);
    *C2--;
    while (*C){
        *C2++ = *C++;
    }
    *C2 = '\n';
    mostrar2(C2);

}
int main()
{
    char cadt[] = "evening";
    char cads[] = "Good ";
    int tamanio1=0,tamanio2=0;
    tamanio1 = tam_cadena(cadt);
    tamanio2 = tam_cadena(cads);

    copiar1(cadt,cads,tamanio1,tamanio2);
    cout<<"\n\n";
    copiar2(cadt,cads);
}