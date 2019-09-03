#include "arrayPointers.h"
#include <stdio.h>

int* fillWithOnes(int * arreglo, int size)
{
    for (int i = 0; i < size; ++i)
    {
        arreglo[i] = 1;
    }
    return arreglo;
}
int* duplicaArreglo(int*arreglo, int size)
{
    for (int i = 0; i < size; ++i)
    {
        arreglo[i] = arreglo[i] * 2 ;
    }
    return arreglo;
}

int main()
{
    int * unos;
    int size = 10;
    unos = new int[size];
    
    unos = fillWithOnes(unos, size);
    
    unos = duplicaArreglo(unos,size);
    
    for (int i = 0; i < size; ++i)
    {
        printf("%i ", unos[i]);
    }
    
    return 1;
}
