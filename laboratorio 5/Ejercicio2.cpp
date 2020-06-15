#include <iostream>;
using namespace std;
int main(){

    int h,m,s,s2,m2,h2;
    cout<<"Por favor ingrese la hora en el formato de 24 horas (0-23): ";
    cin>>h;

//Hora
    while (h>23)
    {
        cout<<"La hora ingresada no es valida, intentelo de nuevo: ";
        cin>>h;
    }
    
 //Minutos   
    cout<<"Por favor ingrese los minutos (0-59): ";
    cin>>m;
    
    while (m>59)
    {
        cout<<"Los minutos ingresados no son validos, intentelo de nuevo: ";
        cin>>m;
    }

//Segundos
    cout<<"Por favor ingrese los segundos (0-59): ";
    cin>>s;
    
    while (s>59)
    {
        cout<<"Los segundos ingresados no son validos, intentelo de nuevo: ";
        cin>>s;
    }




if (s<59)
{
    s2= s+1;

}
else
{
    s2=0;
    m2= m+1;
}



if (m<59)
{
    m2= m+1;
    h2=h;
}
else
{
    m2=0;
    h2=h+1;
}

if (h<23)
{
    h2=h2;
} else
{
    h2=0;
}

cout<<"La hora actual es: "<<h2<<":"<<m2<<":"<<s2;





return 0;
}

