#include <iostream>;
using namespace std;
int main(){
    //Calculo de salario mensual de los empleados
    int e,hn,he,h1,h2,st,sr,e2;

    cout<< "Por favor ingrese el numero de empleados: ";
    cin>>e;

    for (size_t i = 1; i <= e; i=i+1)
    {
        //Horas normales
        e2=i;
        
        cout<< "Por favor ingrese las horas normales empleado numero "<<e2<<": ";
        cin>>hn;
        
        //Horas extras
        cout<< "Por favor ingrese las horas extras empleado numero "<<e2<<": ";
        cin>>he;

        //Salario total
        st=(hn*1.75)+(he*2.5);

        cout<<"El salario total del empleado numero "<<e2<<" es: "<<st;

        //Salario real
        sr=st-(st*0.04)-(st*0.0625);
        if (sr>500)
        {
            sr=sr-(st*0.1);
        }
        
        cout<<"\nEl salario real del empleado numero "<<e2<<" es: "<<sr<<"\n";




    }
    

    return 0;
}