#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter 2 numbers to be swapped");
    scanf("%d",&a);
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Numbers after swapping %d %d",a, b);
}
