#include <stdio.h>
//no pude crear los arreglos como apuntadores, en el ultimo ejercicio solo me devuelve un numer0//


void print_array(int arr[], int size);
int repetido(int n, int arr[], int size);
int invertido(int arr[], int size);

void print_array(int arr[], int size)
{
    
    for(int i=0; i<size; ++i)
    {
        printf(" %d", arr [i]);
    }
    printf("\n");
}


int repetido(int n, int arr[], int size)
{
    int repetir;
    for(int i=0;i<size; ++i)
    {
        if(arr[i]==n)
        {
            repetir+=1;
        }
    }
    
    return repetir;
}

int invertido(int arr[], int size)
{
    
    int a;
    int j=0;
    int temp;
    
    printf("%d \n",size);
    for(int i=size;i>=0; --i)
    {
        temp=arr[i];
        printf("%d \n",temp);
        arr[i]=arr[j];
        arr[j]=temp;
        printf("%d ", arr[j]);
        j++;
        
    }
    return *arr;
    
    
}

int main(){
    
    int arr[]= {50, 2, 2, 2, 8, 316, 152, 4587, 2, 89, 786, 95};
    int num;
    int size = sizeof arr / sizeof arr[0];

    print_array(arr, size);

   printf("ingrese \n");
    scanf("%d",&num);
    int rep = repetido(num,arr,size);
    printf("%d ese fue el número de veces que se repitió %d\n",rep, num);
    
    invertido(arr, size);
        int arrin[]={invertido(arr)};
        size = sizeof arrin / sizeof arrin[0];
        print_array(arrin,size);
    return 0;
    
}