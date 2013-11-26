#include <iostream>

using namespace std;

int main()
{
    int numero,cifra,suma,maxi,mini,prom,contador,par,impar;

    cout<<"Ingresar un Numero Entero....>>";
    cin>> numero;

    suma=0;

    cout<<"Numero al Revez....>>";

    maxi=0;
    mini=9;

    while(numero>0)

    {
        cifra=numero%10;
        cout<< cifra;
        numero=numero/10;
        suma+=cifra;

        if((cifra%2)==0)
            par++;
        else
            impar++;

        if(cifra>maxi)
            maxi=cifra;
        if(cifra<mini)
            mini=cifra;

            contador++;
    }

    prom=suma/contador;

    cout<<"\n";
    cout<<"Suma de las cifras....>>"<<suma<<"\n";
    cout<<"Cifra Mayor es........>>"<<maxi<<"\n";
    cout<<"Cifra Menor es........>>"<<mini<<"\n";
    cout<<"El Promedio de las cifras es....>>"<<suma<<"\n";
    cout<<"Numeros par de las cifras......>>"<<par<<"\n";
    cout<<"Numeros impar de las cifras....>>"<<impar<<"\n";

    return 0;
}
