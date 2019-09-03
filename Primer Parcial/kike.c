
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void *ejercicio1(int *n, int **m){

    m = new int*[*n];
    for (int x = 0; x < *n; x++) 
    {
        m[x] = new int[*n];
        for (int y = 0; y < *n; y++) 
        {
            printf("%i ", (*(*(m + x) + y) = (x + 1)));
        }
        printf("\n");
    }
    
    printf("\n");
    delete m;
    
}
void *ejercicio2(int *n, int **m){

    m = new int*[*n];
    for (int x = 0; x < *n; x++) 
    {
        m[x] = new int[*n];
        for (int y = 0; y < *n; y++) 
        {
            printf("%i ", (*(*(m + x) + y) = (y + 1)));
        }
        printf("\n");
        
    }
    
    printf("\n");
    
    delete m;
    
}
int *ejercicio3(int *n, int **m){

    m = new int*[*n];
    

    for (int x = 0; x < *n; x++) 
    {
        m[x] = new int[*n];
        for (int y = 0; y < *n; y++) 
        {
            *(*((m)+x)+y)=1;
             if(x>0)
            {
                for (int k = 0; k < x; k++) 
                {
                 *(*((m)+x)+k)=0 ; 
                }
            }
            printf("%i ", *(*((m)+x)+y));
            
        }
        printf("\n");
    }
    printf("\n");
    return *m;
    
}
int *ejercicio4(int *c,int *n, int **m){
     int **m3 = new int*[*n];
  
    for (int x = 0; x < *n; x++) 
    {
       m3[x] = new int[*c];
        for (int y = 0; y < *c; y++) 
        {

             *(*((m3)+x)+y)=*(*((m)+y)+x) ;
            printf("%i ", *(*((m3)+x)+y));
        }
        
        printf("\n"); 
    }
   
    delete m;
    

}
int *ejercicio5(int* arre , int size)
{
    int aux;
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
                aux=arre[i];
                arre[i]=arre[j];
                arre[j]=aux;
        }
        
    }
      
    return arre;
}
int *ejercicio6(int *rows,int *cols,int *min ,int *max){
  
    int **n = new int*[*rows];
    for(int x = 0; x < *rows; x++) 
    {
         n[x] = new int[*rows];
        for(int y = 0; y < *cols; y++) 
        {
            *(*((n)+x)+y)=rand () %(*max-*min+1) + *min;
            
            printf("%i ", *(*((n)+x)+y)); 
        }
        printf("\n");
    }
   return *n;
    

}
int *ejercicio7(int *rows,int *cols, int **m)
{
  int aux =0;
  int prom=0;
  int mayor=*(*((m)+0)+0);
  int menor=*(*((m)+0)+0);
    for (int x = 0; x < *rows; x++) 
    {
        
      for (int y = 0; y < *cols; y++) 
      {
        
        if (*(*((m)+y)+x) > mayor)
        {
          mayor=*(*((m)+y)+x);
        }
        if(*(*((m)+y)+x) < menor)
        {
          menor=*(*((m)+y)+x);
        }
        aux=*(*((m)+y)+x)+aux;
        
      }
        prom = aux / *cols;
         printf("la suma de la columna %i es = %i \n",x+1,aux);
         printf("el promedio de la %i es = %i \n",x+1,prom);
         printf("El mayor es %d\n", mayor);
         printf("El menor es %d\n", menor);
         printf("\n");
         aux = 0;
        mayor=*(*((m)+0)+0);
        menor=*(*((m)+0)+0);
    }
  
}
int main(){
    srand(time(NULL));
    int *a;
    a = new int;
    *a = 8;
    int **n = new int*[*a];
    for (int x = 0; x < *a; x++) 
    {
        n[x] = new int[*a];
    }
    ejercicio1(a, n);
    ejercicio2(a, n);
    
    
    
    ejercicio3(a, n);
    int *rows;
    rows = new int;
    *rows = 4;
    int *cols;
    cols = new int;
    *cols = 3;
    for(int x = 0; x < *rows; x++) 
    {
         n[x] = new int[*rows];
        for(int y = 0; y < *cols; y++) 
        {
            
            *(*((n)+x)+y)=1+rand()%9;
            printf("%i ", *(*((n)+x)+y)); 
        }
        printf("\n");
    }
   printf("\n");
   ejercicio4(rows,cols, n);
   
   
   int size = 2;
   int * unos;
   unos = new int[size];
   for (int i = 0; i<size;i++)
   {
       printf ("Dime un numero ");
       scanf ("%i",&unos[i]);
       
   }
  unos=ejercicio5(unos,size);
  
  
  
    for ( int i = 0; i < size; ++i)
    {
        printf("%i,", unos [i]);
        
    }
    printf("\n\n");
    int *max;
    max = new int;
    int *min;
    min = new int;
    printf ("Dime un numero MAXIMO ");
    scanf (" %d",max);
    printf ("Dime un numero MINIMO ");
    scanf (" %d",min);
    ejercicio6(rows,cols,min,max);
    printf("\n");

   *max =1000;
   *min =100;
   *rows = 3;
   *cols=3;
   int **w = new int*[*rows];
    for(int x = 0; x < *rows; x++) 
    {
         w[x] = new int[*rows];
        for(int y = 0; y < *cols; y++) 
        {
            *(*((w)+x)+y)=rand () %(*max-*min+1) + *min;
            
            printf("%i ", *(*((w)+x)+y)); 
        }
        printf("\n");
    }
    printf("--------------");
    printf("\n");
    ejercicio7(rows,cols,w);
    return 0;

}