#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  X_0 CON ARREGLO BIDIMENCIONALES_JOEL CABALLERO

using namespace std;

void inicio(int arr[3][3])
{
    for(int f=0; f < 3; f++)
    {
        for(int c=0; c < 3; c++ )
        {
            arr[f][c] = -1;
        }
    }
}

void imprimir(int arr[3][3])
{
    for(int f=0; f < 3; f++)
    {
        for(int c=0; c < 3; c++ )
        {
            if( arr[f][c] == -1 )
            {
                cout << "  | ";
            }
            else
            {
                if(arr[f][c]==1)
                {
                    cout << "X"  << " | ";
                }
                else if(arr[f][c]==0)
                {
                    cout << "0"  << " | ";
                }
            }
        }
        cout << "\n------------------------------\n";
    }
}

bool Perdio(int arr[3][3], int tipo)
{
    int cont;

    for(int f=0; f < 3; f++)
    {
        cont = 0;
        for(int c=0; c < 3; c++)
        {
            if(arr[f][c] == tipo)
            {
                cont++;
            }
            else
            {
                break;
            }
        }
        if( cont == 3)
        {
            return true;
        }
    }

    for(int c=0; c < 3; c++)
    {
        cont = 0;
        for(int f=0; f < 3; f++)
        {
            if(arr[f][c] == tipo)
            {
                cont++;
            }
            else
            {
                break;
            }
        }
        if( cont == 3)
        {
            return true;
        }
    }

    if(arr[0][0] == tipo && arr[1][1] == tipo && arr[2][2] == tipo)
    {
        return true;
    }
    else if(arr[0][2] == tipo && arr[1][1] == tipo && arr[2][0] == tipo)
    {
        return true;
    }

    return false;
}

bool Disponibles(int arr[3][3])
{

    for(int f=0; f < 3; f++)
    {
        for(int c=0; c < 3; c++)
        {
            if( arr[f][c] == -1)
            {
                return true;
            }
        }
    }
    return false;
}

bool esvalido(int arr[3][3],int f,int c)
{
    if(f < 0 || f > 2 || c < 0 || c > 2)
    {
        return false;
    }

    if( arr[f][c] != -1)
    {
        return false;
    }

    return true;
}

void CambiarTurno(int &turno)
{
    if(turno == 1)
    {
        turno = 0;
    }
    else
    {
        turno = 1;
    }
}
int main()
{
    int tablero[3][3], turno = 1, fila, col;
    char jugador1[30], jugador2[30];
    bool dispo, ganador, valido;

    inicio(tablero);

        cout << "Jugador 1..>>";
        cin >> jugador1;

        cout << "Jugador 2..>>";
        cin >> jugador2;

        do
        {
            do
            {
                cout <<"Ingrese la Coordenada del Jugador..>>"<< turno <<"\n";
                cout << "Fila..(0-2).......................>>";
                cin >> fila;

                cout << "Columna..(0-2)....................>>";
                cin >> col;

                valido = esvalido(tablero, fila, col);
            }
            while(!valido);


            tablero[fila][col] = turno;

            imprimir(tablero);

            ganador = Perdio(tablero,turno);
            if(ganador)
            {
                if(turno == 1 )
                {
                    cout << jugador1 << " VENCIO A..>>" << jugador2 <<"\n";
                }
                else
                {
                    cout << jugador2 << " VENCIO A..>>" << jugador1 <<"\n";
                }
                break;
            }

                CambiarTurno(turno);

                dispo = Disponibles(tablero);
                if(!dispo)
                {
                    cout << "!!HAY EMPATE!!";
                }
        }
                while(dispo);

    return 0;
}
