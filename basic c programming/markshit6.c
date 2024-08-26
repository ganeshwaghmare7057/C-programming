#include<stdio.h>

int main()
{
    int a,b,c,d,total ;
    float avg,grade ;

    printf("enter the mark of marathi\n");
    scanf("%d",&a);

    printf("enter the mark of math\n");
    scanf("%d",&b);

    printf("enter the mark of science\n");
    scanf("%d",&c);

    printf("enter the mark of english\n");
    scanf("%d",&d);

    total=a+b+c+d ;
    avg=total/4 ;

    printf("the studant of total mark = %d\n",total);
    printf("the studant of percentage  = %f\n",avg);

    if (avg>85)
    {
        printf("studant of grade\t = A+");
    }
    else if (avg>60)
    {
        printf("studant of grade\t = A");
    }

    else if (avg>45)
    {
        printf("studant of grade\t = B");
    }

    else if (avg>35)
    {
        printf("studant of grade\t = pass");
    }

    else if (avg<35)
    {
        printf("studant of grade\t = feil");
    }
    
    return 0;  
}