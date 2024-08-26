#include<stdio.h>
int fun(n)
{
    if(n<=100)
    {
        n++;
        printf("%d\n",n);
        fun(n);
    }
    return n;
}
main()
{
    int n=0;
    fun(n);
    printf("\n");
}