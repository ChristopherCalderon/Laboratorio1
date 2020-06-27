#include <iostream>;
using namespace std;

char mensaje [100];
int codigo (char mensaje[100]);

int main (){

cout<<"Ingrese una palabra por favor: ";
cin.getline(mensaje,100);

codigo(mensaje);
return 0;
}


int codigo (char mensaje[100])
{
for (int i = 0; i <=100; i++)
{
    switch (mensaje[i])
    {
    case 'm':
        mensaje[i]=48;
        break;

    case 'u':
        mensaje[i]=49;
        break;

    case 'r':
        mensaje[i]=50;
        break;

    case 'c':
        mensaje[i]=51;
        break;

    case 'i':
        mensaje[i]=52;
        break;

    case 'e':
        mensaje[i]=53;
        break;

    case 'l':
        mensaje[i]=54;
        break;

    case 'a':
        mensaje[i]=55;
        break;
    
    case 'g':
        mensaje[i]=56;
        break;
    
    case 'o':
        mensaje[i]=57;
        break;
    
    default:
    mensaje [i]=mensaje [i];
    }
}
cout<<"Texto codificado: "<<mensaje;
}

