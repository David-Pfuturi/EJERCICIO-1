bool palindromo(char *c)
{
    int longit=0;
    while(*(c++)){
        longit++;
    }

    for(int i=0;i<longit/2;i++){
        if (*(c+i)!=*(c+longit-i-1)){
            return 0;
        }
    }
    return 1;
}

int main()
{
    char pal[]="7337";
    cout<<palindromo(pal);
}