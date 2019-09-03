#include<stdio.h>
int pares(int n){
    int cache=0;
    for (int i =2;i<=n;i=i+1)
    {
        if (i%2 == 0){
            cache=cache+1
        }
    }
    printf("Hay solo %i pares  ",cache);
    
}

void asteriscos (int num ){
    for (int i=1;i>=num;a++){
        printf("*");
    }
    
}
int main (){
    primo(3);
    int n;
    printf("Cual es el numero  ");
    scanf("%i", & n);
    pares (n);
    asteriscos(6);
    
}