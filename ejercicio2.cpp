#include <iostream>
#include <math.h>
using namespace std;
int main (){
    float a;//radio del circulo
    float x;//area del circulo
    float y;//perimetro del circulo

    cout<< "ingrese el radio del circulo: ";
    cin>> a;
    
    x= 3.1415*(pow (a,2));
    y= 2*3.1415*a;

    cout<< "el area del circulo es ";
    cout<< x;
    cout<< " y su perimetro es ";
    cout<< y;

    return 0;

}