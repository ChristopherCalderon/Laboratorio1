#include <iostream>;
using namespace std;

//Verificacion si n es par.

int main () {
    int n;
    cout<< "Por favor ingrese n: ";
    cin>>n;

    if (n%2==0)
    {
        cout<< n << " es un numero par";
    } else
    {
        cout<< n << " es un numero impar";
    }
    
    

    return 0;
}