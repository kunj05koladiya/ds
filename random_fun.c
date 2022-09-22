#include<stdio.h>
#include<stdlib.h>
// int main()
// {
//     int i;
//     for(i=1;i<=10;i++)
//         printf("\t%d",rand());
// }

/*int main()
{
    int i;
    printf("\nrandom number of 1 to 100");
    printf("\n");
    for(i=1;i<=10;i++)
        printf("\t%d",rand()%100+1);
}*/

int main()
{
    int i,min,max;
    printf("\nenter minimum value:");
    scanf("%d",&min);
    printf("\nenter maximum value:");
    scanf("%d",&max);
    printf("\n");
    for(i=1;i<=10;i++)
        printf("\t%d",(rand()%(max-min+1))+min);
}