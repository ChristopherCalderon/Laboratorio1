#include <iostream>;
using namespace std;
int main(){

    int a,b,c,d;

    cout<<"Por favor ingrese el 1er numero entero: ";
    cin>>a;
    cout<<"Por favor ingrese el 2do numero entero: ";
    cin>>b;

c=a/b;
d=a%b;

while (d!=0)
{
    a=b;
    b=d;
 if (a>b)
 {
     c=a/b;
     d=a%b;
 }
 
    
}
cout<<"El MCD de ambos numeros es: "<<b;

return 0;
}