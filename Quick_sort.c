#include<stdio.h>
#include<stdlib.h>
#define n 10
int i,j;
void Print(int a[])
{
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
void Quick_sort(int a[],int f,int l)
{
    int pivot,tmp;
    if(f<l)
    {
        printf("\n inside Quick:");
        Print(a);
        pivot=f;
        i=f;
        j=l;
        while(i<j)
        {
            while(a[j]<=a[pivot]&&i<l)
                i++;
            while (a[j]>a[pivot])
                j--;
            if(i<j)
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
        tmp=a[pivot];
        a[pivot]=a[j];
        a[j]=tmp;

        Quick_sort(a,f,j-1);
        Quick_sort(a,j+1,l);
    }
}
int main()
{
    int a[100],min=10,max=40;
    printf("enter %d eleements:",n);
    for(i=0;i<n;i++)
        a[i]=(rand()%(max-min+1)+min);
    Print(a);
    printf("\n");
    Quick_sort(a,0,n-1);
    printf("\n Order of sorted elements:");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
