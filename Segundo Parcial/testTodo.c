#include "arreglos.h"
#include <stdio.h>
int main()
{
    int size;
    printf("de qué tamaño quieres el arreglo: \n");
    scanf("%i", &size);
    
    int a[size];
    
    for (int i = 0; i < size; i++)
    {
        printf("escribe el valor: \n");
        scanf("%i", &a[i]);
    }
    
    int sizeA;
    int sizeB;
    
    printf("de qué tamaño será el primer arreglo: \n");
    scanf("%i", &sizeA);
    for (int i = 0; i < sizeA; i++)
    {
        printf("escribe el valor: \n");
        scanf("%i", &a[i]);
    }
    
    printf("de qué tamaño será el segundo arreglo: \n");
    scanf("%i", &sizeB);
    for (int i = 0; i < sizeB; i++)
    {
        printf("escribe el valor: \n");
        scanf("%i", &b[i]);
    }
    
    int a[sizeA];
    int b[sizeB];
    
    multiplicaCruzada(a, b, sizeA, sizeB);
    imprimeNprimeros(a,5,size);
    imprimeNultimos(a,5,size);
    mayorArreglo(a,size);
    
    
    return 0;
}