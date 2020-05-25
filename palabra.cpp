#include "iostream"
#include "conio.h"
#include "string.h"
using namespace std;
int main(void)
{
char palabra[10];
int longitud=0,tipo=10,tipo2;
char efecto[]="";

cout<<"Digite una palabra: ";
gets(efecto);
longitud= strlen(efecto);

if(efecto>palabra){
    cout<<"la palabra "<<efecto<< " es mayor al limite de 10 caracteres y ";
}
else
{
    cout<<"la palabra "<<efecto<<" es menor al limite de 10 caracteres y ";
}


if(longitud%2==0){
    cout<<"la palabra es par, ";
}
else{ 
    cout<<"la palabra  es impar,";
}
cout<<"ademas contiene "<<longitud<<" caracteres";





    getch();
    return 0;
}