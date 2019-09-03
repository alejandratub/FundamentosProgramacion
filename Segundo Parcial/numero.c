#include <stdio.h>

int producto(int numero)
{
    int a;
    int b;
    int c;
    int res;
    if(numero<100)
    {
         a = numero%10;
         b = ((numero%100)-a)/10;
         res=a*b;
         return res;
    }
    if(numero>999)
    {
         a = numero%10;
         b = ((numero%100)-a)/10;
         c=((numero%1000)-numero%100)/100;
         numero=((numero%10000)-numero%1000)/1000;
         res=a*b*c*numero;
         return res; 
    }
    else
    {
         a = numero%10;
         b = ((numero%100)-a)/10;
        numero=((numero%1000)-numero%100)/100;
        res=a*b*numero;
        return res;
    }
    }
int mayor(int numero)
{
    int a;
    int b;
    int c;
    int res;
    
    if(numero<100)
    {
         a = numero%10;
         b = ((numero%100)-a)/10;
         if(a>b)
         {
             printf("El mayor es: %i \n",a);
             return a;
         }
         else
         {
             printf("El mayor es: %i \n",b);
             return b;
         }
         return res;
    }
    if(numero>999)
    {
         a = numero%10;
         b = ((numero%100)-a)/10;
         c=((numero%1000)-numero%100)/100;
         numero=((numero%10000)-numero%1000)/1000;
          
         if ((a>b) && (a>c) && (a>numero))
         {
            printf("El mayor es: %i \n",a);
             return a; 
         }
         if ((b>a) && (b>c) && (b>numero))
         {
            printf("El mayor es: %i \n",b);
             return b;
         } 
         if ((c>a) && (c>b) && (c>numero))
         {
             printf("El mayor es: %i \n",c);
             return c;
         }
         else
         {
             printf ("El mayor es: %i \n", numero);
             return numero;
         }
    }
    else
    {
         a = numero%10;
         b = ((numero%100)-a)/10;
        numero=((numero%1000)-numero%100)/100;
        if((a>b)&&(a>numero))
        {
            printf ("El mayor es: %i \n", a);
            return a;
        
        }
        if ((b>a)&&(b>numero))
        {
            printf("El mayor es: %i \n",b);
            return b;
        }
        else 
        {
            printf("El mayor es: %i \n", numero);
        }
    }
    }

int main()
{
    printf("La multiplicación es: %i \n", producto(768));
    mayor(98);
    return 1;
    
}
