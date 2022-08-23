#include<stdio.h>
int main()
{
    printf("\n%d",1<2);
    printf("\n%d",1>2);

    printf("\n\n%d",1>2>3);
    printf("\n%d",1<2<3);

    printf("\n\n%d",3>2>1);
    printf("\n%d",3<2<1);

    printf("\n\n%d",0||0||1);
    printf("\n%d",1&&0&&0);

    return 0;
}