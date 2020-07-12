#include <iostream>;
#include <string>;
#include <string.h>;
#include <cstring>;

const int longCad = 20;


using namespace std;

//Estructura del array
struct costoPorArticulo{
    char nombre[longCad + 1];
    int cantidad;
    float precio;
    float costo;
};

//Definicion de funciones
void llenar (costoPorArticulo[],int);
void calcular (costoPorArticulo[],int);
void desplegar (costoPorArticulo[],int);
float total (costoPorArticulo[],int);

//Main
int main (void){
    int n;

    cout<<endl;
    cout<<"Proyecto final:Procesamiento de factura de compra";
    cout<<endl;

    
    cout<<"Cuantos productos fueron comprados?: "; //Cantidad de productos comprados
    cin>>n;
    while(n <=0){
        cout << endl;
        cout << "La cantidad de productos no es valida, intente de nuevo." << endl << endl;

        cout << "Cuantos productos fueron comprados?: ";
        cin >> n;
    }
    cin.ignore(100, '\n');
    

//Llamado de funciones
    costoPorArticulo listado[n];
    
    llenar (listado,n);
    calcular (listado,n);
    desplegar (listado,n);
    

//Desplegar total a pagar
cout << "El total a pagar por su compra es: $" << total (listado, n);

    return 0;
}

//Funciones

//Funcion que lee los datos del arreglo 
void llenar (costoPorArticulo vector[],int x) 
{
    string cad;
for (int i = 0; i < x; i++)
{
    //Ingreso del nombre del producto
    cout<<"Ingrese el nombre del producto, la cantidad comprada y el precio del producto"<<endl;
    cout<<"Nombre del producto: ";
    getline(cin, cad, '\n');
        strncpy(vector[i].nombre, cad.c_str( ), longCad);
        vector[i].nombre[longCad]='\0';
    
    //Ingreso de la cantidad de unidades compradas
    cout<<"Cantidad de unidades compradas: ";
    cin>>vector[i].cantidad;
    while(vector[i].cantidad <=0){
        cout << endl;
        cout << "La cantidad de unidades no es valida, intente de nuevo." << endl << endl;

        cout << "Cantidad de unidades compradas: ";
        cin >> vector[i].cantidad;
    }

    //Precio por unidad
    cout<<"Precio por unidad: ";
    cin>>vector[i].precio;
    while(vector[i].precio <=0){
        cout << endl;
        cout << "Ese precio no es valido, intente de nuevo." << endl << endl;

        cout << "Precio por unidad: ";
        cin >> vector[i].precio;
    }
    cin.ignore(100, '\n');

}

}

//Funcion para calcular el costo total de cada articulo
void calcular (costoPorArticulo vector[],int x){ 
    for (int i = 0; i < x; i++)
    {
        vector[i].costo = vector[i].cantidad*vector[i].precio;
    }
    
}

//Funcion para desplegar el arreglo
void desplegar (costoPorArticulo vector[],int x){
    cout <<endl<< "Factura: " << endl;
    for (int i=0; i<x; i++){
       cout << "Nombre del articulo " << i+1 << ": " << vector[i].nombre << endl;
       cout << "Precio unitario de este articulo es: $" << vector[i].precio << endl;
       cout << "La cantidad de unidades compradas de este articulo es: " << vector[i].cantidad << endl;
       cout << "El costo total por el articulo es: $" << vector[i].costo << endl;

       cout << endl;
    }
}

//Funcion que muestra el costo total de la compra
float total (costoPorArticulo vector[], int x)
{
    float CostoTotal;

    for (int i=0; i<x; i++){
        CostoTotal += vector[i].costo;
    }

    return CostoTotal;
}

