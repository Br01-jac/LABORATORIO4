#include "iostream"
#include "conio.h"

using namespace std;

int main(void)
{
int valor,n2;

cout<<"ingrese el numero mayor:"<< endl;
cin>>valor;
cout<<"ingrese el  numero menor:"<< endl;
cin>>n2;
if (valor % n2==0){
cout<<n2<<" es divisor de "<<valor<<endl;
}
else {
   cout<<n2<<" no es divisor de "<<valor<<endl;
}
getch ();
return 0;
}