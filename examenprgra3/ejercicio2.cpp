#include <iostream>;
using namespace std;
int main(){
    int n,c,i=0,i2;
    //Juego del numero magico

    cout<< "El programa contiene un numero secreto del 1 al 100, usted tiene 5 intentos para adivinarlo\n";
    cout<< "Listo para jugar? (1=si 2=no)\n";
    cin>>c;

    while ((n!=45)&&(i<5)&&(c==1))
    {
        i2=5-i;
        
        cout<< "Tiene "<<i2<<" intentos restantes\n";
        cout<< "Por favor ingrese un numero del 1 al 100: ";
        cin>>n;

        if (n>45)
        {
            cout<< "\nEl numero ingresado es mayor que el numero magico";
        } else if (n<45)
        {
            cout<< "\nEl numero ingresado es menor que el numero magico";
        }else if (n=45)
        {
            cout<< "\nEl numero ingresado es el numero magico";
        } 
        
        
         if (n!=45)
        {
            cout<< "\nSi desea continuar presione 1, si desea salir del programa presione 2: ";
        cin>>c;
        } 
        
         i=i+1;

        }
        if (n==45)
        {
            cout<< "\nFelicidades, usted encontro el numero magico";
        }else
        {
            cout<< "Usted no encontro el numero magico, intentelo de nuevo";
        }
        
    
 return 0;
}