#include<stdio.h>
#define max 5
int a[max],f=-1,r=-1,i;
void rear_insert(int val)
{
    if(r+1==max)
        printf("\nqueue is full!!");
    else if(f==-1 && r==-1)
        a[++r]=val;
    else
        a[++r]=val;
    printf("\ninserted-->>%d",val);
}
void front_insert(int val)
{
    if(r-1==max)
        printf("\nqueue is full!!");
    else
        a[f--]=val;
    printf("\ninserted-->>%d",val);
}
void rear_delete()
{
    if(f==-1 && r==-1)
        printf("queue is empty!!");
    else if(f==r)
        f=r=-1;
    else
        --r;
    printf("\ndeleted-->>%d",a[r+1]);
}
void front_delete()
{
    if(f==-1 && r==-1)
        printf("queue is empty!!");
    else if(f==r)
        f=r=-1;
    else
        ++f;
    printf("\ndeleted-->>%d",a[f]);
}
void display()
{
    if(f==-1 && r==-1)
        printf("queue is empty!!");
    else
    {
        printf("\nQueue elements are:");
        for(i=f+1;i<=r;i++)
            printf("%d\t",a[i]);
    }
}
int main()
{
    int ch,val;
    do
    {
    printf("\n<--------insert--------->    \t\t<---------delete--------->");
    printf("\nfor rear insert -->press 1   \t\tfor rear delete -->press 3");
    printf("\nfor front insert-->press 2   \t\tfor front delete-->press 4");
    printf("\n<---------------------------------------------------------------->");
    printf("\nfor show        -->press 5   \t\tfor exit        -->press 0");
    printf("\n\nenter choice:");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("\n\tenter value:");
        scanf("%d",&val);
        rear_insert(val);
        break;

    case 2:
        printf("\n\tenter value:");
        scanf("%d",&val);
        front_insert(val);
        break;

    case 3:
        rear_delete();
        break;

    case 4:
        front_delete();
        break;
    
    case 5:
        display();
        break;

    case 0:
        printf("\n------exit------");
        break;

    default:
        printf("wrong choice!!");
        break;
    }
    }while(ch!=0);
}
