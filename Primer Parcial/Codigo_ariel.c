#include<stdio.h>

char bisiesto(short int anio)
{
    if(anio%4 == 0)
    {
        if(anio%100 == 0)
        {
            if(anio%400 == 0)
            {
                printf("sí es bisiesto");
                return 's';
            }
            else
            {
                printf("no es bisiesto");
                return 'n';
            }
        }
        else
        {
            printf("sí es bisiesto");
            return 's';
        }
    }
    else 
    {
        printf("no es bisiesto");
        return 'n';
    }
    
}


int calculoSalario(int horasTrabajadas)  
{
    int resultado;
    int hExtra;
 
    if(horasTrabajadas <= 50)
    {
        resultado = horasTrabajadas * 280;
        return resultado;
    }
    else
    {
        hExtra = horasTrabajadas-50;
        resultado = (hExtra * 350) + 14000;
        return resultado;
    }
}



int calculoImpuestos(int precioProducto)
{
    int precioFinal;
    
    if(precioProducto <= 20000)
    {
        precioFinal = precioProducto;
        return precioFinal;
    }
    else
    {
        if(20000 < precioProducto <= 40000)
        {
            precioFinal = ((precioProducto - 20000) * .30) + precioProducto;
            return precioFinal;
        }
        else
        {
            if(40000 < precioProducto <= 80000)
            {
                
            }
        }
    }


    
}

void repeticiones(int numRep)
{
    int contador = 0;
    while(contador < numRep)
    {
        printf("hoola");
        contador = contador + 1;
    }
}

int potencia(int num, int pot)
{
    int contador = 0;
    int res = 1;
    while(contador < pot)
    {
        res = res * num;
        contador = contador + 1;
    }
    return res;
}

int factorial(int num)
{
    int res = 1;
    
    while(num > 0)
    {
        res = res*num;       
        num = num - 1;
    }
    return res;
}

int main()
{
    
    printf("el factorial de 5 es %i", factorial(5));
    
    int precioFinal = calculoImpuestos(33000);
    
    printf("el precio final es: %i ", precioFinal);
    
    repeticiones(10);
    
    printf("la potencia de 8 a la 5 es %i", potencia(8,5));
    
    return 1;
}

