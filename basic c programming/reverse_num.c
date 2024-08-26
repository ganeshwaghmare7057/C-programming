#include<stdio.h>

int main()
{
    int i,n ;

    printf("enter the reversed number up to 1--  = ");
    scanf("%d",&n);

    printf("the reversed number from %d to 1 is =\n");

    for ( i = n; i >= 1; i--)
    {
        printf("%d\n",i);
    }

    return 0;
    
}