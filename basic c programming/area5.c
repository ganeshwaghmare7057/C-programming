#include<stdio.h>

float main()

{
    float base,height,area ;

    printf("enter the base of triangle\n");
    scanf("%f",&base);

    printf("enter the height of triangle\n");
    scanf("%f",&height);

    area=0.5*(base*height) ;

    printf("the area of triangle = %f",area);
   
    return 0;
}