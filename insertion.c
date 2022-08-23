#include<stdio.h>
void main()
{
    int a[5]={45,56,32,21,0};
    int i,num,tmp,pos;
    printf("enter element:");
    scanf("%d",&num);
    printf("\nenter position:");
    scanf("%d",&pos);

    printf("\narray before insertion:");
    for(i=0;i<5;i++)
    {
        printf("\t%d",a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(i>=pos-1)
        {
            tmp=a[i];
            a[i]=num;
            num=tmp;
        }
    }
        

    printf("\narray after insertion:");
    for(i=0;i<5;i++)
    {
        printf("\t%d",a[i]);
    }
}