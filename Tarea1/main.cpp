#include <iostream>

using namespace std;
/* Ingresar el dia,mes año y determinar si esta correcto la fecha..!!!
*/

int main()
{   int d,m,a;
    while((d<1)or(d>28))
    {
      cout << "Ingresar dia...:";
      cin>> d;
    }

    while((m<1)or(m>12))
    {
        cout << "Ingresar Mes...:";
        cin>> m;
    }

   if(a>0)
   {
       cout << "Ingresar año...:";
       cin>> a;
   }


    cout<< endl << "DIA: " << d << "\t MES: " << m << "\t ANIO: "<< a << endl;

    return 0;
}
