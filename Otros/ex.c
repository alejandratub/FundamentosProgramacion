
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numPrim(int *num){
    int cache = 0;
    int count = 1;
    {
    while (count <= *num){
        if(*num% count == 0){
            cache++;
        }else{
            cache = cache;
        }
        count++;
        }
    } if (cache > 2){
        return 0;
    } else if (cache == 2){
        return *num;
    }
}

int Range(int min, int max){
    int *diff = new int(max-min);
    return (int) (((double)(*diff+1)/RAND_MAX) * rand() + min);
}


void *ejercicio1(int *n, int **m){
    m = new int*[*n];
    
    printf("\nEjercicio 1:\n\n");
    
    for (int x = 0; x < *n; x++) {
        m[x] = new int[*n];
        for (int y = 0; y < *n; y++) {
            printf("%i", (*(*(m + x) + y) = (x + 1)));
        }
        printf("\n");
    }
    printf("\n");
    return 0;
    
}

void *ejercicio2(int *n, int **m){
    m = new int*[*n];
    
    printf("Ejercicio 2:\n\n");
    
    for (int x = 0; x < *n; x++) {
        m[x] = new int[*n];
        for (int y = 0; y < *n; y++) {
            printf("%i", (*(*(m + x) + y) = (y + 1))); /*Es igual a m[x][y] = y + 1*/
        }
        printf("\n");
    }
    printf("\n");
}

void *ejercicio3(int *n, int **m){
    m = new int*[*n];
    int *count = new int(0);
    printf("Ejercicio 3:\n\n");
    
        for (int x = 0; x < *n; x++) {
        m[x] = new int[*n];
        *count = x;
        for (int y = 0; y < *n; y++) {
            if(*count > 0){
                for(int z = 0; z <= *count - 1; z++)
                printf("%i", (*(*(m + x) + y) = (0)));
                y++;
            }
            *count = 0;
            if(x <= y){
            printf("%i", (*(*(m + x) + y) = (1)));
            }
        }
        printf("\n");
    }
    printf("\n");
}

void *ejercicio4(int **m2, int *p, int *n){
    int **m3 = new int*[*p];
    printf("Ejercicio 4:\n\n");
    
        m2 = new int*[*n];
        int *count = new int(0);
        for (int x = 0; x < *p; x++) {
            m2[x] = new int[*p];
            for (int y = 0; y < *n; y++) {
                *count = *count + 1;
                printf("%i ", *(*(m2 + x) + y) = (*count));
            }
            printf("\n");
    }
    printf("\n");
        for (int x = 0; x < *n; x++) {
            m3[x] = new int[*n];
            *count = 1 + x;
            for (int y = 0; y < *p; y++) {
                printf("%i ", *(*(m3 + x) + y) = (*count));
                *count = *count + *n;
                
            }
            printf("\n");
    }
}

void ejercicio5(int *array, int *size){
    int *count = new int(0);
    int *count2 = new int(*size - 1);
    printf("Ejercicio 5:\n\nOriginal: [ ");
    while (*count < *size){
        printf("%i ", *(array + *count) = (*count));
        *count = *count + 1;
    }
    printf("]");
    *count = 0;
    printf("\nInvertido: [ ");
    while (*count < *size){
        printf("%i ", *(array + *count) = (*count2));
        *count = *count + 1;
        *count2 = *count2 - 1;
    }
    printf("]\n\n");
}

void ejercicio6(int *m, int *n, int *max, int *min){
    srand(time(NULL));
    printf("Ejercicio 6\n\n");
    int **matriz = new int*[*m];
    
    printf("Dime un valor maximo: ");
    scanf("%i", &*max);
    printf("Dime un valor minimo: ");
    scanf("%i", &*min);
    
        for (int x = 0; x < *m; x++) {
        matriz[x] = new int[*n];
        for (int y = 0; y < *n; y++) {
            printf("%i ", (*(*(matriz + x) + y) = (rand()%(*max - *min) + (*min))));
        }
        printf("\n");
    }
    printf("\n\n");

}

void ejercicio7(int **matriz, int *m, int *n){
    srand(time(NULL));
    int *r = new int;
    printf("Ejercicio 7\n\n");
    int **matriz2 = new int*[*m];
    
        for (int x = 0; x < *m; x++) {
        matriz[x] = new int[*n];
        matriz2[x] = new int[*n];
        for (int y = 0; y < *n; y++) {
            *r = Range(100, 1000);
            printf("%i ", (*(*(matriz + x) + y) = (*r)));
            
        }
        printf("\n");
    }
    printf("\n\n");
}

int *ejercicio8(int **m, int *p, int *n){
    int *count = new int(0);
    int *cache = new int(0);
    int *cache2 = new int(0);
    int lol = 6;
    printf("Ejercicio 8\n\n");
    int *array = new int[*count];
    int *arrayCache = new int[lol];
        
        for (int x = 0; x < *n; x++) {
            for (int y = 0; y < *p; y++) {
                *cache = *(*(m + x) + y);
                printf("%i\n", *cache);
                arrayCache = new int[lol];
                while (*cache > 0){
                    *cache2 = *cache%10;
                    if (*cache2%2 == 0){
                        break;
                    }else if(*cache2%2 > 0){
                        *(arrayCache + *count) = *cache2; 
                        *count = *count + 1;
                        printf("%i ", *cache2);
                        printf("\n");
                    }*cache = *cache/10;
                }
            }
        }
            
    return 1;
}

int main(){

    int *a;
    a = new int(0);
    int *r = new int(0);
    int *count = new int(0);
    int *max = new int(0);
    int *min = new int(0);
    int **m = new int*;
    int *p = new int(5);
    int *n = new int(4);
    int **m2 = new int*;
    int **matriz8 = new int*[*p];
    printf("Dime el valor de n: ");
    scanf("%i", &*a);
    int *array = new int[*a];
    
    for (int x = 0; x < *n; x++) {
        m2[x] = new int[*n];
    }
    
        for (int x = 0; x < *n; x++) {/*Matriz para ejercicio 8*/
        matriz8[x] = new int[*n];
            for (int y = 0; y < *p; y++) {
                *r = Range(1, 100000);
                *(*(matriz8 + x) + y) = *r;
                printf("%i ", *r);
            }printf("\n");
        }
    ejercicio1(a, m);
    ejercicio2(a, m);
    ejercicio3(a, m);
    ejercicio4(m2, p, n);
    ejercicio5(array, a);
    ejercicio6(n, p, max, min);
    ejercicio7(m2, n, p);
    ejercicio8(matriz8, p, n);
}