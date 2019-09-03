#include "ejerciciosFinal.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void *ejercicio1(int *n, int **matriz1)
/*cada renglón se llena con el número de renglón que le corresponde*/
{
    matriz1 = new int*[*n];
    
    printf("\n");
    
    for (int x = 0; x < *n; x++) 
     {
        matriz1[x] = new int[*n];
        for (int y = 0; y < *n; y++)
        {
            printf("%i", (*(*(matriz1 + x) + y) + (x + 1)));
        }
        printf("\n");
    }
    printf("\n");
    
}
void *ejercicio2(int *n, int **matriz2)
/*cada columna se llena con el numero de columna que le corresponde*/
{
    matriz2 = new int*[*n];
    
    printf("\n");
    
    for (int x = 0; x < *n; x++)
    {
        matriz2[x] = new int[*n];
        for (int y = 0; y < *n; y++) 
        {
             printf("%i", (*(*(matriz2 + x)) + (y + 1)));
        }
        printf("\n");
    }
    printf("\n");
    
}
void *ejercicio3(int *n, int **matriz3)   
/*escalera de 0 y 1*/
{
    matriz3 = new int* [*n];
    int *b = new int (0);
     printf("\n");
    
    for (int x = 0; x < *n; x++) 
    {
        matriz3[x] = new int [*n];
        *b=x;
        for(int y = 0; y < *n; y++)
        {
            if(*b>0)
            {
            
             for(int z = 0; z <= *b - 1; z++)
                printf("%i", (*(*(matriz3 + x) + y) + (0)));
                y++;
        
        }
        *b=0;
        if(x<=y)
        {
             printf("%i", (*(*(matriz3 + x) + y) + (1)));
            
        }
    }
    printf("\n");

    }
}
void *ejercicio4(int *p, int *n, int **matriz4)
/*va de pxn a nxp*/
{
    printf("\n");
    int **mat = new int*[*p];
    matriz4 = new int*[*n];
    int *contador = new int(0);
     for(int x = 0; x < *p; x++)
     {
     matriz4[x] = new int[*p];
        for(int y = 0; y < *n; y++)
        {
        *contador = *contador + 1;
          printf("%i", *(*(matriz4 + x) + y) =(*contador));
            
        }
        printf("\n");
     }
     printf("\n");
     for(int x=0; x < *n; x++)
     {
         mat[x] = new int[*n];
         *contador = 1+ x;
         for(int y = 0; y < *p; y++)
         {
            printf("%i", *(*(mat + x) + y) = (*contador));
            *contador = *contador + *n;
         }
     
         printf("\n");
     }
     
    printf("\n");
}

void *ejercicio5(int *matriz5, int *n)
/*valores invertidos*/
{
    int *contador = new int(0);
    int *contador1 = new int(*n -1);
    printf("Original: [");
    while(*contador < *n)
    {
        printf("%i", *(matriz5 + *contador) = (*contador));
        *contador = *contador + 1;
    }
    printf("]");
    *contador = 0;
    printf("\nInvertido: [");
    while (*contador < *n)
    {
        printf("%i", *(matriz5 + *contador) = (*contador1));
        *contador = *contador + 1;
        *contador1 = *contador1 -1;
    }
      printf("]");
      printf("\n");
}
void *ejercicio6(int *m, int *n, int*max, int*min)
/*aleatorios entre el mínimo y el máximo*/
{
    printf("\n");
    srand(time(NULL));
    int **matriz6 = new int *[*m];
    
    printf("Ingrese el valor máximo: ");
    scanf("%i", &*max);
    printf("Ingrese el valor mínimo: ");
    scanf("%i", &*min);
    printf("\n");
        
        for(int x = 0; x < *m; x++)
        {
            matriz6[x] = new int [*n];
            for(int y = 0; y < *n; y++)
            {
                printf("%i  ", (*(*(matriz6 +  x) + y) = (rand()%(*max - *min) + (*min))));
            }
            printf("\n");
        }
        printf("\n");
    
}
int Range(int max, int min)
{
    int *different = new int (max-min);
    return (int) (((double)(*different+1)/RAND_MAX)* rand()+min);
}
void ejercicio7(int**matriz7, int *n, int *m)
/*numeros aleatorios entre 100 y 1000, suma, valor máximo, valor mínimo y promedio*/
  {
      srand(time(NULL));
      int *r = new int;
      int **matrix = new int *[*m];
      int *suma = new int(0);
      int *promedio = new int(0);
      int max = *(*((matriz7) +0) +0);
      int min = *(*((matriz7) +0) +0);


      for(int x = 0; x< *m; x++)
      {
          matriz7[x] = new int [*n];
          matrix[x] = new int[*n];
           
          for(int y = 0; y< *n; y++)
          {
              
              *r = Range(100, 1000);
              printf("%i  ", (*(*(matriz7 + x) + y)= (*r)));
              
              if (*(*((matriz7) +x) +y) > max)
              {
        
             max = *(*((matriz7) +x) +y);
              }
        if(*(*((matriz7) +x) +y) < min)
        {
        
          min = *(*((matriz7) +x) +y);
        }
        *suma=*suma+ *(*((matriz7) +x) +y);
        
      }
      
        *promedio = *suma / *n;
        

        printf("\n\n");
        printf("La suma del renglón %i es: %i \n", x+1, *suma);
        printf("El proimedio del renglón %i es: %i \n", x+1, *promedio);
        printf("El número máximo del renglón %i es: %i\n",x+1,max);
          printf("El número mínimo del renglón %i es: %i\n", x+1, min);
           max= *(*(matriz7+0)+0);
         min= *(*(matriz7+0)+0);
          *suma= 0;
         
        }
        
  }     
     
  
 /* int *ejercicio8(int **m, int *p, int *n)
  {
      int *contador = new int(0);
      int *contador2 = new int(0);
      int *contador3 = new int(0);
      int ejer = 6;
      int *mat2 = new int[*contador];
      int *mat3 = new int[ejer];
      
      for(int x = 0; x < *n; x++)
      {
          for(int y = 0; y<*p; y++)
          {
              *contador2 = *(*(m + x)+y);
              printf("%i", *contador2);
              mat3 = new int[ejer];
              while (*contador2 > 0)
              {
                  *contador3 = * contador2%10;
                  if(*contador3%2 == 0)
                  {
                      break;
                      
                  }
                  else if (*contador3 %2 > 0)
                  {
                      *(mat3 + *contador) = *contador3;
                      *contador = * contador + 1;
                      printf("%i", *contador3);
                      printf("\n");
                  }
                 *contador2 = *contador2/10;
              }
          }
      }
  }
*/

int main()
{

    int *a;
    a = new int(0);
    int *r = new int (0);
    int *contador = new int (0);
    int *max = new int (0);
    int *min = new int(0);
    int **m = new int*;
    int *n = new int(6);
    int *p = new int (5); 
    int **mat = new int*;
    int **matriz8 = new int *[*p];
    printf("¿Cuál es el valor de n?: ");
    scanf("%i", &*a);
    int *matriz = new int [*a];
    
    for(int x = 0; x < *n; x++)
    {
        mat[x]= new int [*n];
    }
   /* for(int x = 0; x < *n; x++)
    {
        matriz8[x] = new int[*n];
        for (int y = 0; y < *p; y++)
        {
            *r = Range(1, 100000);
            *(*(matriz8 + x) + y) = *r;
            printf("%i", *r);
        }
        printf("\n");
    }
        
   */
  
 
    ejercicio1(a,m);
    ejercicio2(a,m);  
    ejercicio3(a,m);
    ejercicio4(p,n,mat);
    ejercicio5(matriz,a);
    ejercicio6(n,p, max, min);
    ejercicio7(mat,n,p);
   /* ejercicio8(matriz8, p, n);*/

    
}
