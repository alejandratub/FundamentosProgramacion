#include <stdio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int Range(int max, int min)
{
    int *different = new int (max-min);
    return (int) (((double)(*different+1)/RAND_MAX)* rand()+min);
}
int *ejercicio8(int **m, int *p, int *n)
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
    for(int x = 0; x < *n; x++)
    {
        matriz8[x] = new int[*n];
        for (int y = 0; y < *p; y++)
        {
            *r = Range(1, 100000);
            *(*(matriz8 + x) + y) = *r;
            printf("%i  ", *r);
        }
        printf("\n");
    }
        
    ejercicio8(matriz8, p, n);

    
}


    
