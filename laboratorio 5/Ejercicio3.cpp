#include <iostream>;
using namespace std;
int main(){
    int a,n;
    
    //Calcular si el año es bisiesto
    cout<< "Este programa indicara si el an-o que usted ingrese en bisiesto o no\n";
    cout<< "Por favor ingrese un an-o: ";
    cin>>a;

    if (a%400==0)
    {
        n=1;
    } else
    {
        if ((a%4==0)&&(a%100!=0))
        {
            n=1;
        } else
        {
            n=0;
        }
        
        
    }

    switch (n)
    {
    case 0:
        cout<< "False"<<endl;
        cout<< "El an-o que usted ingreso no es bisiesto"<<endl;

        
        break;
    case 1:
    cout<< "True"<<endl;
    cout<< "El an-o que usted ingreso es bisiesto"<<endl;
    
    default:
        break;
    }
    
return 0;
}