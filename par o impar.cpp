#include "iostream"
#include "conio.h"


using namespace std;

int main(void)
{
int numero;

cout<<"digite un numero: ";
cin>>numero;
if(numero%2==0){
    cout<<"El numero es par:";
}
else{ 
    cout<<"El numero es impar";
}
getch();
return 0;
}