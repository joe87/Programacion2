#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
/* Imgresar el nombre,turno y las horas, usando un procedimiento. Luego determine las horas normales
    usando una funcion, lo mismo seria para las horas extras.
    Luego determinar el pago por hora normal y extra usando un procedimiento.
    Turno       Pago Normal         Pago Extra
    1               100                 120
    2               130                 150
    3               140                 160
    Elaborar una funcion para el ihss.
    Usando un procedimiento realizar los calculos y en otro procediemiento presentar los datos.
    */

char nombre[30];
int turno,horas,hn,he;
double pxn,pxe,pn,pe,pb,ihss,tp;

void ingresar(char nombre[],int &horas, int &turno)
{
    cout<<"Ingresar el Nombre del Empleado..>>";
    cin.getline(nombre,30);

    cout<<"Horas............................>>";
    cin>> horas;

    do
    {
        cout<<"Ingresar el Turno..1.2.3.........>>";
        cin>> turno;
        cout<<"-------------------------------""\n";
    }
    while((turno<1) or (turno>3));
        _flushall();
}
int horasn(int horas)
{
    if(horas>40)
    {
        return 40;
    }
    else
    {
        return horas;
    }
}
int horase(int horas)
{
    if(horas>40)
    {
        return horas - 40;
    }
    else
    {
        return 0;
    }
}
void pagos(int turno,double &pxn,double &pxe)
{
    switch (turno)
    {
        case 1:
                pxn=100;
                pxe=120;
                break;
        case 2:
                pxn=130;
                pxe=150;
                break;
        default:
                pxn=140;
                pxe=160;
                break;

    }
}
double seguro(double sueldo)
{
    if(sueldo<7000)
    {
        return 245;
    }
    else
    {
        return 0.035 * sueldo;
    }
}
void calcular(int turno,int horas,int &hn,int &he,double &pxn,double &pxe,double &pn,double &pe,double &pb,double &ihss,double &tp)
{
    hn=horasn(horas);
    he=horase(horas);

    pagos(turno,pn,pe);

    pn=hn*pxn;
    pe=he*pxe;
    pb=pn+pe;

    ihss=seguro(pb);

    tp=(pn+pe)-ihss;
}
void presentar(int hn,int he,double pxn,double pxe,double pn,double pe,double pb,double ihss,double tp)
{
    cout<<"Horas Normales......>>"<<hn<<"\n";
    cout<<"Horas Extras........>>"<<he<<"\n";
    cout<<"Pago x hora Normal..>>"<<pxn<<"\n";
    cout<<"Pago x hora Extra...>>"<<pxe<<"\n";
    cout<<"Pago Normal.........>>"<<pn<<"\n";
    cout<<"Pago Extra..........>>"<<pe<<"\n";
    cout<<"Pago Bruto..........>>"<<pb<<"\n";
    cout<<"ihss................>>"<<ihss<<"\n";
    cout<<"------------------------------""\n";
    cout<<"Total a pagar es....>>"<<hn<<"\n";
}

int main()
{
    ingresar(nombre,horas,turno);
    calcular(turno,horas,hn,he,pxn,pxe,pn,pe,pb,ihss,tp);
    presentar(hn,he,pxn,pxe,pn,pe,pb,ihss,tp);

    return 0;
}
