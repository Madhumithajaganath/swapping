#include<stdio.h>
void main()
{
    int a, b, temp;
    printf("Enter two numbers to be swapped");
    scanf("%d",&a);
    scanf("%d",&b);
    a=temp;
    b=a;
    temp=b;
    printf("Numbers after swapping %d %d",a,b);
}
