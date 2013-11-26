#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
/* Ingresar el Nombre del alumno, luego debemos de pedir las 3 notas parciales usando un ciclo,
    presentar el promedio, la nota mayor de los tres parciales.
    Preguntar si desea continuar, al final presentar el Nombre del Alumno con la mejor nota.
*/

int main()
{   char nombre[30];
    char resp;
    char nombremayor[30];
    int nota,prom,notamax=0,alumnomax=0;
    int suma=0;
    char estado[15];
    do
    {
        cout<<"Ingresar el Nombre del Alumno...>>";
        cin.getline(nombre,30);
        cout<<"-----------------------------""\n";

        for(int i=1; i<=3; i++)
        {
            cout<<"Ingresar el Parcial..."<<i<<"...>>";
            cin>> nota;

            suma+=nota;

            if(notamax<nota)
            {
                notamax=nota;
            }
            cout<<"------------------------------""\n";
        }
            prom=suma/3;

            if(prom>=60)
            {
                strcpy(estado,"APROBADO");
            }
            else
            {
               strcpy(estado,"REPROBADO");
            }
            cout<<"Promedio del Alumno...>>"<<prom<<"\n";
            cout<<"La nota mayor es...>>"<<notamax<<"\n";
            cout<<"El estado del Alumno es...>>"<<estado<<"\n";

            _flushall();

            if(alumnomax<prom)
            {
                alumnomax=prom;
                strcpy(nombremayor,nombre);
            }


        do
        {
         cout<<"Desea Continuar....>>";
         cin.get(resp);

        }
        while((resp!='N')and(resp!='S'));
        _flushall();
    }
        while(resp!='N');

    return 0;
}
