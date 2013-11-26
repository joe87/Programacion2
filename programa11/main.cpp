#include <iostream>

using namespace std;
/*
ingrsar  la cantidad de numeros que necesitamos pedir.
luego ingrsar  el numero y determinar su es par o impar.
al final final presentar cuantos fueron pares o impares.
*/
int main()
{

  int numero, contador,cpar,cimpar,nveces;


  contador=0;
  cpar=0;
  cimpar=0;

  cout<<"cuantos numeros deseas ingresar...";
  cin>>nveces;


       while(contador<nveces)
      {


          cout<<"ingresar numero...";
          cin>>numero;

       if (numero% 2 ==0)
    {
        cout<<"el numero es par"<<"\n";
        cpar++;
    }


    else
{
    cout<<"el numero es impar"<<"\n";
    cimpar ++;
       }
     contador++;
      }


cout<<" numero de pares es...."<<cpar<<"\n";
cout<<" numero de impares es..."<<cimpar<<"\n";

    return 0;
}
