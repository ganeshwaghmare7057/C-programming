#include<stdio.h>
#include<math.h>

/*double cube(double num);*/

int main()
{
    float num,r ;
    /*double c ;*/

    printf("enter any number\n");
    scanf("%f",&num);

    /*c = cube(num);*/
    r = pow(num,1.0/3);

    printf("number of cuberoot is = %.2f",r);

    return 0;
}

/*double cube(double num)
{
    return ();
}*/
