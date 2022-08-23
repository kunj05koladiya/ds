#include <stdio.h>
void main()
{
    int pos, i, n, value,ch, arr[100];
    printf("First enter number \n");
    scanf("%d", &n);
    arr[n];
    for(i = 0; i < n; i++)
    {
        printf("Please give value for index %d : ",i);
        scanf("%d",&arr[i]);
    }
    
    printf(" give a number to insert at end \n");
    scanf("%d", &value);
    arr[n] = value;
    printf("Element %d is inserted at %d index \n",value,n);
    printf("New Array is: \n ");
     
    for(i = 0; i < n+1; i++)
    {
       printf("%d \t",arr[i]);
    }
}