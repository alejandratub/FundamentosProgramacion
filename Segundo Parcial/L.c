#include <stdio.h>
#include "L.h"

char * arregloLetras(char * arreglo, int size)
{
    int temporal=0;
    for (int i = 0; i < size; i+=2)
    {
        temporal= arreglo[i+1];
        arreglo[i+1] = arreglo[i];
        arreglo[i]=temporal;
        if(i=size)
        {
            arreglo[i]=arreglo[i];
        }
    }
    return arreglo ;
}
int main(){
    
    char *z;
   char *elementos;
   int size =5;
   elementos=new char [size];
    elementos[0]='A';
    elementos[1]='E';
    elementos[2]='I';
    elementos[3]='O';
    elementos[4]='U';
   char * letras ;
   letras = new char [size];
   letras = arregloLetras(elementos,size);
    for (int i =0 ;i<=size;i++)
    {
       printf("%c \n",letras[i]);
    }
       
}
 
    
