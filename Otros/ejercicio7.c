int Range(int max, int min)
{
    int *different = new int (max-min);
    return (int) (((double)(*different+1)/RAND_MAX)* rand()+min);
}
void ejercicio7(int**matriz7, int *n, int *m)
/*numeros aleatorios entre 100 y 1000, suma, valor máximo, valor mínimo y promedio*/
  {
      srand(time(NULL));
      int *suma= new int (0);
      int *promedio = new int (0);
      int *r = new int;
      int **matrix = new int *[*m];
 

      for(int x = 0; x< *m; x++)
      {
          matriz7[x] = new int [*n];
          matrix[x] = new int[*n];
           
          for(int y = 0; y< *n; y++)
          {
              
              *r = Range(100, 1000);
              printf("%i  ", (*(*(matriz7 + x) + y)= (*r)));
             
        }
        /*int suma;
        for(int fila=0; fila< *n; fila++)
        {
            suma=0;
            for(int columna=0; columna<*m; columna++)
            {
                suma+=matriz7[x][y];
            }
            vertical[x]=suma;
            printf("%i", vertical[x]);
        }*/
         printf("\n");
          *suma= *suma + *matriz7[x];
         *promedio= *suma/ (*n);
       
      }
      printf("La suma de la columna es: %d\n", *suma);
         printf("El promedio es: %i\n", *promedio); 
       /*for(int x=0; x< *m; x++)
        {
         *suma=0;
        for(int y=0; y< *n; y++)
        {
            *suma=*suma + *matriz7[x];
            
        }
        *sumas=*suma;
        }
        for(int i= 0; i<*n; i++)
        {
            printf("%d \n", *sumas);
        }*/
  
  
  

      
          
      
      
     /* for(int i=0; i<*n;i++)
        {
            
          printf("La suma de la columna es: %d\n", *suma);
         printf("El promedio es: %i\n", *promedio); 
         
        }*/
        
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
  
 
   // ejercicio1(a,m);
    //ejercicio2(a,m);  
    //ejercicio3(a,m);
    //ejercicio4(p,n,mat);
    //ejercicio5(matriz,a);
    //ejercicio6(n,p, max, min);
    ejercicio7(mat,n,p);
   /* ejercicio8(matriz8, p, n);*/

    
}