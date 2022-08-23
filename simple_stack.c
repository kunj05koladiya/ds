#include<stdio.h>
int i,n=5,top=-1,stack[5];
void push(int val)
{
    if(top>n-1)
        printf("\noverflow");
    else
        stack[++top]=val;
}
int pop()
{
    int x=0;
    if(top<=-1)
        printf("\nempty");
    else
        x=stack[top--];
    return x;
}
void print()
{
    for(i=0;i<top;i++)
    {
        printf("\n\t%d",stack[i]);
    }
}
int main()
{
    int n;
    
    push(11);
    push(12);
    push(13);
    push(14);
    push(15);
    push(16);
    push(17);

    print();
    printf("\n\tafter delete");
    pop();
    print();

    return 0;
}