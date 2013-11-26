#include <iostream>

using namespace std;
/*
ingresar 5 numeros y contar cuantos son positivos , negaticos y cero.

*/
int main()
{
   int numero, cpositivo, cnegativo, ccero,  contador;

   cpositivo=0;
   cnegativo=0;
   ccero=0;
   contador=0;

   while(contador<5)



   {
       cout<<"ingresar el numero....";
       cin>>numero;



       if(numero>0)
       {

        cpositivo++;
       }

      else if(numero<0)
       {
        cnegativo++;

       }
       else
       {

      ccero++;
       }
       contador++;
   }


  cout<<"contador de numeros positivos..."<<cpositivo<<"\n";
  cout<<"contador de numeros  negativos..."<<cnegativo<<"\n";
  cout<<"contador de numeros  cero..."<<ccero<<"\n";


    return 0;
}
