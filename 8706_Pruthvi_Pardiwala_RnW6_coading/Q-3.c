//Write a C program to find the sum of two matrices in 2D Array.

#include<stdio.h>
void main()
{
    int i=100,j=100,r,co;
    int a[i][j],b[i][j],c[i][j];

    printf("Enter the number of row :- ");
    scanf("%d",&r);
    printf("Enter the number of colum :- ");
    scanf("%d",&co);
    
    printf("Enter the elements of First Array :- \n");
    
    for(i=0;i<co;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("Array[%d][%d]:- ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter the elements of Second Array :- \n");
    
    for(i=0;i<co;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("Array[%d][%d]:- ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<co;i++)
    {
        for(j=0;j<r;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    
    printf("The Third Array :- \n");

    for(i=0;i<co;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("Array[%d][%d]:- %d\n",i,j,c[i][j]);
        }
    }
    //printf("Store data :- \n");
    //for(i=0;i<co;i++)
    //{
    //    for(j=0;j<r;j++)
    //    {
    //        printf("Array[%d][%d]:- %d\n",i,j,a[i][j]);
    //    }
    //}
    //printf(".................\n");
    //for(i=0;i<co;i++)
    //{
    //    for(j=0;j<r;j++)
    //    {
    //        printf("Array[%d][%d]:- %d\n",i,j,a[i][j]);
    //    }
    //}
    
}