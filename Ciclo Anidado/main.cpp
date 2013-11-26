#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/* Elaborar un programa donde ingresemos un numero,luego pregutar si deseamos
    ingresar otro numero otro numero. Al finalizar presentar la suma de los numeros ingresados.
    Los numeros deberan estar comprendidos entre 1 - 100.
*/

int main()
{   int numero;
    int suma;
    char resp;

    suma=0;

    do
    {
        do
        {
            cout<<"Ingresar un Numero ENTRE 1-100....>>";
            cin>> numero;
            _flushall();

            cout<<"-------------------------""\n";
        }

        while((numero<1)or(numero>100));

        do
        {
         cout<<"Desea Continuar....>>";
         cin.get(resp);

        }
        while((resp!='N')and(resp!='S'));

        suma+=numero;
    }
        while(resp!='N');

    cout<< "!!!Final del Programa!!!""\n""\n";
    cout<< "La suma de los Numeros Ingresados es....>>"<<suma<<"\n";

    return 0;
}
