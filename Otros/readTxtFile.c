#include<stdio.h>

int main()
{
    int maxSize = 255;
    FILE * archivo;
    char * linea = new char[maxSize];
    int cont=0;
    archivo = fopen("escritura.txt", "r");
    
    if(archivo != NULL)
    {
        while(fgets(linea, maxSize, archivo)!= NULL)
        {
            cont++;
            printf("%s", linea);
        }
    }
    
    delete [] linea;
    fclose(archivo);
    
    return 0;
}