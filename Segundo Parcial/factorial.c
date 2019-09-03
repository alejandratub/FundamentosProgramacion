#include<stdio.h>
int factorial(int num)
{
    int contador=0;
    int res=1;
    while(contador<num)
    {
        contador= contador +1;
        res=contador * res;
        
    }
    return res;
}
int main()
{
    printf("El factorial es: %i",factorial(10));
    return 1;
}
