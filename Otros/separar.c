#include <stdio.h>

int main()
{
  
    int residuo=0;
    int num=197;
    int acumulador=10;
    int resta=0;
 
    {
        residuo=(num%acumulador);
        printf("el numero es %i\n",residuo);
      
        acumulador= acumulador*10;
        
    }

}
