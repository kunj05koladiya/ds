#include<stdio.h>
#define n1 7
#define n2 5
int i,j,n;
void merge(int a[],int b[])
{
    n=n1+n2;
    int c[n];
    for(i=0;i<n1;i++)
        c[i]=a[i];
    for(i=0;i<n2;i++)
        c[i+n1]=b[i];
    printf("\nAfter merge array...");
    for(i=0;i<n;i++)
        printf("\t%d",c[i]);
    selection_Sort(c);
}
void printArray(int ar[])
{
  printf("\nAfter sort array..");
  for(i=0;i<n;i++)
    printf("\t %d",ar[i]);
}
void selection_Sort(int a[])
{
    int tmp;
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
  printArray(a);
}
int main()
{
    int a[n1]={1,12,11,10,9,8,7},b[n2]={2,3,5,6,4};
    merge(a,b);
}
