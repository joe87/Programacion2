#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/* ingresar 5 nombres a un arreglo, luego sustituir todas sus vocales por letras x.
*/
using namespace std;
const int n=5;
char cadena[n][30];

void ingreso(char cadena[n][30])
{
  int i;
  for(i=0; i<n; i++)
  {
      cout<<"Ingresar la Cadena ["<<i<<"]..>>";
      cin.getline(cadena[i],30);
  }
}
void cambiar(char cadena[n][30])
{
    int i,l,nl;
    for(i=0; i<n; i++)
    {
        nl=strlen(cadena[i]);
        for(l=0; l<nl; l++)
        {
            switch(cadena[i][l])
            {
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'i':
                case 'I':
                case 'o':
                case 'O':
                case 'u':
                case 'U':

                cadena[i][l]='x';
                    break;
                default:
                    break;

            }
        }
    }
}
void presentar(char cadena[n][30])
{
    int i;
    for(i=0; i<n; i++)
    {
        cout<<"cadena..>>"<<cadena[i]<<"\n";
    }
}
int main()
{
    ingreso(cadena);
    cambiar(cadena);
    presentar(cadena);

    return 0;
}
