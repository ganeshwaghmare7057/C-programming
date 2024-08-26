#include<stdio.h>

int main()
{
    int year ;

    printf("enter the year number (1-12)\n");
    scanf("%d",&year);

    switch (year)
    {
        case 1:
        printf("january");
        break ;

        case 2:
        printf("february");
        break;

        case 3:
        printf("march");
        break;

        case 4:
        printf("april");
        break;

        case 5:
        printf("may");
        break;

        case 6:
        printf("june");
        break;

        case 7:
        printf("july");
        break;

        case 8:
        printf("August");
        break;

        case 9:
        printf("saptember");
        break;

        case 10:
        printf("october");
        break;

        case 11:
        printf("november");
        break;

        case 12:
        printf("December");
        break; 

        default:
        printf(" invalide mounth");
        break;
    }

}