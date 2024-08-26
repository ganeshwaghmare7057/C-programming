#include<stdio.h>
int main()
{
    int y,z,total;
    float avg ;
    printf("enter any two number\n");
    scanf("%d %d",&y,&z);
    total=y-z;
    avg=total/5 ;
    printf("\n the substraction of two number %d-%d=%d",&y,&z,total);
    printf("the avg of the number %f",avg);

}