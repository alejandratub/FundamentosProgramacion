#include <stdio.h>
int main(){
    int num;

    printf("Ingrese un numero: ");
    scanf("%i",&num);
     
    
    int divider = 0;
     for(int i = num-1; i > 0; i=i-1)
    {
        if(num % i == 0)
        {
            divider = divider + i;
        }
    }
    if(divider == num)
    {
        printf("El numero %i es perfecto", num);
        return 's';
    }
    else 
    {
        
    printf("El numero %i no es perfecto",num);
    return 'n';
    }

    }
