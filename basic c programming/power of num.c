#include<stdio.h>
#include<math.h>
int s(num);
int main()
{
    int num,s ;

    printf("enter any number = \n");
    scanf("%d",&num);

    s = pow(num);

    printf("squreroot = %d",s);

    return 0;
}
int s(num)
{
    return (1/2);
}