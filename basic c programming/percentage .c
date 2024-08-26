#include<stdio.h>

int main()
{
    int boys ;

    printf("enter the boys roll number(1-10)\n");
    scanf("%d",&boys);

    switch (boys)
    {
    case 1:
        printf("*sachin Bargaje*\npercentage is = 65\n Result = 1st class pass");
        break;

    case 2:
        printf("*krushna Devdhe*\npercentage is = 55\n Result = 2nd class pass");
        break;

    case 3:
        printf("*Mahesh vadne*\npercentage is = 88\n Result = 1st class pass");
        break;

    case 4:
        printf("*pravin sable*\npercentage is = 58\n Result = 2nd class pass");
        break;

    case 5:
        printf("*Rupesh bhandari*\npercentage is = 34\n Result = fail");
        break;

    case 6:
        printf("*Ganeh Waghmare*\npercentage is = 69\n Ressult = 1st class pass");
        break;

    case 7:
        printf("*shashikant latpate*\npercentage is = 42\n Result = 2nd class pass");
        break;

    case 8:
        printf("*kiran ranjit*\npercentage is = 25\n  Result = fail");
        break;

    case 9:
        printf("*swati game*\npercentage is = 36\n Result = 1st class pass");
        break;

    case 10:
        printf("*dipak dorle*\npercentage is = 74\n Result = 1st class pass");

    default:
        printf("invalide boys");
        break;
    }
}