#include <iostream>
using namespace std;
int main (){
    string n;
    float p,c,x;

    cout<< "ingrese el nombre del producto: ";
    cin>>n;
    cout<< "ingrese el precio del producto: ";
    cin>>p;
    cout<< "ingrese la cantidad de unidades compradas del producto: ";
    cin>>c;

    x= p*c;

    cout<< "el precio de ";
    cout<<c;
    cout<< " ";
    cout<<n;
    cout<< "/s es de ";
    cout<<x;
    cout<< " dolares";


    return 0;




}