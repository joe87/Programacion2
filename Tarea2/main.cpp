#include <iostream>

using namespace std;

int main()

{   int numero=0;
    int suma=0;
    int contador=0;

    cout << "Ingresar un Numero...>>";
    cin>> numero;

    cout <<"--------------------------------------""\n";

/* Despues que ingresamos el Numero a mostrar el ciclo While reconoce los numeros distintos de cero y enteros.
   Luego se divide el numero entre 100 y el residuo de este resultado se divide entre 10.
   Luego sumamos el residuo de la segunda division + el cohociente de la primera division + cohociente segunda division.
*/

     while(numero!=0)

        {
	    	suma = suma + (numero%10);
	    	numero = numero/10;
            contador++;

        }


    cout <<"La suma de los digitos es...>>"<<suma<<"\n";


    return 0;
}
