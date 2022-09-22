// last delete
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void head_count(struct node *head)
{
    int cnt=0;
    if(head==NULL)
        printf("\n list is empty");
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("\t%d",ptr->data);
        cnt++;
        ptr=ptr->next;
    }
    printf("\ncount:%d",cnt);
}
void last_insert(struct node **head_ref,int new_data)
{
    struct node *ptr=*head_ref;
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->next=NULL;
    temp->data=new_data;
    if (*head_ref==NULL)
    {
        *head_ref=temp;
        return;
    }
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=temp;
    return;
}

void last_delete(struct node **head)
{
    struct node *ptr=*head;
    // struct node *preptr;
    if(*head==NULL)
    {
        printf("\n list is empty");
        return;
    }
    if(ptr->next==NULL)
    {
       // printf("\t%d deleted",(*head)->data);
        *head=NULL;
        return;
    }
    while(ptr->next->next!=NULL)
    {
        // preptr=ptr;
        ptr=ptr->next; 
    }   
    ptr->next=NULL;
    //printf("\t %d deleted",ptr->data);
    
}
int main()
{
    struct node *head=NULL;
    last_insert(&head,21);
    last_insert(&head,22);
    last_insert(&head,23);
    last_insert(&head,24);
    last_insert(&head,25);
    printf("\n linked list:");
    head_count(head);
    printf("\n\n");
    last_delete(&head);
    last_delete(&head);
    last_delete(&head);
    


    printf("\n linked list:");
    head_count(head);
    return 0;
}
 