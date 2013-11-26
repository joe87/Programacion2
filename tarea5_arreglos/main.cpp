#include <iostream>

using namespace std;
int numero[5];

/*Aqui se ingresan  los 5 numenos  en el Arreglo..
*/
void ingresar(int numero[])
{
	for(int i=0;i<5;i++)
    {
        cout<<"Ingresar un Numero..>>";
		cin>>numero[i];
		cout<<"-------------------------------""\n";
    }
}
/*Aqui se ordenan los numeros que ingresamos  en el Arreglo  en forma Asendente...
*/
void ascendente(int numero[])
{
    for(int i1=1;i1<5;i1++)
    {
        for(int i2=0;i2<5;i2++)
        {
            if(numero[i1]<numero[i2])
                {
                    int x=numero[i2];
                    numero[i2]=numero[i1];
                    numero[i1]=x;
                }
        }
    }
}

/* Aqui se ordenan los numeros que ingresamos  en el Arreglo  en forma Desendente.
*/
void descendente(int numero[])
{
    for(int i1=1;i1<5;i1++)
    {
        for(int i2=0;i2<5;i2++)
        {
            if(numero[i1]>numero[i2])
                {
                    int x=numero[i2];
                    numero[i2]=numero[i1];
                    numero[i1]=x;
                }
        }
    }
}

/* Aqui sustituimos los numeros pares por "0".
*/
void subpares(int numero[])
{
    for(int i=0;i<5;i++)
    {
        if(numero[i]%2==0)
        {
            numero[i]=0;
        }
    }
}
/* Aqui procedemos a presentar los datos.
*/
void presentar(int numero[])
{
    for(int i=0;i<5;i++)
    {
    cout<<" "<<numero[i];
    }
    cout<<"\n";
}

int main()
{
    ingresar(numero);
	ascendente(numero);

    cout<<"El Orden de Numeros Ascendente es..>>";

	presentar(numero);
	descendente(numero);

    cout<<"El Orden de Numeros Descendente es..>>";

	presentar(numero);
	subpares(numero);


    cout<<"Sustitucion de Numeros pares por 0..>>";

	presentar(numero);

    return 0;
}
