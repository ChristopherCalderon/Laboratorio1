#include <iostream>;
using namespace std;

//calculo de promedio de notas

void matriz (float[]);
float nota (float[]);

int main (void){
    int n;
    float array[5]={0};

//se piden la cantidad de alumnos
    cout<< "Por favor ingrese la cantidad de alumnos: ";
    cin>>n;

//se repetira de acuerdo al numero de alumnos
    for (int i = 0; i < n; i++)
    {
        int m= i+1;
        cout<< "Por favor ingrese los datos del alumno "<<m<<endl;
        matriz (array); //se ingresan las 5 notas del alumno

        float promedio=nota (array); //se promedian las notas
        cout<<"el promedio de notas del alumno "<< m<< " es "<<nota (array)<<endl;

        if (promedio>=6) //se determina si aprobo
        {
           cout<< "El alumno "<<m<<" aprobo"<< endl;
        } else
        {
            cout<< "El alumno "<<m<<" reprobo"<< endl;
        }
        
    }

    return 0;
}

void matriz (float vector[]) //ingreso de las notas de la matriz
{
    for (int i = 0; i < 5; i++)
    {
        int n= i+1;
        cout << "Por favor ingrese la nota numero "<<n<<" :";
        cin >> vector[i];
    }
    
}

float nota (float vector[]) //calculo del promedio de notas
{
   float p= 0,r=0;
    for (int i = 0; i < 5; i++)
    {
        r= (vector[i]*0.2);
        p+= r;
    }

    return p;
}