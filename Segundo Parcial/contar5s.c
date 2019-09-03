#include "contar5s.h"
#include <stdio.h>

int main()
{

    void contador5s()
    {
        int *num;
        num= new int;
        *num = 0;
        int *contador;
        contador=new int;
        *contador=0;
        
        while(*num>=0);
        {
            printf("Escribe un numero: \n");
            scanf("%i",&*num);
            if(*num==5)
            {
                *contador++;
            }
        }
    }
}