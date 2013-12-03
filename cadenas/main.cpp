#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

char cadena[30];

int main()
{
    cout<<"Ingresar una Cadena..>>";
    cin.getline(cadena,30);
    cadena[0]='x';

    cout<< cadena <<"\n";
    return 0;
}
