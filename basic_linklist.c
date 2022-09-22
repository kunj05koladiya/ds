#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head=NULL;
    head=(struct node *)malloc(sizeof(struct node));       // <-- this line is compulsory
    head->data=10;
    head->link=NULL;

    struct node *current=NULL;
    current=(struct node *)malloc(sizeof(struct node));           
    current->data=20;
    current->link=NULL;

    struct node *current1=NULL;
    current1=(struct node *)malloc(sizeof(struct node));           
    current1->data=30;
    current1->link=NULL;

    head->link=current;
    current->link=current1;

    printf("%d %d %d \t",head->data,head->link->data,head->link->link->data);
}
