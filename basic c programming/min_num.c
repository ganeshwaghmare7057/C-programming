#include<stdio.h>

int main()
{
    int n1,n2,n3,n4,min ;

    printf("enter the number 1 =");
    scanf("%d",&n1);

    printf("enter the number 2 =");
    scanf("%d",&n2);

    printf("enter the number 3 =");
    scanf("%d",n3);

    printf("enter the number 4 =");
    scanf("%d",&n4);

    if ((n1<n2)&&(n1<n3)&&(n1<n4))
    {
        min=n1 ;
    }
    
    if ((n2<n1)&&(n2<n3)&&(n2<n4))
    {
        min=n2 ;
    }

    if ((n3<n1)&&(n3<n2)&&(n3<n4))
    {
        min=n3 ;
    }

    if ((n4<n1)&&(n4<n2)&&(n4<n3))
    {
        min=n4 ;
    }
    
    printf ("minimum number is = %d",min);

    return 0;

}