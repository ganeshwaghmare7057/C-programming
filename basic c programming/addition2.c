#include<stdio.h>
int main()
{
    int a,b,c,d,e,total;
    float avg;
    printf("enter any five number\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    total=a+b+c+d+e ;
    avg=total/5;
    printf("the Total of five numbers is = %d",total);
    printf("\n The average of the numbers is =%f",avg);

    return 0;
}