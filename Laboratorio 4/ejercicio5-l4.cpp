#include <iostream>;
#include <string.h>;

using namespace std;

//verificar si la palabra ingresada inicia y finaliza con la misma letra

int main(){
    string palabra;
    int longitud=0;

     cout<<"ingrese una palabra: ";
     cin>>palabra;
     longitud = palabra.length();

if (palabra[0]==palabra[longitud-1])
{
    cout<<"La palabra inicia y termina con la misma letra";
} else
{
    cout<<"La palabra no inicia y termina con la misma letra";
}





return 0;
}