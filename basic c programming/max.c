#include<stdio.h>

int main()
{
    int a,b,c ;

    printf("enter any number\n");
    scanf("%d%d%d",&a,&b,&c);

    if ((a>b)&&(a>c))
    {
        printf("%d is largest number",a);
    }
    else if ((b>a)&&(b>c))
    {
        printf("%d is a largest number",b);
    }
    else if ((c>a)&&(c>b))
    {
       printf("%d is a largest number",c);
    }
    
}
