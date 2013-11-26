#include <iostream>

using namespace std;
int numero;
int cifras;

void ingreso(int&numero)
{
    do
    {
        cout<<"Ingresar un Numero par...>>";
        cin>> numero;
    }
    while(!((numero%2)==0)or((numero%5)==0));
}
void contarcifras(int numero,int &cifras)
{
    while(numero>0)
    {
        cifras++;
        numero=numero/10;

    }
}
int main()
{
    for(int i=0; i<5; i++)
    {
        cifras=0;
        ingreso(numero);
        contarcifras(numero,cifras);

        cout<<numero<<"Tiene"<<cifras<<"Cifras"<<"\n";
    }
    return 0;
}
