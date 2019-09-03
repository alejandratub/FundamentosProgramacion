#include  "calculadora.h"
#include <math.h>

float suma(float a, float b)
{
    return a+b;
}
double raizCuadrada(double numero)
{
   return sqrt(numero);
}
double potencia(double numero, double exponente)
{
    return pow(numero, exponente);
}
int factorial(int num)
{
    int res = 1;
    
    while(num > 0)
    {
        res = res*num;       
        num = num - 1;
    }
    return res;
}
