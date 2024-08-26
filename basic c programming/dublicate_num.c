#include<stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int size ;
    int i,j,k ;

    printf("enter the size of array = \n");
    scanf("%d",&size);

    printf("enter the element of array =  \n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    for ( i = 0; i < size; i++)
    {
        for ( j = i+1; j < size; j++)
        {
            if (arr[i]==arr[j])
            {
                for ( k = j; k < size-1; k++)
                {
                    arr[k]==arr[k+1];
                }
                size-- ;
                j-- ;
                
            }
            
        }
        
    }

    printf("array element after deleting dublicate = \n");
    for ( i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}
