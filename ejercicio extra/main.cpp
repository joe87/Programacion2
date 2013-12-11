#include <iostream>

using namespace std;

void cambiar(char cadena[n][30])
{
    int i;
    int fin;
    for(i=0; i<n; i++)
    {
        fin=strlen(cadena[i]);
        cadena[i][fin]='*';
    }
}
void presentar(char cadena[n][30])
{
    int i;
    for(i=0; i<n; i++)
    {
        cout<<"cadena["<<i<<"]..>>"<<cadena[i]<<"\n";
    }
}
int main()
{
    ingreso (cadena);
    cambiar(cadena);
    presentar(cadena);

    return 0;
}
