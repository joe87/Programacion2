#include <iostream>

using namespace std;
/* Ingresar 5 numero y contar y presentar el promedio de los pares e impares.
    y presentar el numero mayor.
*/

int main()
{   int numero,cpar,cimpar,contador,mayor,menor;
    double prompares,promimpares;
    int sumap,sumai;
    sumap=0;
    sumai=0;
    contador=0;
    cimpar=0;
    cpar=0;
    mayor=0;
    menor=1000000;

    while(contador<5)
    {
        cout << "Ingresar un Numero...:";
        cin>> numero;

        if((numero%2)==0)
        {
            sumap+=numero; // sumap = sumap + numero
            cpar++;
        }
        else
        {
            sumai+=numero;
            cimpar++;
        }
            contador ++;

        if(numero>mayor)
        {
            mayor=numero;
        }
         if(numero<menor)
        {
            menor=numero;
        }

    }// fin del ciclo

        cout<<"Numero Mayor es....:"<<mayor<<"\n";
        cout<<"Numero Menor es....:"<<menor<<"\n";

        if(sumap!=0)
        {
            prompares=sumap/cpar;
        }
        else
        {
            prompares=0;
        }
        if(sumai!=0)
        {
            promimpares=sumai/cimpar;
        }
        else
        {
            promimpares=0;
        }


    cout<<"Promedio Pares"<<prompares<<"\n";
    cout<<"Promedio Impares"<<promimpares<<"\n";

    return 0;
}
