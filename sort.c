#include<stdio.h>
#include<stdlib.h>
#define n 10
int a[10],i,j,tmp;
void printArrray(int a[])
{
    for(j=0;j<n;j++)
        printf("\t%d",a[j]);
}
void bubble_sort()
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
    printArrray(a);
}
void selection_sort()
{
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    printArrray(a);
}
int main()
{
    int min,max,val,ch;
    printf("\nenter min:");
    scanf("%d",&min);
    printf("\nenter max:");
    scanf("%d",&max);
    for(i=0;i<n;i++)
        a[i]=((rand()%max-min+1)+min);
    do
    {
        printf("\n\nfor bubble sort    ----> press 1");
        printf("\nfor selection sort ----> press 2");
        printf("\nfor display Queue  ----> press 3");
        printf("\nfor exit           ----> press 0");
        printf("\n\nenter choice:");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            printf("\nafter bubble sort...");
            bubble_sort(a);
            break;

        case 2:
            printf("\nafter selection sort..");
            selection_sort(a);
            break;

        case 3:
             printArrray(a);
             break;

        case 0:
            exit(0);
            break;
        
        default:
            printf("\nwrong chice!!");
            break;
        }
    } while (ch!=0);
}