#include<stdio.h>
#include<stdlib.h>
struct node                         /* Work In Progress */
{
    int data;
    struct node *next;
};

void last_insert(struct node **head_ref,int n_node)
{
    //int new_data;
    struct node *ptr=*head_ref;
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->next=NULL;
    temp->data=n_node;
    if (*head_ref==NULL)
    {
        *head_ref=temp;
        return;
    }
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=temp;
    free(ptr);
    printf("\n\tenter value:");
    scanf("%d",&n_node);
    return;
}
void addFirst(struct node **head)
{
    
      struct node *n_node = (struct node *)malloc(sizeof(struct node));
      n_node->data = n_node;
      n_node->next = *head;
      *head = n_node;
    printf("\n\tenter value:");
    scanf("%d",&n_node);
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
void deleteFirst_Node(struct node **head)
{
    struct node *ptr;
    if(*head == NULL)
    {
        printf("\nList is  empty");
    }
    else
    {
        ptr = *head;
        *head =ptr->next;

        printf("\ndeleted:%d", ptr->data);
    }
}
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
int main()
{
    struct node *head=NULL;
    struct node *n_node;
    struct node *ptr;
    int ch;
    do
    {
    printf("\n<--------insert--------->    \t\t<---------delete--------->");
    printf("\nfor last insert -->press 1   \t\tfor last delete -->press 3");
    printf("\nfor first insert-->press 2   \t\tfor front delete-->press 4");
    printf("\n<---------------------------------------------------------------->");
    printf("\nfor show        -->press 5   \t\tfor exit        -->press 0");
    printf("\n\nenter choice:");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        last_insert(&head,n_node);
        break;

    case 2:
        addFirst(&head);
        break;

    case 3:
        last_delete(&head);
        break;

    case 4:
        deleteFirst_Node(&head);
        break;
    
    case 5:
        head_count(head);
        break;

    case 0:
        printf("\n------exit------");
        break;

    default:
        printf("wrong choice!!");
        break;
    }
    }while(ch!=0);
}
 
// struct node *head;
// void last_insert();
// void addFirst();
// void last_delete();
// void deleteFirst_Node();
// void head_count();