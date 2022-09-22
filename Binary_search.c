#include<stdio.h>
int len,val,l,u,mid;
int BinarySearch(int str[])
{
    printf("Enter the Value:");
    scanf("%d",&val);
    l = 0,u = len;
    if(l<u)
    {
        do{
            mid = (l+u) /2;
            if(str[mid] == val){
                printf("\n position of Element:%d",mid+1);
            }else if(val > str[mid]){
                l = mid + 1;
            }else{
                u = mid - 1;
            }
        }while(str[mid] != val);
    }
}
int main()
{
    int str[5];
    printf("\n Enter length of the Array:");
    scanf("%d",&len);
    printf("\n Enter the Element of the Array :");
    printf("\n");
    for (int i = 0; i < len; i++)
    {
        scanf("\n %d",&str[i]);
    }
    BinarySearch(str);
    return 0;
}