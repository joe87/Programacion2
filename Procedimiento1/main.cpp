#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

char nombre[30];
char obs[15];
int na,ne,nf;

void ingreso(char nombre[],int &na,int &ne)
{
    cout<<"Ingresar el Nombre del Alumno...>>";
    cin.getline(nombre,30);

    cout<<"Ingresar la Nota del Examen.....>>";
    cin>> ne;

    cout<<"Ingresar la Nota Acumulada...>>";
    cin>>na;

}
void calcular(int na,int ne,int &nf,char obs[])
{
    nf=na + ne;
    if(nf>=60)
        strcpy(obs,"APROBADO");
    else
        strcpy(obs,"REPROBADO");
}
void presentar(int nf,char obs[])
{
    cout<<"Nota Final del Alumno es...>>"<<nf<<"\n";
    cout<<"Observacion:"<<obs<<"\n";
}
int main()
{
    ingreso(nombre,na,ne);
    calcular(na,ne,nf,obs);
    presentar(nf,obs);

    return 0;
}
