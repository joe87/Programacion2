#include <iostream>

using namespace std;
/* Ingresar 10 numeros,al final presentar cuantos numeros fueron divisibles entre 5,el promedio de los divisibles entre 5
    y el numero mayor de todos los numeros.
*/

int main()
{   int numero,mayor,cdiv5,suma,contador;
    double prom;

    mayor=0;
    cdiv5=0;

    for(int i=0;i<11;i++)
    {
        cout << "Ingresar Numero.........>>";
        cin>> numero;

        cout<<"-------------------""\n";


        if((numero%5)==0)
        {
            cdiv5++;
            suma+=numero;
        }

        if (numero>mayor)
            mayor=numero;
    }

        if(cdiv5>0)
        {
        prom=suma/cdiv5;
        }
        else
        {
            prom=0;
        }

        contador++;
        prom=suma/contador;

    cout<<"Numeros Divisibles entre 5 es......>>"<<cdiv5<<"\n";
    cout<<"Promedio de Divisibles entre 5 es..>>"<<prom<<"\n";
    cout<<"El numero mayor es.................>>"<<mayor<<"\n";




    return 0;
}
