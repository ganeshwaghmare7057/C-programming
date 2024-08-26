#include<stdio.h>

int main()
{
    int a,b,c,d,total ;
    float avg,grade;
    int A,B,C ;
    
    printf("\nenter the mark of marathi\n ");
    scanf("%d",&a);

    printf("enter the mark of english\n");
    scanf("%d",&b);

    printf("enter the mark of math\n");
    scanf("%d",&c);

    printf("enter the mark of science\n");
    scanf("%d",&d);

    total=a+b+c+d ;
    avg=total/4 ;

    printf("the studant of total mark is = %d\n",total);
    printf("studant of percentage is = %f\n",avg);

    if (avg>=60)
    {
        printf("studant of grede = A\n");
    }
       
    else if (avg>=35)
    {
        printf("studant of grade= B\n");
    }

    else if (avg<35)
    {
       printf("studant of grade = C\n");
    }

    return 0;
}