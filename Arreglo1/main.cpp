#include <iostream>

using namespace std;
const int tam=4;
int numero[tam];
int mayor,menor,prom;

void ingreso(int numero[])
{
    for(int i=0; i<=tam; i++)
    {
        cout<<"Ingresar un Numero["<<i<<"]..>>";
        cin>> numero[i];
    }
}
int promArreglo(int num[])
{
    int suma=0;
    for(int i=0; i<=tam; i++)
    {
        suma+=numero[i];
    }
    return suma/tam;
}
int mayorArreglo(int numero[])
{
    int maxi=numero[0];
    for (int i=0; i<=tam; i++)
    {
        if(numero[i]>maxi)
        {
            maxi=numero[i];
        }
    }
     return maxi;
}

int menorArreglo(int numero[])
{
    int menorx=numero[0];
    for (int i=0; i<=tam; i++)
    {
        if(numero[i]<menorx)
        {
            menorx=numero[i];
        }
    }
    return menorx;
}

int main()
{
    ingreso(numero);
    prom=promArreglo(numero);
    mayor=mayorArreglo(numero);
    menor=menorArreglo(numero);

    cout<<"Promedio del Arreglo es..>>"<<prom<<"\n";
    cout<<"Numero Mayor..>>"<<mayor<<"\n";
    cout<<"Numero Menor..>>"<<menor<<"\n";

    return 0;
}
