#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,total ;
    float avg,grade ;

    printf("enter the mark of marathi\n");
    scanf("%d",&a);

    printf("enter the mark of math\n");
    scanf("%d",&b);

    printf("enter the mark of science\n");
    scanf("%d",&c);

    printf("enter the mark of history\n");
    scanf("%d",&d);

    printf("enter the mark of sanskrit\n");
    scanf("%d",&e);

    printf("enter the mark of english\n");
    scanf("%d",&f);

    total=a+b+c+d+e ;
    avg=total/6 ;
    
    printf("the studant of total mark = %d\n",total);
    printf("the studant of percentage = %f\n",avg);

    if ((avg<35)||(a<35)||(b<35)||(c<35)||(d<35))
    {
        printf("\nResult = fail\n");
    }
    else if (avg>85)
    {
        printf("studant of grade = destination\n Result = pass");
    }
    else if (avg>60)
    {
        printf("studant of grade = A\n Result = pass");
    }
    else if (avg>45)
    {
        printf("studant of grade = B+\n Result = pass");
    }
    else if (avg>=35)
    {
        printf("studant of grade = B\n Result = pass");
    }

}