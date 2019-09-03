#include"estructuras.h"
#include<stdlib.h>

void reservaArregloPersonas(Persona** arr, int size)
{
    *arr = new Persona[size];
}

void asignaPersonas(Persona* arr, int size, int pos, Persona p)
{
    if(pos >= size)
    {
        printf("incorrecto");
    }
    else
    {
        arr[pos] = p;
    }
}


int main()
{
    Persona a;
    a.nombre = "Antoin";
    a.aPaterno = "Francois";
    a.aMaterno = "Renault";
    a.edad = 30;
    
    Persona* arregloPersonas;
    reservaArregloPersonas(&arregloPersonas, 5);
    asignaPersonas(arregloPersonas, 5, 0, a);
    asignaPersonas(arregloPersonas, 5, 1, a);
    asignaPersonas(arregloPersonas, 5, 2, a);
    asignaPersonas(arregloPersonas, 5, 3, a);
    asignaPersonas(arregloPersonas, 5, 4, a);
    
    for(int i=0; i<5; i++)
        arregloPersonas[i].printPersona();
    
    return 0;
}
