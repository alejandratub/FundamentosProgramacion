/*  Permite leer del usuario diferentes líneas
    y las guarda en un archivo de texto
    deja de leer cuando el usuario escribe la
    palabra -- fin --
*/

#include<stdio.h>

bool compare(char* str1, char* str2)
{
    int cont=0; 
    while((str1[cont] != 0) && (str1[cont] != '\0'))
    {
        if(str1[cont] != str2[cont])
            return false;
        cont++;
    }
    return true;
}

int main()
{
    size_t bytes = 1;
    int maxSize = 255;
    char * linea = new char[maxSize];
    linea[maxSize-1] = '\0';
    FILE* archivo;
    archivo = fopen("escritura.txt", "a+");
    
    if(archivo != NULL)
    {
        while(true)
        {
            getline(&linea, &bytes, stdin);
            if(compare(linea, "fin\n"))
                break;    
            fprintf(archivo, "%s", linea);
        }
    }
    
    delete [] linea;
    fclose(archivo);
    return 0;
}