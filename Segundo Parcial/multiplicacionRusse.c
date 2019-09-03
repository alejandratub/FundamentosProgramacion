#include <stdio.h>

int multiplicacionRusse()
{
int divisor;
int dividendo=1;
int suma=0;
int contador=0;
int final=0;
int res;

printf("Escriba el divisor:\n");
scanf("%i", &divisor);

printf("Escriba el dividendo: \n");
scanf("%i", &dividendo); 
 res=dividendo*2;
for(int i=divisor; i>=0; i--)
{
    i=i/2;
    dividendo=dividendo*2;
    if(!(i % 2 ))
    {
       suma= (suma+dividendo);
       
    }
     
}
final=suma-res;
printf("La suma es: %i \n", final);
return final;
}
 int main()
 {
     multiplicacionRusse();
     return 0;
 }
