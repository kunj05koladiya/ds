// Middle insert
#include<stdio.h>
#include<stdlib.h>      /*  Work In Progrss */
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
void insert_middle(struct node *head)
{
    int pos,val,i;
    struct node *ptr,*tmp;
    struct node *n_node;
    n_node=(struct node *)malloc(sizeof(struct node));
    if(n_node==NULL)
        printf("\n not possible to insert!!");
    else
    {
        n_node->data=ptr;
        n_node->next=NULL;
        tmp=head;

        for(i=2;i<=pos-1;i++)
        {
            tmp=tmp->next;
            if(tmp==NULL)
                break;
        }
        if(tmp!=NULL)
        {
            n_node->next=tmp->next;
            tmp->next=n_node;
        }
        else
            printf("\n sorry!");
    }
}


int main()
{
    int pos,val;
    struct node *head=NULL;
    last_insert(&head,21);
    last_insert(&head,22);
    last_insert(&head,23);
    last_insert(&head,24);
    last_insert(&head,25);
    printf("\n linked list:");
    head_count(head);

    printf("\n enter pos:");
    scanf("%d",&pos);
    printf("enter val:");
    scanf("%d",&val);
    insert_middle(&head);
    printf("\n linked list:");
    head_count(head);
   


    
    
    return 0;
}
 