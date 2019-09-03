#include <stdio.h>
int figura (int h){
     int j;
     int i;
     for (i=1;i<=h;i++){
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int a=1;a<=h;a++){
        for (j=h-1;j>=a;j--)
        {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
 }
 int main()  
{  
    int h;
    printf("Cual es el numero que quieres");
    scanf("%i", & h); 
    figura(h);
    return 0 ;
}
    