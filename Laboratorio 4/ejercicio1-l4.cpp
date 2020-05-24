#include <iostream>;
using namespace std;

//Verificacion si n es divisible entre m.

int main (){
    int n,m;
    cout<<"ingrese n: ";
    cin>>n;

    cout<<"ingrese m: ";
    cin>>m;

    if (n%m == 0)
    {
        cout<<"El numero si es divisible, la respuesta es: "<<(n/m);

    } else
    {
        cout<< "El numero no es divisible";
    
    }
    
    




    return 0;
}