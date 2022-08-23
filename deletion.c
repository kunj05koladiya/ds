#include<stdio.h>
void main()
{
    int a[5]={45,89,32,44,12};
    int num,pos,i;
    printf("array before deletion-->");
    for(i=0;i<5;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\nenter position:");
    scanf("%d",&pos);
    for(i=0;i<5;i++)
    {
        if(i>pos-1)
        {
            a[i]=a[i+1];
        }
    }
    a[4]=0;

    printf("\narray after deletion-->");
    for(i=0;i<5;i++)
    {
        printf("\t%d",a[i]);
    }
}