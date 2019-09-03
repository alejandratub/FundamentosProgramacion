#include <stdio.h>

int main(){

int prod=0;
int imp1=0;
int resultado=0;
int imp2=0;
int imp3=0;

printf("ingresa el precio del producto: ");
scanf ("%d", &prod);

    if(prod<=20000){
        printf("Este producto no paga impuestos");
    }
    else if((prod>20000)&&(prod<=40000)){
        imp1=((prod-20000)*30)/100;
        resultado=prod+imp1;
        printf("El precio final de este producto es: %i ", resultado);
    }
         else if((prod>40000)&&(prod<=80000)){
             imp2=((prod-40000)*40)/100;
            resultado=prod+imp2+6000;
          printf("El precio final de este producto es: %i ",resultado);
    }
    else if(prod>80000){
        imp3=((prod-8000)*50)/100;
        resultado=prod+imp3+8000+6000;
        printf("El precio final de este producto es: %i ",resultado);
        }
}
