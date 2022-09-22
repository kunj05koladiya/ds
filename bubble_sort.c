#include<stdio.h>
#include<stdlib.h>
#define n 10
int i,j,tmp;
void printArray(int ar[])
{
  for(i=0;i<n;i++)
    printf("\t %d",ar[i]);
  printf("\n");
}
void bubble_Sort(int a[])
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
  printArray(a);
}
int main()
{
  int a[100],min=40,max=90,val;
  for(i=0;i<n;i++)
    a[i]=((rand()%max-min+1)+min);
  bubble_Sort(a);
  return 0;
}