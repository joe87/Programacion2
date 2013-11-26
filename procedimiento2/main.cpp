#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
/* Ingresar el nombre del Empleado, el turno y las ventas.
    validar que el turno solo sea 1,2,3.(Usar procedimiento)
    Calcular usando un procedimiento,la comision ganada 1=5%,2=3%,3=6%,el ihss, y el total a pagar.
    Presentar los datos usando un procedimiento.
*/

char nombre[30];
int ventas,turno,ihss,comi,tp;

void ingreso(char nombre[],int&turno,int&ventas)
{
    cout<<"Ingresar Nombre de Empleado...>>";
    cin.getline(nombre,30);

    do
    {
        cout<<"Ingresar el Turno 1-2-3...>>";
        cin>> turno;
    }
    while((turno<1)and(turno>3));

    cout<<"Ingresar las Ventas...........>>";
}
void calcular(int &ihss,int &comi,int &tp)
{

}

int main()
{
    ingreso(nombre,turno,ventas);

    return 0;
}
