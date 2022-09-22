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
void selection_Sort(int a[])
{
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
  int a[100],min=40,max=90,val;
  for(i=0;i<n;i++)
    a[i]=((rand()%max-min+1)+min);
  selection_Sort(a);
  return 0;
}