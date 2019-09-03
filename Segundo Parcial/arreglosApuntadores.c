#include <stdio.h>

   void arregloElementos(int*arr, int &size)
   {
       for(int i =0; i<size; ++i)
       {
           arr[i]= i+1;
       }
   }
int main()
{
    int * elementos;
    int size = 10;
    elementos = new int[size];
    
     elementos = arregloElementos(elementos, size);
     for (int i=0; i<size; ++i)
     {
         printf("%i", elementos[i]);
     }
    
    return 0;
}
