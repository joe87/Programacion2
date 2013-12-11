#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct empleado
{
    char nombre[30];
    int turno;
    double ventas;
    double comision;
    double ihss;
    double tp;
    double pc;
    double tb;
};
    empleado emple;

void ingreso(empleado &emple)
{
    cout<<"Ingresar Nombre...>>";
    cin.getline(emple.nombre,30);
    _flushall();

    cout<<"Ingrensar Ventas..>>";
    cin>>emple.ventas;
    _flushall();

    do
    {
        cout<<"Ingresar el Turno del Empleado..(1,2,3)..>>";
        cin>>emple.turno;

    }
    while(!((emple.turno>=1) and (emple.turno<=3)));
}

int seguro (double ventas)
 {
     if (ventas >=7000)
        {
          return 245;
        }
        else
        {
            return 0.035 * ventas;
        }
 }

double  comisiones(int turno)
{
    switch (turno)
    {
        case 1:
            return 0.03;
            break;

        case 2:
            return 0.05;
            break;

        default:
            return 0.06;
            break;
    }
}

void calcular (empleado  &emple)
{
    emple.pc = comisiones(emple.turno);
    emple.comision = emple.pc * emple.ventas;
    emple.ihss = seguro(emple.ventas) - emple.tb;
    emple.tb = emple.ventas + emple.comision;
    emple.tp = emple.tb  - emple.ihss;
}

void presentar (empleado emple)
{
    cout<<"Nombre Empleado...>>"<<emple.nombre<<"\n";
    cout<<"Comision %........>>"<<emple.pc<< "LPS" <<"\n";
    cout<<"Pago x Comision...>>"<<emple.comision<< "LPS" <<"\n";
    cout<<"IHSS..............>>"<<emple.ihss<< "LPS"<<"\n";
    cout<<"Total pago Bruto..>>"<<emple.tb<< " LPS" <<"\n";
    cout<<"Total a Pagar.....>>"<<emple.tp << "LPS" <<"\n";

}

int main()
{
        ingreso (emple);
        calcular (emple);
        presentar (emple);

    return 0;
}
