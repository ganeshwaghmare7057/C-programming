#include<stdio.h>

int main()
{
    int i,n ;

    printf("enter the number  = ");
    scanf("%d",&n);

    printf("natural number from 1 to %d: \n",n);

    for ( i=1; i<= n; i++)
    {
        printf("%d\n",i);
    }
    
}