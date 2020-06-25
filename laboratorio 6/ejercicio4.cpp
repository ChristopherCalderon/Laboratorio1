#include "iostream"

using namespace std;

void Leer (int, int[]);
void Suma (int[], int[], int, int[]);
void Resultado (int[], int);

//Suma de dos arreglos

int main (void)
{
    int n;

    
   

    do{
    cout << "Ingrese el tamano de los arreglos (solo numeros positivos): ";
    cin >> n;
    cout << endl;
    }while(n<=0);
    
    int arreglo1[n];
    int arreglo2[n];
    int arreglo3[n];

    cout << "Ingrese los datos del primer arreglo: " << endl;
    Leer (n, arreglo1);

    cout << endl;

    cout << "Ingrese los datos del segundo arreglo: " << endl;
    Leer (n, arreglo2);

    cout << endl;

    Suma (arreglo1, arreglo2, n, arreglo3);

    Resultado (arreglo3, n);

    cout << endl << endl;

    return 0;
}

void Leer (int n, int arreglo[])
{
    int i;
    for (i=0; i<n; i++){
        cout << "Ingrese un numero positivo: ";
        cin >> arreglo[i];
    }

}

void Suma (int arreglo1[], int arreglo2[], int n, int arreglo3[])
{
    int i;
    for (i=0; i<n; i++){
        arreglo3[i] = arreglo1[i] + arreglo2[i];
    }
}

void Resultado(int arreglo3[], int n)
{
    int i;
    cout << "La suma de los elementos de los dos arreglos es: { ";
    for (i=0; i<n; i++){
        cout << arreglo3[i];
        if (i<n-1){
            cout << ", ";
        }else{ 
        cout << " ";}
    }
    cout << "}";
}