#include <stdio.h>

void descifrar(char* string1,int numero)
{ int i=0;
   
    while(string1[i]!='\0')
    {
        string1[i]=string1[i]-numero;
        i++;
    }
    FILE* archivo;
    archivo = fopen("escritura.txt", "a+");
      printf("La frase descifrada es:\n%s",string1);
}
int main()
{
    size_t bytes = 1;
    int x;
    int maxSize = 255;
    char * linea = new char[maxSize];
    linea[maxSize-1] = '\0';
    FILE* archivo;
    archivo = fopen("escritura.txt", "a+");
   
    if(archivo != NULL)
    {
        while(true)
        {
            
             printf("introduce la variable: ");
             scanf("%d",&x);
            descifrar(linea,x);
            fprintf(archivo, "%s\n", linea);
            break;
        }
    }
    
    delete [] linea;
    fclose(archivo);
    return 0;
}