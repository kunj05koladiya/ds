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
void pip(int val)
{
    for(i=0;i<=top;i++)
    {
        if(stack[i]==val)
            {printf("\nposition:%d",i+1);}
    }
}
void print()
{
    for(i=0;i<=top;i++)
    {
        printf("\n\t%d",stack[i]);
    }
}
int main()
{
    int ch,val;
    do
    {
        printf("\n press 1 for---->> PUSH \n press 2 for---->> POP \n press 3 for---->> pip \n press 4 for---->> show \n press 0 for---->> exit");
        printf("\n\nenter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\n\tenter value:");
                scanf("%d",&val);
                push(val);
                break;

            case 2:
                pop();
                break;

            case 3:
                printf("\n\tenter value:");
                scanf("%d",&val);
                pip(val);
                break;

            case 4:
                print();
                break;

            case 0:
                exit(0);
                break;

            default:
                printf("\nAlert! wrong chice");
                break;
        }
    }while(n!=0);
}