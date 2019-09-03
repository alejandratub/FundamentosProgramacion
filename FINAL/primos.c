#include <stdio.h> 

int primo(int num)
{

    int divisor = 1;
    int contador = 0;

    while(divisor <= num)
    {
        if(num % divisor == 0)
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
                printf("El numero %i es primo\n", num);
                return 's';
            }
        else
            {
                printf("El numero %i no es primo\n", num);
                return 'n';
            }
}

int primo2(int num)
{
  
    int divisor = 1;
    int contador = 0;

    while(divisor <= num)
    {
        if(num % divisor == 0)
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


    int num = 9;
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
