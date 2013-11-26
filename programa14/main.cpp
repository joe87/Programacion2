#include <iostream>

using namespace std;

/* Ingresar la base y el exponente luego determinar la potencia usando el ciclo for.
*/

int main()
{   int base,expo,poten;
    cout<<"Ingresar base..>>";
    cin>>base;
    cout<<"Ingresar Exponente..>>";
    cin>>expo;

    for(int i=0; i<expo; i++)
    {
        poten = poten * base;
    }
    cout << "Potencia es..>>"<<poten<<"\n";

    return 0;
}
