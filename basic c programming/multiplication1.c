#include<stdio.h>
int main()
{
    int a,b,c,total ;
    float avg ;
    printf("enter any three number\n");
    scanf("%d%d%d",&a,&b,&c);
    total=a*b*c ;
    avg=total/5 ;
    printf("\n the total of three number is = %d",total);
    printf("\n the avg of the number is=%f",avg);

    return 0;
}