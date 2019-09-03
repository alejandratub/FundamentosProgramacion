#include <stdio.h>
int piramide(int altura)
{
    int a;
    int b;
    for(b=1; b<=altura; b=b+1)
    {
        for(a=1; a<=b; a=a+1)g
        {
            printf("*");
        }
            printf("\n");
    }
    for(int i=1;i<=altura; a=a+1)
    {
        for (a=altura-1; a>=i;a=a-1)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    piramide(6);
    return 1;
}