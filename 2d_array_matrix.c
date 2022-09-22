#include<stdio.h>
int i,j,a[3][3],b[3][3],c[3][3];
void first_array()
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter element for a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }    
}
void second_array()
{
    printf("\n\n");
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
        printf("enter element for b[%d][%d]:",i,j);
        scanf("%d",&b[i][j]);
    }
   }    
}
void third_array()
{
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
        c[i][j]+=a[i][j]*b[i][j];
    }
   }    
}
void print()
{
    printf("\n\n MATRIX a:");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
}
void print2()
{
    printf("\n\n MATRIX b:");  
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
    }
}
void print3()
{
    printf("\n\n MATRIX c:");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
    }
}
int main()
{
    first_array();
    second_array();
    third_array();
    print();
    print2();
    print3();
}