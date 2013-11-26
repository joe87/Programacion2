#include <iostream>

using namespace std;
/* Se tiene que ingresar la nota del Alumno y el Programa debera de presentar la observacion usando la siguiente tabla:
1-59 reprobado
60-80 bueno
81-90 muy bueno
91-100 sobresaliente
Usar condiciones donde apliquemos el and.
*/

int main()
{   char nombre[30];
    int nota;

    cout << "Ingresar el Nombre del Alumno....:";
    cin.getline(nombre,30);

    cout << "Ingresar la nota del Alumno....:";
    cin>> nota;

     if ((nota>1)and(nota<60))
    {
        cout<<"Reprobado"<<"\n";
    }
    else if ((nota>=60)and(nota<=80))
    {
        cout<<"Bueno"<<"\n";
    }
    else if ((nota>=81)and(nota<=90))
    {
        cout<<"Muy Bueno"<<"\n";
    }
    else
    {
        cout<<".....Sobresaliente....."<<"\n";
    }


    return 0;
}
