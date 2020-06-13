#include <iostream>;
using namespace std;
int main(){
    int a;
    
    //Calcular si el año es bisiesto
    cout<< "Este programa indicara si el an-o que usted ingrese en bisiesto o no\n";
    cout<< "Por favor ingrese un an-o: ";
    cin>>a;

    if (a%400==0)
    {
        cout<< "El an-o que usted ingreso es bisiesto";
    } else
    {
        if ((a%4==0)&&(a%100!=0))
        {
            cout<< "El an-o que usted ingreso es bisiesto";
        } else
        {
            cout<< "El an-o que usted ingreso no es bisiesto";
        }
        
        
    }
    
return 0;
}