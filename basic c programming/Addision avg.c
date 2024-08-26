#include<stdio.h>

int main()
{
    int x,y,total ;
    float avg ;
    printf("enter any number\n");
    scanf("%d %d",&x,&y);
    total=x+y ;
    avg=total/9 ;
    printf("the addition of two number %d+%d=%d\n",x,y,total);
    printf("the avg of the number %f\n",avg);

    return 0 ;
}