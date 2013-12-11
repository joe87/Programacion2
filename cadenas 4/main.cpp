#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

string cadena;

int main()
{
    cout<<"Ingresar la Cadena..>>";
    cin>> cadena;

    string subcadena(cadena,2,6);

    cout<<"Valor de Subcadena"<<subcadena<<"\n";

    string cortar;
    cortar=cadena.substr(0,5);

    cout<<"Valor de Cortar"<<cortar<<"\n";
    cout<<"Tamaño de la Cadena"<<cadena.size()<<"\n";

    string insertado;
    insertado=cadena;
    insertado=cadena.insert(1,"Joel");

    cout<<"Valor de Insertado"<<insertado<<"\n";

    string ree;

    return 0;
}
