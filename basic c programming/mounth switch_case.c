#include<stdio.h>

int main()
{
    int day ;

    printf("enter the days number = ");
    scanf("%d",&day);

    switch (day)
    {
    case 1 :
        printf("1 to 5 days");
        break;

    case 2 :
        printf("6 to 10 days");
        break;

    case 3 :
        printf("11 to 15 days");
        break;

    case 4 :
        printf("16 to 20 days");
        break;

    case 5 :
        printf("21 to 25 days");
        break;

    case 6 :
        printf("26 to 30 days");
        break;
    
    
    default:
        printf("invalide days");
        break;
    }
}