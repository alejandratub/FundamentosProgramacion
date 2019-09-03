
#include <studio.h>

void main()

int prod=0;
int imp1;
int resultado;
int imp2;
int imp3;

printf("ingresa el precio del producto: ");
scanf ("%d", &prod);

    if(prod<20000){
        printf("Este producto no paga impuestos")
    }
    if((prod>=20000)&&(prod<40000)){
        imp1=prod-20000;
        imp1*.3;
        resultado=prod+imp1;
        return resultado;
        printf("El precio final de este producto es: %i ", resultado)
    }
    if((prod>=40000)&&(prod<80000)){
        imp2=prod-40000;
        imp2*.4;
        resultado=prod+imp2+6000;
        return resultado;
        printf("El precio final de este producto es: %i ",resultado)
    }
    else(prod>=80000)
        imp3=prod-8000;
        imp3*.5;
        resultado=prod+imp3+8000+6000;
        return resultado;
        printf("El precio final de este producto es: %i ",resultado)
        }
    }
