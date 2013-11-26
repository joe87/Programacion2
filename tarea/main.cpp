#include <iostream>
#include <stdio.h>

using namespace std;

void fecha(int &d,int &m,int &a)
{
    cout<<"-------El Horoscopo-------\n";
    cout<<"--------------------------""\n";
    do
    {
    cout<<"Ingresar el Dia..>>";
    cin>>d;
    }
    while(!(d>=1 and  d<=31));

    do
    {
    cout<<"Ingresar el Mes..>>";
    cin>>m;
    }
    while(!(m>=1 and  m<=12));

    cout<<"Ingresar el Año..>>";
    cin>>a;

    cout<<"--------------------------""\n";
}

void signo(int d,int m)
{
    cout<<"Su Signo es..>>";

    if(m==1 and d>=21 and  d<=31)
    {
        cout<<"Acuario";
    }
    else if(m==2 and  d>=1 and d<=18)
    {
        cout<<"Acuario";
    }
    else if(m==2 and  d>=19 and  d<=28)
    {
        cout<<"Piscis";
    }
    else if(m==3 and  d>=1 and  d<=20)
    {
        cout<<"Piscis";
    }
    else if(m==3 and d>=21 and  d<=31)
    {
        cout<<"Aries";
    }
    else if(m==4 and d>=1 and  d<=20)
    {
        cout<<"Aries";
    }
    else if(m==4 and  d>=21 and  d<=30)
    {
        cout<<"Tauro";
    }
    else if(m==5 and  d>=1 and  d<=21)
    {
        cout<<"Tauro";
    }
    else if(m==5 and d>=22 and d<=31)
    {
        cout<<"Geminis";
    }
    else if(m==6 and d>=1 and d<=21)
    {
        cout<<"Geminis";
    }
    else if(m==6 and d>=21 and d<=30)
    {
        cout<<"Cancer";
    }
    else if(m==7 and d>=1 and d<=22)
    {
        cout<<"Cancer";
    }
    else if(m==7 and d>=23 and d<=31)
    {
        cout<<"Leo";
    }
    else if(m==8 and d>=1 and d<=23)
    {
        cout<<"Leo";
    }
    else if(m==8 and d>=24 and d<=31)
    {
        cout<<"Virgo";
    }
    else if(m==9 and d>=1 and d<=23)
    {
        cout<<"Virgo";
    }
    else if(m==9 and d>=24 and d<=30)
    {
        cout<<"Libra";
    }
    else if(m==10 and d>=1 and d<=23)
    {
        cout<<"Libra";
    }
    else if(m==10 and d>=24 and d<=31)
    {
        cout<<"Escorpion";
    }
    else if(m==11 and d>=1 and d<=22)
    {
        cout<<"Escorpion";
    }
    else if(m==11 and d>=23 and d<=30)
    {
        cout<<"Sagitario";
    }
    else if(m==12 and d>=1 and d<=21)
    {
        cout<<"Sagitario";
    }
    else if(m==12 and d>=22 and d<=31)
    {
        cout<<"Capricornio";
    }
    else if(m==1 and d>=1 and d<=20)
    {
        cout<<"Capricornio";
    }
    cout<<"\n";
}


void validar(char &resp)
{
    do
    {
        cout<<"Desea ingresar otra Fecha (s/n): ";
        _flushall();
        cin.get(resp);
    }
    while (!(resp=='s' or resp=='n'));
}
int main()
{
    int d,m,a,i,f=1;
    char resp;

    for(i=1;i<=f;i++)
    {
        fecha(d,m,a);
        signo(d,m);


        validar(resp);


        if(resp=='s')
        {
            f+=1;
        }
    }
    return 0;
}
