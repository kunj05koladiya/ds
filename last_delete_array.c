#include <stdio.h>
void main()             /*C Program to delete element at end of Array*/
{
    int position, i, n, value,ch;
    
    printf(" enter number of elements you want in Array:\n");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
        printf(" give value for index %d : ",i);
        scanf("%d",&arr[i]);
    }
    value=arr[n-1];                                             //assigning last value in value variable
    n=n-1;                                                      //here decreasing value to reduce size of array
    printf("New Array after deleting element at end \n ");
    for(i = 0; i < n; i++)
    {
       printf("%d \t",arr[i]);
    }
}