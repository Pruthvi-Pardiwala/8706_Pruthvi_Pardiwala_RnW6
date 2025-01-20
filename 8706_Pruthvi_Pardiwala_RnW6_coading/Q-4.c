//Write a program in C to give a grade from percentage. Use the following range to give a grade.
//           Percentage >= 90% : Grade A
//
//          Percentage >= 80% : Grade B
//
//          Percentage >= 70% : Grade C
//
//          Percentage >= 60% : Grade D
//
//          Percentage >= 40% : Grade E
//
//          Percentage < 40% : Grade Failed
#include<stdio.h>
void main()
{
    int sub1,sub2,sub3,sum;
    float avg;

    printf("Enter the number of Maths :- ");
    scanf("%d",&sub1);
    printf("Enter the number of English :- ");
    scanf("%d",&sub2);
    printf("Enter the number of Science :- ");
    scanf("%d",&sub3);

    if( sub1 > 100 || sub2 > 100|| sub3 > 100 )
        {
            printf("You have enter Wrong input....");
        }
    else
    {
        sum = sub1 + sub2 + sub3;
        avg = sum/3;
        printf("Average of the given subject :- %.2f",avg);

        if(avg>=90)
            {
                printf("\nYou have Got Grade A ...");
            }
        else if(avg>=80)
            {
                printf("\nYou have Got Grade B ...");
            }
        else if(avg>=70)
            {
                printf("\nYou have Got Grade C ...");
            }
        else if(avg>=60)
            {
                printf("\nYou have Got Grade D ...");
            }
        else if(avg>=40)
            {
                printf("\nYou have Got Grade E ...");
            }
        else
        {
            printf("\nYou have Fail in this Exam ...");
        }
    }
}