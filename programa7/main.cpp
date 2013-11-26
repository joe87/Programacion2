#include <iostream>

using namespace std;
/* INGRESAR EL NOMBRE DEL ALUMNO, LA NOTA ACUMULADA Y EXAMEN, Y DETERMINAR LA NOTA FINAL.
    SI LA NOTA ESTA ENTRE 57-60 COLOCAR 60.
*/
int main()
{   char nombre[30];
    int na,ne,nf;

    cout << "Ingresar Nombre del Alumno....:";
    cin.getline(nombre,30);

    cout << "Nota Acumulada....:";
    cin>> na;

    cout << "Nota Examen....:";
    cin>> ne;

    nf= na+ne;
    if((nf>=57)and(nf<60))
    {
        nf=60;
    }

    cout<<"Nota Final es....:"<<nf<<"\n";

    return 0;
}
