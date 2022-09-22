#include<stdio.h>
int len,val;
int LinearSearch(int str[])
{
    printf("Enter the Value:");
    scanf("%d",&val);    
    for(int i=0;i<len;i++){
        if(str[i] == val){
            printf("\nPosition of the Element: %d",i + 1);
        }
    }

}
int main()
{
    int str[5];
    printf("\n Enter the length of Array:");
    scanf("%d",&len);
    printf("\n Enter the Element of Array :");
    printf("\n");
    for (int i = 0; i < len; i++)
    {
        scanf("\n %d",&str[i]);
    }
    LinearSearch(str);
    return 0;
}