#include <iostream>

using namespace std;
/* Ingresar 5 numeros pares. Validar que el numero sea par
*/

int main()
{   int numero;

    for(int i=0; i<5; i++)
    {
        do
        {
            cout << "Ingresar un Numero par....>>";
            cin>> numero;
        }
    while (!((numero%2)==0));
    }

    return 0;
}
