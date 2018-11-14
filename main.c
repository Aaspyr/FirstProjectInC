#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int a;
    int b;

    printf("Write first number: ");
    scanf("%d",&a);
    printf("Write second number: ");
    scanf("%d",&b);

    if (a%2 == 0)
    {
        if (b%2 == 0)
        {
            for(i=a+1; i<b; i=i+2)
            {
                printf("%4d",i);
            }
        }
        else
        {
            for(i=a+1; i<=b; i=i+2)
            {
                printf("%4d",i);
            }
        }
    }
    else
    {
        if (b%2 == 0)
        {
            for(i=a; i<b; i=i+2)
            {
                printf("%4d",i);
            }
        }
        else
        {
            for(i=a; i<=b; i=i+2)
            {
                printf("%4d",i);
            }
        }
    }
    printf("\n");
    return 0;
}
