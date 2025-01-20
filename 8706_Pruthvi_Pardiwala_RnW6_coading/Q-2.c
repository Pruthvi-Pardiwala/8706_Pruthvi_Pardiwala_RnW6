//write a C program to convert temperature from degree Celsius to Fahrenheit.

#include<stdio.h>
void main()
{
    int c;
    float f;

    printf("Enter the temperature in Celsius :- ");
    scanf("%d",&c);

    f = c * (1.8)+32;

    printf("Celsius to Fahrenheit :- %.2f",f);
}