#include<stdio.h>
#include<stdlib.h>
#define n 10
void Merge(int a[],int l,int mid,int u)
{
    int b[100];
    int i=l,j=mid+1,k=l;
    while(i<=mid && j<=u)
    {
        if(a[i]<a[j])
            b[k++]=a[i++];
        else    
            b[k++]=a[j++];
    }
    while (i<=mid)
        b[k++]=a[i++];

    while (j<=u)
        b[k++]=a[j++];

    for ( i = l; i < u; i++)
        a[i]=b[i];
}
void merge_sort(int a[],int l,int u)
{
    int mid;
    if(l<u)
    {
        mid=(l+u)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,u);
        Merge(a,l,mid,u);
    }
}
void printArray(int a[])  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d\t", a[i]);  
    printf("\n");  
}  
int main()
{
    int a[100],min=10,max=90,i;
    for(i=0;i<n;i++)
        a[i]=(rand()%(max-min+1)+min);
    merge_sort(a,0,n-1);
    printArray(a);  
    return 0;
}