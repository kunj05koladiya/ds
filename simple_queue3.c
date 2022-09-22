#include<stdio.h>
#define size 5
int a[size],f=-1,r=-1,i;
void front_insert(int val)
{
    if(r-1==size)
        printf("queue is full\n");
    else
    {
        if(f==-1 && r==-1)
        {
            a[--f]=val;
            --r;
        }
        else    
            a[--f]=val;
    }
    printf("\ninserted-->%d",val);
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
    printf("\n");
}
int main()
{
    front_insert(21);
    front_insert(22);
    front_insert(33);
    front_insert(44);
    front_insert(55);
    front_insert(66);
    front_insert(77);

    print();
    rear_delete();
    rear_delete();
    rear_delete();
    print();




    return 0;
}