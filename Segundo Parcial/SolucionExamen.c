#include<stdio.h>
char esPrimo(int num)
{
    int contDivisores = 0; 
    
    for(int i = num; i >0; i=i-1)
    {
        if(num%i == 0)
        {
            contDivisores = contDivisores + 1;
        }
    }
    
    if(contDivisores == 2)
    {
        printf("sí es primo");
        return 's';
    }
    else
    {
        printf("no es primo");
        return 'n';
    }
}
int cuatosPrimos()
{
    int contador=0;
    
    for(int i=3;i<=1000; i=i+1)
    {
        if(esPrimo(i)=='s')
        {
            contador=contador + 1;
            
        }
    }
    return contador;
}
int sumaPares(int n)
{
    int suma=0;
    for(int i=2; i<n; i=i+1)
    {
        if(i%2==0)
        {
            suma=suma+i;
            
        }
    }
    return suma;
}
string aplicacionReglas(string marca, string color, string frenos, string potencia)
{
    if(marca== "crysler")
    {
        if(frenos == "tambor")
        {
            if(potencia=="alta")
            { 
                if(color =="rojo")
                {
                    return "regular";
                }
        }
    }
}
}
int main()
{
     printf("Hay %i primos entre el 3 y el 1000 \n",cuantosPrimos());
     printf("la suma de los pares entre 2 y 100 es; %i \n", sumaPares(100));
    
    int contador=0;
    
    printf("el valor del contador es %i \n", contador);
    printf("aplicando posIncremento el contador es %i \n", contador++);
    printf("aplicando el preIncremeto vale %i \n", ++contador);
    printf("aplicando el tradicional i=i+1 vale %i \n", contador=contador+1);
    printf("con acumulador de 5 %i \n", contador=+5);
    
    aplicacionReglas("crysler","tambor","alta","rojo");
    
     return 1;
}