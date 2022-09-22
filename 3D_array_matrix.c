#include<stdio.h>
int a[5][5][5],b[5][5][5],c[5][5][5],i,j,k;
void array()
{
    for(k=0;k<1;k++)
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("\n enter a[%d][%d][%d]:",k,i,j);
                scanf(" %d",&a[k][i][j]);			
            }	
        }	
    }
}
void second_array()
{
    printf("\n\n");
    for(k=0;k<1;k++)
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("\n enter b[%d][%d][%d]:",k,i,j);
                scanf("%d",&b[k][i][j]);			
            }	
        }	
    }
}
void third_array()
{
    printf("\n\n");
    for(k=0;k<1;k++)
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                c[k][i][j]=a[k][i][j]+b[k][i][j];			
            }	
        }	
    }
}
void print()
{
    printf("\n\n MARTIX A:");
    for(k=0;k<1;k++)
    {
        for(i=0;i<3;i++)
        {
            printf("\n");
            for(j=0;j<3;j++)
            {
                printf("%d\t",a[k][i][j]);			
            }
        }	
    }
}  
void print2()
{
    printf("\n\n MARTIX B:");
    for(k=0;k<1;k++)
    {
        for(i=0;i<3;i++)
        {
            printf("\n");
            for(j=0;j<3;j++)
            {
                printf("%d\t",b[k][i][j]);			
            }
        }	
    }
}  
void print3()
{
    printf("\n\n MARTIX C:");
    for(k=0;k<1;k++)
    {
        for(i=0;i<3;i++)
        {
            printf("\n");
            for(j=0;j<3;j++)
            {
                printf("%d\t",c[k][i][j]);			
            }
        }	
    }
}  
int main()
{
    array();
    second_array();
    third_array();
    print();
    print2();
    print3();
}