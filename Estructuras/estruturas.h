#ifndef PERSONAS
#define PERSONAS

#include<stdio.h>
#include<string>

using namespace std;

struct Persona
{
    string nombre;
    string aPaterno;
    string aMaterno;
    int edad;
    void printPersona()
    {
        printf("nombre %s \n",nombre.c_str());
        printf("Apellido paterno %s \n",aPaterno.c_str());
        printf("Apellido materno %s \n",aMaterno.c_str());
        printf("edad %i \n",edad);
    }
};

void reservaArregloPersonas(Persona** arr, int size);
void asignaPersonas(Persona* arr, int size, int pos, Persona p);

#endif
