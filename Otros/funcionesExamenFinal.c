#include "funcionesExamenFinal.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void printMatrixChar(int **matrix, int *r)
{
    matrix=new int *[*r];
    int *b= new int (0);
    int *a=new int(1);
    for(int x=0; x<*r; x++)
    {
        matrix[x]= new int [*r];
        for(int y=0; y<*r; y++)
        {
            *(*(matrix+x)+y)=0;
            if(y==0)
            {
                 *(*(matrix+x)+y)=1;
                 
            }
           if(y==(*r-1))
         
            {
             *(*(matrix+x)+y)=1;
            }
           if(x==0)
           {
             *(*(matrix+x)+y)=1;
           }
           if(x==(*r-1))
           {
               *(*(matrix+x)+y)=1;
           }
            *a=*a+1;
            
            printf("%i", matrix[x][y]);
        }
        printf("\n");
    }
    *b=*b+1;
            *a=1;
}
int Range(int max, int min)
{
    int *different = new int (max-min);
    return (int) (((double)(*different+1)/RAND_MAX)* rand()+min);
}

void printMatrixInt(int **matrix, int *r)
{
  
    int *suma=new int (0);
    int promedio=0;
  
    for (int x = 0; x < *r; x++) 
    {
        
      for (int y = 0; y < *r; y++) 
      {
        
        if (x == y)
        {
            *suma=*suma+  *(*(matrix +x) +y);
            
        }
        
      }
        promedio = *suma / *r;
    }
    
    printf("la suma  es:  %i \n",*suma);
    printf("el promedio  es: %i \n",promedio);
 
}
    
   

int main()
{
    srand(time(NULL));
    int *r= new int (6);
    int **m= new int*;
    int **matrix=new int *[*r];
    int **matrix2 = new int *[*r];
    int *max=new int(99);
    int *min=new int(10);
     printMatrixChar(m,r);
   
  
  
    for(int x = 0; x < *r; x++) 
    {
         matrix[x] = new int[*r];
        for(int y = 0; y < *r; y++) 
        {
            *(*((matrix)+x)+y)=rand () %(*max-*min+1) + *min;
            
            printf("%i ", *(*((matrix)+x)+y)); 
        }
        printf("\n");
    }
   
   
    printMatrixInt(m,r);
}