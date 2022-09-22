#include<stdio.h>
#define size 5
int a[size],f=0,r=0,i;
void insert(int val)
{
    if((r+1)%size==f)
        printf("\n\tqueue is full!!");
    else
    {
        r=(r+1)%size;
        a[r]=val;
    }
    printf("\n\n front:%d \t rear:%d",f,r);
}
void delete()
{
    int x=-1;
    if(f==r)
    {
        printf("\n\tqueue is empty!!");
        f=r=0;
    }
    else
    {
        f=(f+1)%size;
        x=a[f];       
    }
    printf("\n\tdeleted elements is:%d",x);
    printf("\n\n front:%d \t rear:%d",f,r);
}
void print()
{
    if(f==r)
        printf("\n\tqueue is full!!");
    else
    {
        i=f+1;
        printf("\n\nqueue elements are:");
        do
        {
            printf("%d\t",a[i]);
            i=(i+1)%size;
        } while (i!=(r+1)%size);
    }
    printf("\n\n front:%d \t rear:%d",f,r);
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    print();

    delete();
    delete();
    print();
}
