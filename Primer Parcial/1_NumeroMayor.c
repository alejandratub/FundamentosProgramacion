#include <stdio.h>

void main(){

int num1=0;
int num2=0;
int num3=0;

printf ("Ingresa numero uno: ");
scanf ("%d", &num1);

printf ("Ingresa numero dos: ");
scanf ("%d", &num2);

printf ("Ingresa numero tres: ");
scanf ("%d", &num3);

    if((num1>num2)&&(num1>num3)){
        printf("numero uno es mayor\n");
    }
    
    if((num2>num1)&&(num2>num3)){
        printf("numero dos  es mayor\n");
    }
    
    if((num3>num1)&&(num3>num2)){
        printf("numero tres es mayor\n");
    }
    
}