#include<stdio.h>

int main()
{
    char text[150] ;
    int vowel,consonant,digit ;

    vowel = consonant = digit = 0 ;

    printf("enter any string = \n");
    fgets(text,(text),stdin);

    for (int i = 0; text[i] != '\0'; ++i)
    {
        text[i] = tolower(text[i]);
        
        if (text[i] == 'a' || text[i] == 'e' || text[i] =='i' || text[i] == 'o' || text[i] == 'u')
        {
           ++vowel ;
        }

        else if(text[i] >='a' && text[i] <= 'z')
        {
            ++consonant ;
        }  

        else if (text[i] >= '0' && text[i] <='9')
        {
            ++digit ;
        }
    
    }
    printf("vowel %d\n",vowel);
    printf("consonant %d\n",consonant);
    printf("digit %d\n",digit);

    return 0;
}