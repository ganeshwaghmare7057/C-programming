#include<stdio.h>
#define MAX_SIZE 100

int main()
{
    char text1 [MAX_SIZE] ;
    /*char text2 [MAX_SIZE] ;*/
    int i;
    printf("enter any string = \n");
    gets(text1);

    for (i = 0; text1[i]!= '\0'; i++)
    {
        /*text2[i] =*/ text1[i];
    }

    /*text2[i] = '\0' ;*/

    printf("1st string = %s\n",text1);
    /*printf("second string = %s\n",text2);*/
    printf("total character copies = %d\n",i);
     
}