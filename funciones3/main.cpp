#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
/*Ingresar la base y el exponente usando un precedimiento.
Luego Calcular la base y el exponente usando una funcion.
Luego preguntar si desea continuar usando una funciion para devolver una respuesta S o N valida.
*/
char respuesta()
{
    char resp;

    do
    {
        cout<<"Desea Continuar..>>";
        cin.get(resp);
    }

    while(!((resp!='s') and (resp!='n')));

    return resp;
}
    void ingreso(int &base, int &expo)
    {
        cout<<"Ingresar Base.......>>";
        cin>> base;

        cout<<"Ingresar Exponente..>>";
        cin>> expo;

    }

    int potencia(int base,int expo)
    {
        int pot=1;
        for(int i=0; i<expo; i++)
        {
            pot = pot * base;
        }
        return pot;
    }

int main()
{
    char resp;
    int base,expo,poten;

    do
    {
        ingreso(base,expo);
        poten=potencia(base,expo);

        cout<<"La Potencia es..>>"<<poten<<"\n";
        resp=respuesta();
    }
    while(resp!='n');

    return 0;
}
