#include <stdio.h>
int main(){
int cache = 0;
int num;

    printf("Ingrese un numero: ");
    scanf("%i", &num);

    
    for(int i=num; i>0; i=i-1)
    {
        if(num%i==0){
            cache++;
        }
        else
        {
            cache=cache;
        }
    }
    if (cache >2){
        printf("El numero %i no es primo",num);
        return 'n';
    }
    if (cache==2){
        printf("El numero %i es primo", num);
        return 's';
    }
}
        