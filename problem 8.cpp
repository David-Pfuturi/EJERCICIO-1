void intercambio_P(char *cad)
{
    char *temp=cad,c;
    while(*cad){
        cad++;
    }
    cad--;
    while (*temp){
        if(temp-cad<0)
        {
            c=*cad;
            *cad=*temp;
            *temp=c;
        }
        temp++;
        cad--;
    }
}

void intercambio_A(char cad[])
{
    int a=0;
    char aux[20];
    while(cad[a]!='\0')
    {
        aux[a]=cad[a];
        a++;
    }
    a--;
    for(int i=0;i<a+1;i++)
    {
        cad[i]=aux[a-i];
    }
}

int main()
{
    char cadena[]="hello world";
    /*intercambio_A(cadena);
    cout<<cadena;*/
    intercambio_P(cadena);
    cout<<cadena<<endl;
}