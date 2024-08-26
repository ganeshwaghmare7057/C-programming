#include<stdio.h>

int main()
{
    char text[150] ;
    int digit,space ;

    digit = space = 0 ;

    printf("enter any string = \n");
    fgets(text,(text),stdin);

    for (int i = 0; text[i] != '\0'; ++i)
    
    if (text[i] >= '0' && text[i] <= '9')
    {
        ++digit ;
    }
   
    else if (text[i] == ' ')
    {
        ++space ;
    }

    printf("digit = %d\n", digit);
    printf("space = %d\n", space);
     
    return 0;
    
}