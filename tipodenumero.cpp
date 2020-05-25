#include "iostream"
#include "stdlib.h"
using namespace std;

int main(void)

{
int valor;

cout<<"digite un numero: ";
cin>> valor;

if(valor>0)
{
    cout<<"El valor es positivo"<<endl;
    }


    else if(valor<0)
    {
        cout<<"El valor es negativo"<<endl;
    }
    else {
       cout<<"El valor es cero"<<endl;
    }








    system("PAUSE");
    return 0;
}