#include<stdio.h>
int main()
{
    int a,b,c;
    a=printf("hello world...");
    printf("\n%d",a);
    printf("\n");
    b=scanf("%d%d",&a,&b);
    printf("\na:%d",a);
    printf("\nb:%d",b);


    return 0;
}