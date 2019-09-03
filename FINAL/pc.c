#include <stdio.h>

void *primoCircular(int num, int residuo)
{
    for(int i= num; num>0; --num)
    {
        residuo=num%10;
        int primo(residuo)
{

    int divisor = 1;
    int contador = 0;

    while(divisor <= residuo)
    {
        if(residuo % divisor == 0)
        {
          divisor = divisor + 1;
          contador = contador + 1;

        }
        else
        {
            divisor = divisor + 1;
        }


    }
        if(contador == 2) 
            {
                printf("El numero %i es primo\n", residuo);
                return 's';
            }
        else
            {
                printf("El numero %i no es primo\n", residuo);
                return 'n';
            }
}

int primo2(residuo)
{
  
    int divisor = 1;
    int contador = 0;

    while(divisor <= residuo)
    {
        if(residuo % divisor == 0)
        {
          divisor = divisor + 1;
          contador = contador + 1;
        }
        else
        {
            divisor = divisor + 1;
        }
    }
   
    return contador;
}

int main()
{
    primo(25);


    int num = 197;
    int x = primo2(num);
    if(x == 2) 
        {
            printf("El numero %i es primo\n", num);
            return 's';
        }
    else
        {
            printf("El numero %i no es primo\n", num);
            return 'n';
        }
}

    }
}
