#include<stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i,n ;

    printf("enter size of array = \n");
    scanf("%d",&n);

    printf("enter element of array = \n");

    for ( i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
    }

    printf("all positive element of array = \n");
    for ( i = 0; i < n; i++)
    {
        if (arr[i]>=0)
        {
            printf("%d\n",arr[i]);
        }
    }

    printf("all nagetive element of array = \n");
    for ( i = 0; i < n; i++)
    {
        if (arr[i]<0)
        {
            printf("%d\n",arr[i]);
        }
    }

    printf("all even element of array = \n");
    for ( i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            printf("%d\n",arr[i]);
        }
    }

    printf("all odd element of array = \n");
    for ( i = 0; i < n; i+=2)
    {
        if (arr[i]>0)
        {
            printf("%d\n",arr[i]);
        } 
    }
    
    return 0;
    
}