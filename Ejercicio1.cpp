// Obtenga la nómina mensual, salario neto, de los empleados de una empresa cuyo trabajo se paga por horas y del modo siguiente:

#include <iostream>
using namespace std;
int main()
{
    int n=0;
    float Dinero, Impuesto, Salario;
    string Nombre;

    cout<<"Ingrese su nombre:\n";
    cin>>Nombre;
    cout<<"Ingrese las horas de empleo realizadas:\n";
    cin>>n;

      if (n>0 && n<=160){
               
      Dinero=n*10;         
               
              
      }

      else if (n>0 && n>160){

        Dinero=n*15;

      
      }



    if(Dinero>0&&Dinero<=2000){

      Impuesto=Dinero*0;

      Salario= Dinero - Impuesto;

    cout<<"Su salario es de: "<<Salario;

    }


    else if(Dinero>2000<=2200){
      Impuesto=Dinero*0.20;

      Salario= Dinero - Impuesto;


    cout<<"Su salario es de "<<Salario;


    }


    else if(Dinero>2201){
    Impuesto=Dinero*0.30;

    Salario= Dinero - Impuesto;


    cout<<"Su salario es de :"<<Salario;
    }

return 0;
 
      }

