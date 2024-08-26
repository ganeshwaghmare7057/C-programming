#include<stdio.h>

int main()

{
    int n1,n2,c ;

    printf("enter the 1st number = \n");
    scanf("%d",&n1);

    printf("enter the 2nd number = \n");
    scanf("%d",&n2);

    c=n1 ;
    n1=n2 ;
    n2=c ;

    printf("the 1st number is =  %d\n",n1);
    printf("the 2nd number is =  %d",n2);

    return 0;

}