#include <stdio.h>  
#include <stdlib.h>
#define n 10
void printArray(int a[])  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
    printf("\n");  
}   
void merge(int a[], int l, int mid, int h)    
{    
    printArray(a);
    int i, j, k;  
    int n1 = mid - l + 1;    
    int n2 = h - mid;    
      
    int LeftArray[n1], RightArray[n2]; //temporary arrays  
      
    /* copy data to temp arrays */  
    for (int i = 0; i < n1; i++)    
        LeftArray[i] = a[l + i];    
    for (int j = 0; j < n2; j++)    
        RightArray[j] = a[mid + 1 + j];    
      
    i = 0;      /* initial index of first sub-array */  
    j = 0;      /* initial index of second sub-array */   
    k = l;      /* initial index of merged sub-array */  
      
    while (i < n1 && j < n2)    
    {    
        if(LeftArray[i] <= RightArray[j])    
        {    
            a[k] = LeftArray[i];    
            i++;    
        }    
        else    
        {    
            a[k] = RightArray[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        a[k] = LeftArray[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2)    
    {    
        a[k] = RightArray[j];    
        j++;    
        k++;    
    }    
}     
void mergeSort(int a[], int l, int h)  
{  
    if (l < h)   
    {  
        int mid = (l + h) / 2;  
        mergeSort(a, l, mid);  
        mergeSort(a, mid + 1, h);  
        merge(a, l, mid, h);  
    }  
}    
int main()  
{  
     int a[100],min=10,max=90,i;
    for(i=0;i<n;i++)
        a[i]=(rand()%(max-min+1)+min);
    mergeSort(a,0,n-1);
    printArray(a);
    for(i=0;i<n;i++)
      printf("%d\t",a[i]);
    return 0;
}