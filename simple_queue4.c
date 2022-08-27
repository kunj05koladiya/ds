#include<stdio.h>
#include<stdlib.h>
#define max 5
int a[max],f=-1,r=-1,i;
void front_insert(int f_val)
{
    if(r-1==max)
        printf("queue is full\n");
    else
    {
        a[f--]=f_val;
    }
    printf("\ninserted-->%d",f_val);
}
void rear_delete()
{
    if(f==-1 && r==-1)
        printf("\n queue is empty");
    else
    {
        if(f==r)
            f=r=-1;
        else
            --r;
        printf("\ndeleted-->%d",a[r+1]);
    }
}
void print()
{
    if(f==-1 && r==-1)
        printf("\n queue is empty");
    else
    {
        printf("\n queue elements are:");
        for(i=f+1;i<=r;i++)
        {
            printf("\t%d",a[i]);
        }
    }
}
int main()
{
    int ch,val;
    do
    {
        printf("\n for front_insert-->press 1 \n for rear_delete -->press 2 \n for show        -->press 3\n for exit        -->press 0");
        printf("\nenter choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            printf("\n\t enter value for front insert:");
            scanf("%d",&val);
            front_insert(val);
            break;

            case 2:
            rear_delete();
            break;

            case 3:
            print();
            break;

            case 0:
            exit(0);
            break;

            default:
            printf("\nwrong choice!!");
            break;

        }
    }while(ch!=0);
    
}