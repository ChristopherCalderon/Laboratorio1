#include <iostream>;
using namespace std;
float promedio (float[]);
float menor (float[],float);
float mayor (float[],float);
//Promedio de estatura
int main (){
    float vector[25]={0};
    int n,m;
    float media;

    int i;
    for (i=0; i<25; i++){ //Se llena el arreglo
        n= i+1;
        cout << "Por favor ingrese la estatura del niño numero "<<n<<" :";
        cin >> vector[i];
    }

    media= promedio(vector); //calculo del promedio de la estatura


    cout << "El promedio de estaturas es: "<< media<< endl;


    menor(vector,media);//comparacion de estaturas individuales con el promedio
    cout <<"la cantidad de alumnos que miden menos que la media es: "<<menor(vector, media)<<endl;

    cout <<"la cantidad de alumnos que miden mas que la media es: "<<mayor(vector, media)<<endl;

    return 0;
}

float promedio (float array[]) //Calculo del promedio
{
    float suma=0,med;   
    for (int i = 0; i < 25; i++)
    {

        suma+= array[i];
    }  
    med = suma/25;
    return med;
}


float menor (float array[],float mediaaa) //Comparacion si es menor
{
    int cnt1=0,i;
 for (i = 0; i < 25; i++)
    {
        
        if (array[i]<mediaaa)
        {
            cnt1=cnt1+1;        
        }         }
    return cnt1;
}

float mayor (float array[],float mediaaa) //comparacion si es mayor
{
    int cnt2=0,i;
    for (i = 0; i < 25; i++)
    {
        
        if (array[i]>mediaaa)
        {
            cnt2=cnt2+1;            
        }         }
    return cnt2;
}