/*  SELF REFERENTIAL STRUCTURE */
#include<stdio.h>
struct data
{
    int n;
    char c;
    struct data *ptr;
};
int main()
{
    struct data var1,var2;

    var1.n=10;
    var1.c='A';
    var1.ptr=NULL;

    var2.n=20;
    var2.c='B';
    var2.ptr=NULL;

    var2.ptr=&var1;
    printf("\n\t%d %c",var1.n,var1.c);
    printf("\n\t%d %c",var2.n,var2.c);

    // printf("\n\t %d %c",var1.ptr->n,var1.ptr->c);
    printf("\n\t %d %c",var2.ptr->n,var2.ptr->c);


}

