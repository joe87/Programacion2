#include <iostream>

using namespace std;
/* Ingresar el Nombre del Empleado,las horas trabajadas,luego determinar las horas normales que son
    las primeras 40 y las extras que son las mayores a 40.
    Debera de obtener pago por hora usando el turno, luego un bono, el pago bruto que son la suma de los pagos normales y extras.
    ihss y total a pagar.

    turno   pn  pe
    1       100 130
    2       135 140
    3       140 150

   El bono si el empleado es de turno 1 y trabajo mas de 45 horas el bono es de 300 y sino es de 100.

   El pago bruto mayor a 7000 es 245 y sino el pago bruto por 3.5%
   */

int main()
{   char nombre[30];
    int horas,turno,bono,pnormal,pextra,hn,he;
    double ihss,tp,pb,pn,pe;

    cout << "Ingresar el Nombre del Empleado..>>";
    cin.getline(nombre,30);

    cout << "Ingresar las Horas..>>";
    cin>> horas;

    cout<<"Ingresar el turno..>>";
    cin>> turno;

    cout<<"--------------------------------------""\n";

     if (horas>40)
    {
        hn=40;
        he= horas-40;

    }

  else
  {
      hn=horas;
      he=0;
  }


 if ( (turno == 1) )
    {
        pn = 100*horas;
        pe =130*he;
    }


    else if ( (turno == 2) )
    {
        pn = 135*horas;
        pe= 140*he;
}


    else if ( (turno == 3) )
    {
        pn = 140*horas;
        pe = 150*he;
    }



       pnormal =  hn+pn;
       pextra=   he+pe;



 if ((horas>40) and (turno == 1) )
    {
        bono = 300;
    }

    if(horas<45 and turno==1)
    {
        bono = 100;
    }



  pb  = pnormal+ pextra ;
    cout <<"Pago Bruto.................>>"<< pb <<"\n";

     if ( pb > 7000)
    {
        ihss = 245;
    }

    else if ( pb <= 7000)
    {
        ihss = pb* 0.035;
    }

     tp = pb + bono - ihss;


    cout <<"Nombre....................>>"<<nombre<<"\n";
    cout<<"Turno......................>>"<< turno <<"\n";
    cout<<"Cantidad horas trabajadas..>>"<< horas <<"\n";
    cout <<"Tiene un bono de..........>>"<< bono <<"\n";
    cout<<"Reduccion del IHSS de......>>"<< ihss <<"\n";
    cout <<"Total a pagar.............>>"<< tp << "\n" ;


    return 0;
}
