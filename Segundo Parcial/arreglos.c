#include"arreglos.h"
#include<string>
#include<stdio.h>

void inicicializaArreglo()
{
    float califs[32];
    
    califs[0] = 10;
    califs[1] = 10;
    califs[2] = 10;
    califs[3] = 10;
    califs[4] = 10;
    /*
    //string nomsMascota[]{"dala", "peluzza", "tacos"};
    */
}

void imprimeNprimeros(int a[], int n, int &size)
{
    if(n>size)
    {
        printf("n es más grande que el arreglo \n");
        n = size;
    }
    for (int i = 0; i < n; ++i) 
    {
        printf("%i", a[i]);
        printf(" ");
    }
}

int mayorArreglo(int a[], int &size)
{
    int mayor = a[0];
    for (int i = 0; i < size; ++i) 
    {
        if(a[i] > mayor)
        {
            mayor = a[i];
        }
    }
    return mayor;
}


void multiplicaCruzada(int a[], int b[], int &sizeA, int &sizeB)
{
    if(sizeA != sizeB)
    {
        printf("los arreglos son de diferente tamaño");
        //return a; 
    }
    else
    {
        int c[sizeA];
        int j = sizeA - 1;
        for (int i = 0; i < sizeA; i++)
        {
            c[i] = a[i] * b[j];
        }
        //return c;
    }
}

int main()
{
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
    
    return 0;
}