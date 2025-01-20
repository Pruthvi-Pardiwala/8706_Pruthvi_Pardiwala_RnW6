//Write a program in C to swap two numbers using user defined function.

#include<stdio.h>

void printing(int a,int b)
{
        printf("\n A = %d ",a);
        printf("\n B = %d ",b);
}

void main()
{
    int a,b;

    printf("Enter the A :- ");
    scanf("%d",&a);
    printf("Enter the B :- ");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printing(a,b);
}