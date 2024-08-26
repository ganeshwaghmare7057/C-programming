#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,total ;
    int grade ;
    float avg ;

    printf("enter the mark of math\n");
    scanf("%d",&a);

    printf("enter the mark of signal &system\n");
    scanf("%d",&b);

    printf("enter the mark of contol system\n");
    scanf("%d",&c);

    printf("enter the mark of object oriented program\n");
    scanf("%d",&d);

    printf("enter the mark of data stracture\n");
    scanf("%d",&e);

    printf("enter the mark of digital circuit\n");
    scanf("%d",&f);

    total=a+b+c+d+e+f ;
    avg=total/6 ;

    printf("the total of mark = %d\n",total);
    printf("studant of percentage = %f\n",avg);

    if (avg>90)
    {
        printf("studant of geade = A++");
    }

    else if (avg>80)
    {
        printf("studant of grade = A+");
    }

    else if (avg>70)
    {
        printf("studant of grade = A");
    }

    else if (avg>60)
    {
        printf("studant of grade = 1st class pass ");
    }

    else if (avg>50)
    {
        printf("studant of grade = B+");
    }

    else if (avg>40)
    {
        printf("studant of grade = B");
    }

    else if (avg>35)
    {
        printf("studant of grade = pass");
    }

    else if (avg<35)
    {
        printf("studant of grade = feil");
    }
    
    return 0;

}