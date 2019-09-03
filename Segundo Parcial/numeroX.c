#include "numeroX.h"
#include <stdio.h>

char * arregloX(char * arr, int size )
{
    int x=0;
    printf ("¿Cuál es el numero que quiere borrar?: ");
    scanf ("%i", &x);
    char *resultado;
    resultado= new char [size];
  for (int i = 0; i < size; i++) 
    {
        if(arr[i]!=x)
        {
        resultado[i] = arr[i] ;
        }
        else 
        {
            resultado[i]=0;
        }
    } 
    return arr;
}
    

int main()
{
   char *elementos;
   int size =5;
   elementos=new char [size];
    elementos[0]='2';
    elementos[1]='5';
    elementos[2]='7';
    elementos[3]='6';
    elementos[4]='8';
   char * numeros ;
   numeros = new char [size];
   numeros = arregloX(elementos,size);
    for (int i =0 ;i<=size;i++)
    {
       printf("%c \n",numeros[i]);
    }
}