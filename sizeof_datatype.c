#include<stdio.h>
int main()
{
    int a=10;
    float b=2.12;
    char c='k';
    double d='k';
    long double e='k';
    long int g=12;

    printf("\n int:%d",sizeof(a));
    printf("\n float:%d",sizeof(b));
    printf("\n char:%d",sizeof(c));
    printf("\n double:%d",sizeof(d));
    printf("\n long double:%d",sizeof(e));
  
    printf("\n long int:%d",sizeof(g));

    return 0;
}