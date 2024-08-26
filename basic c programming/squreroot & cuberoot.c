#include<stdio.h>
#include<math.h>

int main()
{
    float s,c,n ;

    printf("enter the number = \n");
    scanf("%f",&n);

    s = pow(n,1.0/2);
    c = pow(n,1.0/3);

    printf("number of squreroot is = %f\n",s);
    printf("number of cuberoot is = %f\n",c);

    return 0;
}
