#include<stdio.h>
int main(){
    


char perfNatural(int num)
{
    int divider = 0;
     for(int i = num-1; i > 0; i=i-1)
    {
        if(num % i == 0)
        {
            divider = divider + i;
        }
    }
    if(divider == num)
    {
        printf("Es natural perfecto"),perfNatural(5);
        return 's';
    }
    else
    {
        printf("No es natural perfecto"),perfNatural(5);
        return 'n';
    }
}

}