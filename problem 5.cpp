int tamanio_cad(char cad[])
{
    int i=0;
    while (cad[i++]!='\0');
    return i-1;
}
int tamanio_cad2(char *cad2) // obtiene la direccion de memoria del primer elemento del arreglo
{
    int j=0;
    while (*cad2++){//sea diferente de nulo
        j++;
    }
    return j;
}
int main()
{
    char cadena1[] = "Esto es una cadena";
    cout<<tamanio_cad(cadena1)<<endl;
    cout<<tamanio_cad2(cadena1);//cadena1 = &cadena1[0]
}
