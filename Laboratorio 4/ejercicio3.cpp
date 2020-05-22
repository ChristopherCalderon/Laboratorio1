#include <iostream>;
using namespace std;

//Verificacion si un numero es positivo, negativo o cero

int main (){
    int n;
    cout<< "Por favor ingrese n: ";
    cin>>n;

    if (n<0)
    {
        cout<<n<< " es un numero negativo ";
    } else  if (n>0)
    {
        cout<<n<< " es un numero positivo ";
    } else
    {
        cout<< "Usted a ingresado 0, tal numero no es positivo ni negativo";
    }
    
    
    

return 0;

}