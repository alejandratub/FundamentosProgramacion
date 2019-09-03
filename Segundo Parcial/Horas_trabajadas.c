#include<stdio.h>

int salario (int horasTrabajadas)
{
    int resultado;
    int hExtra;
    if(horasTrabajadas <=50)
    {
        resultado=horasTrabajadas*280;
        return resultado;
        
    }
    else
    {
        
       hExtra=horasTrabajadas-50;
       resultado=(hExtra*350) + 14000;
       return resultado;
    }
}
int main()
{
    int horasTrabajadas =52;
    int temporal= salario(horasTrabajadas);
    
    printf("tu salario por %i horas trabajadas es: %i ", horasTrabajadas, temporal);
    
    return 1;
}

