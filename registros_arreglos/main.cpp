#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

struct empleados
{
    char nombre[30];
    int ventas,comis;
};
const int tam=5;
empleados emple[tam];

void ingreso(empleados emple[])
{
    for(int i=0; i<tam; i++)
    {
        cout<<"Ingresar el Nombre del Empleado..>>";
        cin.getline(emple[i].nombre,30);

        cout<<"Ventas del Empleado..>>";
        cin>> emple[i].ventas;
        _flushall();
    }
}
void calcular(empleados emple[])
{
    for(int i=0; i<tam; i++)
    {
        emple[i].comis=emple[i].ventas * 0.05;
    }
}
void presentar(empleados emple[])
{
    for(int i=0; i<tam; i++)
    {
        cout<<" El Empleado "<<emple[i].nombre<<" GANO "<<emple[i].comis<<" Comision ";
    }
}
int main()
{
    ingreso(emple);

    return 0;
}
