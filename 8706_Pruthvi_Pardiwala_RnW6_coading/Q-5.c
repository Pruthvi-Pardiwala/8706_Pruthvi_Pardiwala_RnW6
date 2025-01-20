//Write Below Pattern Using Nested Loop.
//
//A
//B  A
//C  B  A
//D  C  B  A
//E  D  C  B  A
#include<stdio.h>
void main()
{
    int i,j;

    for(i='A';i<='E';i++)
    {
        for(j=i;j>='A';j--)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}