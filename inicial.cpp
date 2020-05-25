#include "iostream"
#include "conio.h"
#include "string.h"
using namespace std;

int main(void)
{
 char texto[25];
 cout<<"introduce una palabra: ";
 cin>>texto;
 int contar=strlen(texto);
 if(texto[0]==texto[contar-1])
 {
     cout<<"La palabra tiene la misma letra al inicio y al final"<<endl;
 }
else {
       cout<<"La palabra no tiene la misma letra al inicio y al final"<<endl;
 }

    getch();
    return 0;
}