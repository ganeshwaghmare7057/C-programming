#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,total ;
    float avg,grade ;

    printf("enter the mark of math\t\t\t");
    scanf("%d",&a);

    printf("enter the mark of physics\t\t");
    scanf("%d",&b);

    printf("enter the mark of chemestry\t\t");
    scanf("%d",&c);

    printf("enter the mark of biology\t\t");
    scanf("%d",&d);

    printf("enter the mark of marathi\t\t");
    scanf("%d",&e);

    printf("enter the mark of control system\t");
    scanf("%d",&f);

    printf("enter the mark of signal system\t\t");
    scanf("%d",&g);

    printf("enter the mark of digital circuit\t");
    scanf("%d",&h);

    total=a+b+c+d+e+f+g+h ;
    avg=total/8 ;

    printf("the studant of total mark = %d\n",total);
    printf("the studant of percentage = %f\n",avg);

    if (avg>90)
    {
       printf("grade is = A++\n");
    }

    else if (avg>80)
    {
        printf("grade is = A+\n");
    }

    else if (avg>70)
    {
        printf("grade is = A\n");
    }


    else if (avg>60)
    {
       printf("grade is = 1st class pass\n");
    }

    else if (avg>45)
    {
        printf("grade is = B\n");
    }

    else if (avg>=35)
    {
        printf("grade is = B+\n");
    }

    else if (avg<35)
    {
        printf("grade is = feil\n");
    }
    
    return 0;
    
}