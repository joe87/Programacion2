#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


using namespace std;

int main()
{   int num, sum=0, mayor=0, prom=0, conta=0;
    int xnumero=0,sumadi=0,xdigito=0;
    char resp;

   do{

        do{
            cout << "Ingresar numero (1-200)..>> ";
            cin >> num;

            cout<<"-------------------------------""\n";
            _flushall();

          }

        while (!((num%2==0) and (num >1 and num <=200 )));
        xnumero=num;
        sumadi=0;


        while(xnumero>0)
        {
            xdigito=xnumero%10;
            sumadi+=xdigito;
            xnumero=xnumero/10;
        }
        cout<< "Suma de los numero es: "<<sumadi<<"\n";

        sum+=num;
        conta++;

        if ( num > mayor)
        {
                mayor = num;
        }

        do
        {
                cout<< "Desea Continuar?...(s/n)>>""\n";
                cin.get (resp);

                _flushall();

        }
         while ( !(resp!='s' or resp!='n'));


        }
        while (!(resp=='n'));

        prom = sum/conta;

    cout << "Promedio es....>> " << prom <<"\n";
    cout << "Numero Mayor es....>> " << mayor <<"\n";

    return 0;
}
