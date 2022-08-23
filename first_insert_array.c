#include <stdio.h>
int main()
 {
    int i,j,array[5]={2,3,4,5};

    for (j=sizeof(array)/sizeof(int) - 1; j>0 ; j--) 
    {
        array[j] = array[j-1];
    }
    array[0] = 1;

    for (i = 0; i < sizeof(array)/sizeof(int); i++)
        printf("%d\n", array[i]);


    return 0;
}