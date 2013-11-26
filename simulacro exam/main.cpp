#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
/* ejercicio de exam

ingresar un numero este se tiene que validar que solo sea par o divisible entre 5 devera de contar cuantos son pares y cuantos
son divisibles entre 5 tiene que preguntar si desea continuar,validar la respuesta solo que sea S y N

obterner el numero mayor de los numeros que se ingresaron, obtener el promedio de los numeros que fueron mayor a 100
desarrollar el programa usando ciclo while estructuras de condicion.
se tomara en cuenta el orden, identado, el nombre de las variables y eficiencia del programa.
*/

int main()
{/*
    int numero, mayor=0, menor=99999999, cdiv5=0, cpar=0, suma=0,cien=1;
    char resp;
    double prom;

do{
    do{
        cout << "ingresar numero: ";
        cin >> numero;

    }  while (!((numero %2)==0) or (numero%5)==0));

    if (numero > mayor){
        mayor = numero;
    }
    if (numero < menor){
        menor = numero;
    }

    do {
            cout << "desea continuar (s/n): ";
            resp = getche ();
            cout << endl;

    } while ( !((resp=='s') or (resp=='n')));

    if (numero %2==0 ){
        cpar++;
    }

    if (numero %5==0 ){
        cdiv5++;
    }

    if (numero>= 100){
        suma+= numero;
        cien++;
    }

    prom= (suma /cien);

   } while ( !(resp=='n'));


    cout << endl << "promedio: " << prom << endl;
    cout << "mayor: " << mayor << endl;
    cout << "menor: " << menor << endl;
    cout << "ndiv5: " << cdiv5 << endl;
    cout << "pares: " << cpar << endl;*/

    int num;
    int max=0;
    int min=9999999;
    int f=0;
    int x=0;
    int z=1;
    int suma=0;
    int prom=0;
    char resp;

    do
    {

        do
        {
            cout<<"Ingresar numero: ";
            cin>>num;


        } while( !(num%5==0 or num%2==0));


        if(max<num)
        {
            max=num;
        }

        if(min>num)
        {
            min=num;
        }


        do
        {
            cout<<"Desea continuar (s/n): ";

            cin.get (resp);

        } while (!(resp=='s' or resp=='n'));

        if (num%5==0)
        {
            f+=1;
        }

        if (num%2==0)
        {
            x+=1;
        }

        if (num>=100)
        {
            z+=1;
            suma+=num;
        }

        prom=(suma/z);

    } while(!(resp=='n'));

    cout<<"\n";
    cout<<"Numero Mayor: "<<max<<"\n";
    cout<<"Numero Menor: "<<min<<"\n";
    cout<<"Numeros quintuples: "<<f<<"\n";
    cout<<"Numeros pares: "<<x<<"\n";
    cout<<"Promedio mayores a 100: "<<prom<<"\n";

    return 0;
}
