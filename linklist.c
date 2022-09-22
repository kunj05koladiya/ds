// first insert
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void addFirst(struct node **head, int val)
{
      struct node *new_data = malloc(sizeof(struct node));
      new_data->data = val;

      new_data->next = *head;

      *head = new_data;
}

void printList(struct node *head)
{
    int cnt=0;
    struct node *temp = head;
    while(temp != NULL)
    {
         printf("%d\t", temp->data);
         cnt++;
         temp = temp->next;
    }
    printf("\ncount:%d",cnt);
}
int main()
{
     struct node *head = NULL;

     addFirst(&head,10);
     addFirst(&head,20);
     addFirst(&head,30);
     addFirst(&head,40);

     printList(head);

     return 0;
}