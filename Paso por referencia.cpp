#include <iostream>

using namespace std;

void sumar20(int& x)
{
    cout<<"El resultado es: "<<x+20<<endl;

    x += 5;//se adiciona 5 para obtener otro resultado...

    //La funcion no retorna ningun valor, pero modifica el argumento original al trabajar con una referencia...
}
int main()
{
    int x;
    cout<<"Sumar 20 a un numero\n\nIngrese un numero: "; cin>>x;//asignamos un valor...

    sumar20(x);//llama a la funcion al igual que el paso por valor y modifica el numero ingresado...

    cout<<"Nuevo valor del numero ingresado: "<<x<<endl;

}

