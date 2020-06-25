#include <iostream>;
using namespace std;

//Verificacion de cuantas veces se encuentra un numero en el arreglo

int main (){
    int n,contador;
    int arreglo[20] = {5,7,6,2,5,1,9,7,8,10,5,3,8,7,2,5,2,9,1,6};
    contador=0;

    cout<< "Por favor ingrese el numero del 1 al 10 que desea contar en el arreglo: ";
    cin>>n;

    if (n>10)
    {
        cout<< "el numero ingresado es mayor a 10";
        
    } else
    {
        for (int i = 0; i < 20; i++)
    {
        if (arreglo[i]==n)
        {
            contador= contador+1;
        }
        
    }
    
    cout<<n << " se encuentra "<< contador<< " veces en el arreglo";
    }
    
    

    







 return 0;
}