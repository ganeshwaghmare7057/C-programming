#include<stdio.h>

int main()
{
    int a,b,c,d,total ;
    float avg,grade ;

    printf("math\n");
    scanf("%d",&a);

    printf("OOP\n");
    scanf("%d",&b);

    printf("DSA\n");
    scanf("%d",&c);

    printf("dc\n");
    scanf("%d",&d);

    total=a+b+c+d ;
    avg=total/4 ;

    printf("the total of mark = %d\n",total);
    printf("studant of percentage = %f\n",avg);

    if (avg>85)
    {
        printf("grade is = A+");
    }

    else if (avg>60)
    {
        printf("grade is = A");
    }

    else if (avg>45)
    {
        printf("grade is = B");
    }

    else if (avg>=35)
    {
        printf("grade is = pass");
    }

    else if (avg<35)
    {
        printf("grade is = feil");
    }
    
    return 0;
}