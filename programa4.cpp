#include <iostream>

using namespace std;
/* Ingresar un Numero y determinar si es positivo o negativo o cero
*/

int main()
{   int numero;

    cout << "Ingresar Numero...:";
    cin>> numero;

    if (numero>0)
    {
        cout<<"El Numero es Positivo"<<"\n";
    }
    else if (numero<0)
    {
        cout<<"El Numero es Negativo"<<"\n";
    }
    else
    {
        cout<<"El Numero es Cero"<<"\n";
    }

    return 0;
}
