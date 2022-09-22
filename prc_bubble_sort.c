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
  printArray(a);
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
}
int main()
{
  int a[100]={9,8,7,6,5,4,3,2,1,0},min=40,max=90,val;
  bubble_Sort(a);
  for(i=0;i<n;i++)
      printf("%d\t",a[i]);
  return 0;
}