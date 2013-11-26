#include <iostream>

using namespace std;
/* Ingresar el Nombre del Empleado,  el turno y las horas,luego determinar el pago por hora,el pago bruto,hss
    y total a pagar. Turno1= 100, turno2= 150, turno3= 190
    para el seguro si el salario es arriba de 7000 es igual a 245 y si no deducir del salario bruto el 3.5%.
*/

int main()
{   char nombre[30];
    int turno,horas,pxh;
    double ihss,tp,pb;

    cout << "Ingresar el Nombre...:";
    cin.getline(nombre,30);

    cout << "Ingresar el Turno 1,2,3...:";
    cin>> turno;

    cout << "Ingresar las Horas...:";
    cin>> horas;

    if (turno==1)
    {
        pxh=100;
    }
    else if (turno==2)
    {
        pxh=150;
    }
    else if(turno==3)
    {
        pxh=190;
    }
    else
    {
        pxh=0;
    }
    pb=pxh*horas;
    if(pb>7000)
    {
        ihss=245;
    }
    else
    {
        ihss=0.035*pb;
    }
    tp=pb-ihss;

    cout << "Pago por Hora"<<pxh<<"\n";
    cout << "Pago Bruto"<<pb<<"\n";
    cout << "Seguro Social"<<ihss<<"\n";
    cout << "Total a Pagar"<<tp<<"\n";

    return 0;
}
