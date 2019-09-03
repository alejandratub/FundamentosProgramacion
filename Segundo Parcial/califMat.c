
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "califMat.h"


int main()
{
    srand(time(NULL));
    
    int num= rand()%100;
    
    printf("el numero aleatorio entre 0 y 100 es: %i", num);
    int r=20;
    int c=20;
    char matriz[20][20];
    
    for(int x=0; x<r; x++)
    {
        for(int y=0; y<c; y++)
        {
            matriz[x][y] = rand()%25+97; 
            
        }
    }
    printMatrixChar(matriz, r, c);
}