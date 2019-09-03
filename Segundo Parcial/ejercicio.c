
#include <stdio.h>

char *arregloT(char *arr, int size)
{

    int j=0;
    char * mitad1;
    mitad1 = new char[size];
    char * mitad2;
    mitad2 = new char [size];
    if (size%3==0)
    {
    
     for (int i = 0; i < (size/3)*2; i++)
     {
         printf("La primera parte del arreglo es: ");
         mitad1[i]=arr[i];
         
         printf("%c \n",mitad1[i]);
     }
     for(int i=((size/3)*2); i<size; i++)
     {
         printf("La segunda mitad del arreglo es: ");
         mitad2[i]=arr[i];
         printf("%c \n",mitad2[i]);
         j++;
     }
}
     if(size%3!=0)
     {
         for(int i=0; i < ((size/3)*2)+1; i++)
         {
             printf("La primera mitad del arreglo es: ");
             mitad1[i]=arr[i];
             printf("%c \n",mitad1[i]);
         }
         for(int i=((size/3)*2)+1; i<size; i++)
         {
             printf("La segunda mitad del arreglo es: ");
             mitad2[j]=arr[i];
             printf("%c \n",mitad2[j]);
             j++;
         }
     }
    }

int main()
{
    char*letra;
    int size=6;
    letra=new char[size];
    letra[0]='A';
    letra[1]='B';
    letra[2]='C';
    letra[3]='D';
    letra[4]='E';
    letra[5]='F';
    arregloT(letra, size);
   
}
