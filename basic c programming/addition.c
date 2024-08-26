#include <stdio.h>

float main()
{
    float a,b,c ;
    float avg ;

    printf("\nenter any two number\n");
    scanf("%f %f",&a,&b);

    c=a+b;
    avg=c/2 ;

    printf("the addition of two number\n %f+%f=%f",a,b,c);
    printf("\nthe avg of total number\n %f",avg);

    return 0;
}