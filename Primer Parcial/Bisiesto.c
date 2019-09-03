/*Para que sea bisiesto:
-cada 4 años
-cada 100 años se rompe la regla
-Cada 400 años se rompre la regla de los 100
- == sirve para comparar dos cosas
-= asigna */

#include <stdio.h>

void main() {

unsigned int anio=0;

printf("Ingrese el año: ");
scanf("%u",&anio);

if (anio%4==0)
{
    if(anio%100==0)
    {
        if(anio%400==0)
        {
            printf("sí es bisiesto");
        }
        else 
        {
            printf("no es bisiesto");
            
        }
        
    }
}
else
{
    printf("no es bisiesto")
    
}
}