#include <iostream>;
using namespace std;
int main(){

    int a,m,d,d2,m2,a2;
    cout<<"Por favor ingrese el an-o: ";
    cin>>a;

    
 //Mes
    cout<<"Por favor ingrese el mes (Formato numerico): ";
    cin>>m;
    
    while (m>12)
    {
        cout<<"El mes ingresado no es valido, intentelo de nuevo: ";
        cin>>m;
    }

//Dias
    cout<<"Por favor ingrese el dia (Formato numerico): ";
    cin>>d;
    
    while (d>31)
    {
        cout<<"El dia ingresado no es valido, intentelo de nuevo: ";
        cin>>d;
    }


if (m==4,6,9,11)
{
    if (d<30)
 {
    d2= d+1;
    m2=m;

 }
 else
 {
    d2=1;
    m2= m+1;
 }

} else if ((m==2)&&(a%400==0))
{
      if (d<29)
 {
    d2= d+1;
    m2=m;

 }
 else
 {
    d2=1;
    m2= m+1;
 }
} else if ((m==2)&&(a%400!=0))
{
    {
      if (d<28)
 {
    d2= d+1;
    m2=m;

 }
 else
 {
    d2=1;
    m2= m+1;
 }
     }
} else
    {
        {
      if (d<31)
 {
    d2= d+1;
    m2=m;

 }
 else
 {
    d2=1;
    m2= m+1;
    } 
  }}


    
if (m<12)
{
   a2=a;
} else
{
   a2=a+1;
   m2=1;
}



cout<<"La fecha actual es: "<<a2<<":"<<m2<<":"<<d2;





return 0;
}