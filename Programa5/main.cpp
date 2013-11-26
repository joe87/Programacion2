#include <iostream>

using namespace std;
/* Se tiene que ingresar la nota del Alumno y el Programa debera de presentar la observacion usando la siguiente tabla:
1-59 reprobado
60-80 bueno
81-90 muy bueno
91-100 sobresaliente
*/

int main()
{   int nota;
    cout << "Ingresar la Nota del Alumno...:";
    cin >> nota;

    if (nota<60)
    {
        cout<<"Reprobado"<<"\n";
    }
    else if (nota<81)
    {
        cout<<"Bueno"<<"\n";
    }
    else if(nota<91)
    {
        cout<<"Muy Bueno"<<"\n";
    }
    else
    {
        cout<<".....Sobresaliente....."<<"\n";
    }
    return 0;
}
