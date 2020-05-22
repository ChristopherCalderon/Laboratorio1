#include <iostream>;
#include <string.h>;

using namespace std;

//verificacion si la palabra ingresada es mayor a 10 caracteres o no y si la longitud es par o impar;


int main (){
    string palabra;
    int longitud=0;


    cout<<"ingrese una palabra: ";
    cin>>palabra;
    longitud = palabra.length();

    



    if (longitud<10)
    {
        cout<<"la cantidad de caracteres es menor que 10";
    } else if (longitud>10)
    {
         cout<<"la cantidad de caracteres es mayor que 10";
    } else
    {
        cout<<"la cantidad de caracteres es 10";
    }
    
    if (longitud %2==0)
    {
        cout<<" ademas es un numero par";
    } else
    {
        cout<<" ademas es un numero impar";
    }
    
    
    
    
    
    



return 0;
}