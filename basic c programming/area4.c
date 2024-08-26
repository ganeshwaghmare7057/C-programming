#include<stdio.h>

int main()
{
    float  lenght,width,perimeter,area;

    printf("enter the lenght of reacangle = \n");
    scanf("%f",&lenght);

    printf("enter the width of reacangle = \n");
    scanf("%f",&width);

    perimeter=2*(lenght+width);
    area=lenght*width ;

    printf("the perimeter of reacangle = %f\n",perimeter);
    printf("the area of reacangle = %f\n",area);

    return 0;
}