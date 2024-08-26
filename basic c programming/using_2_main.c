#include<stdio.h>
void main()
{
    printf("In 1st main\n");
    func1();
}
#define main func1
void main()
{
    printf("In 2nd main\n");
}