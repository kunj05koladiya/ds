#include<stdio.h>
int main()
{
    int i;
    for(;;)
    {
        if(i>=10)
            break;
        else
            printf("\t%d",i++);
    }


    return 0;
}