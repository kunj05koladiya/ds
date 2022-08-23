#include<stdio.h>
int pos=0,i,n,a[10];
void lastdelete(int value)
{
    value=a[n-1];                                         
    n=n-1;  
}
void print()
{
   for(i = 0; i < n; i++)
    {
       printf("%d \n\t",a[i]);
    } 
}
int main()
{
    int n;
    lastdelete(1);
    lastdelete(2);
    lastdelete(3);
    lastdelete(4);
    print();
}