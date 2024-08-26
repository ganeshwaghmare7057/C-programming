#include<stdio.h>
int main()
{
    int a,b,c,d,e,total ;
    float avg,grade ;

    printf("enter the mark of math\n");
    scanf("%d",&a);

    printf("enter the mark of Data stucture\n");
    scanf("%d",&b);

    printf("enter the mark of Digital Circuit\n");
    scanf("%d",&c);

    printf("enter the mark of electrnic Circuit\n");
    scanf("%d",&d);

    printf("enter the mark of electrical circuit\n");
    scanf("%d",&e);

    total=a+b+c+d+e ;
    avg=total/5 ;

    printf("the studant of total mark is = %d\n",total);
    printf("the studant of percentege is = %f\n",avg);

    if (avg>85)
    {
       printf("studant of grade = A+\n");
    }

    else if (avg>60)
    {
        printf("studant of grade = A\n");
    }

    else if (avg>45)
    {
       printf("studant of grade = B+\n");
    }

    else if (avg>=35)
    {
        printf("studant of grade = B\n");
    }

    else if (avg<35)
    {
        printf("studant of grade = feil\n");
    }
    
    return 0;

}