#include<stdio.h>

int potencia(int num, int pot)
{
    int contador = 0;
    int res = 1;
    while(contador < pot)
    {
        res = res * num;
        contador = contador + 1;
    }
    return res;
}


int main()
{
    
    printf("la potencia de 8 a la 5 es %i", potencia(8,5));
    
    return 1;
}

