#include <iostream>

using namespace std;
/* Ingresar un numero comprendido entre 50-150 y tiene que ser par, validar el ingreso usando do/while,
luego preguntar si desea continuar usar una variable de tipo char para la respuesta y esta deberá de ser validada
para que solo responda S o N, al final presentar cual fue el numero mayor y menor.
*/
int main()
{    char respuesta;
    int numero, mayor=150, menor=50, cpar=0;


        do
        {
        do

        {

            cout<<"Ingrese numero par(50-150)....>> ";
            cin>>numero;

            cout<<"------------------------""\n";

            if( numero%2==0)
            cpar++;

                if (numero>=mayor)
                mayor=numero;
                if (numero<=menor)
                menor=numero;

        }
        while(numero<50 or numero>150 or numero%2!=0);

            do
                {

                cout<<"Desea continuar....?(S/N)....>> ";
                cin>>respuesta;

            } while(respuesta!= 'S' and respuesta!='N');

            if(respuesta=='N'){

                cout <<endl<<"El Numero mayor es....>> " <<mayor<<"\n";
                cout <<endl<<"El Numero menor es....>>" <<menor<<"\n";

            }


            }
            while(respuesta=='S');

    return 0;
}
