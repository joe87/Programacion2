#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int numero,par,cifras;

void ingresar (int &numero)
    {
        do
        {
           cout<<"Ingresar Numero..........>>";
           cin>>numero;


        }
        while(numero%2 !=0 and numero%5 !=0);

    }

void cifra(int &cifras)
    {
    cifras=0;
        while(numero!=0)
        {
            numero=numero/10;
            cifras++;
        }

        cout<<"El Numero de Cifras es...>>"<<cifras<<"\n";
        cout<<"--------------------------""\n";
    }
int main()
{
     for(int x=0;x<5;x++)
    {
        ingresar(numero);
        cifra(cifras);

    }

    return 0;
}
