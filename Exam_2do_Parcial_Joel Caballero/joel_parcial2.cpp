#include <iostream>

using namespace std;

int const tam=4;
int arreglo[4];
int numeroMayordiv5;
int sumamayor100;

void ingreso(int arreglo[])
{
    for (int i=0;i<=tam;i++)
    {
        do
        {
            cout<<"Ingresar un Numero PAR..>>";
            cin>>arreglo[i];
            cout<<"------------------------";
        }
       while(!(arreglo[i]%2==0));
    }
}
int sumamayor100(int arreglo[])
{  int suma=0;

    for (int i=0;i<=tam;i++)
    {
      if (arreglo[i]>100)
        {
            suma+=arreglo[i];
        }
    }
    return suma;
}

int numeroMayordiv5(int arreglo[])
{    int maxi=0;
     for (int i=0;i<=tam;i++)
    {
        if (arreglo[i]%5==0>maxi)
        {
            maxi=arreglo[i];
        }
    }
    return maxi;
}

int main()
{   ingreso(arreglo);
    suma100=sumamayor100(arreglo);
    numeroMayordiv5=mayordiv5(arreglo);
    cout<<"La suma de los numeros mayores a 100 es......."<<suma100<<"\n";
    cout<<"El numero mayor de los divicibles entre 5 es...."<<nummayordiv5<<"\n";


    return 0;
}
