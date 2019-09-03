#include "op.h"
#include <stdio.h>

int *opcional(int *arr, int size, int x){

    int *arrb;
    int count = 0;
    int count2 = 0;
    int temp = 0;
    arrb = new int[count];
    
    for (int i = 1; i <= size; i++) {
        if (arr[i] == x) {
            i++;
            temp++;
        }else{
            arrb[i] = arr[i];
    
        }
        count2 = i;
        count++;
    }
    
    if (count2 == count) {
        printf("%i no existe en el arreglo. ", x);
    }
    
    return arrb;
}

int main(){
    
    int b = 6;
    int *a;
    a = new int[b];
    a[1] = 5;
    a[2] = 6;
    a[3] = 7;
    a[4] = 9;
    a[5] = 6;
    a[6] = 12;
    a[7] = 12;
    a[8] = 12;
    int c = 5;
    

    opcional(a, b, c);
}
