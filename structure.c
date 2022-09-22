#include<stdio.h>
struct area                                                 //      '->' ---> 'point to'
{
    int length,breath;
};
int main()
{
    struct area rect={30,5};
    printf("\nlength:%d",rect.length);
    printf("\nbreath:%d",rect.breath);
    printf("\narea:%d",rect.length*rect.breath);

    struct area *prect=&rect;                //pointer variable
    printf("\n\narea:%d",prect->length*prect->breath);        

    struct area *pprect=&rect;                  // input 
    printf("\n\nenter l&b:");
    scanf("%d %d",&pprect->length,&pprect->breath);
    printf("\narea:%d",pprect->length*pprect->breath);       

}