#include<stdio.h>
#include<stdlib.h>
#define n 5
int a[n],i,r=-1,f=-1;
void rear_insert(int val)
{
    if(r+1==n)
        printf("queue is full!!");
    else if(f==-1 && r==-1)
    {
        a[++f]=val;
        r++;
    }
    else
        a[++r]=val;
}
void front_delete()
{
    if(f==-1 && r==-1)
        printf("queue is empty!!\n");
    else if(f==r)
        f=r=-1;
    else
        ++f;
}
void print()
{
    if(f==-1)
    {
        printf("queue is empty!!\n");
    }
    else
    {
        for(i=f;i<=r;i++)
            printf("%d\t",a[i]);
    }
   
}
int main()
{
    int choice,val;
    do
    {
       printf("\nfor insert value-->press 1");
       printf("\nfor delete value-->press 2");
       printf("\nfor show queue  -->press 3");
       printf("\nfor exit        -->press 0");
       printf("\n\n enter choice:");
       scanf("%d",&choice);

       switch(choice)
       {
        case 1:
        printf("\n\tenter value for insert:");
        scanf("%d",&val);
        rear_insert(val);
        break;

        case 2:
        front_delete();
        break;

        case 3:
        print();
        break;

        case 0:
        exit(0);
        break;
       
        default:
        printf("\nalerts!!wrong choice");
        break;
       }

    } while(choice!=0);
    
}