#include <stdio.h>      
#define size 6          // Queue implementation in C
int a[size],front = -1,rear = -1;
void rear_insert(int value) 
{
  if (rear == size - 1)
    printf("\nQueue is Full!!");
  else 
  {
    if (front == -1)
      front = 0;
    rear++;
    a[rear] = value;
    printf("\nInserted -> %d", value);
  }
}

void front_delete() 
{
  if (front == -1)
    printf("\nQueue is Empty!!");
  else 
  {
    printf("\nDeleted : %d", a[front]);
    ++front;
    if (front == rear)
      front = rear = -1;
  }
}
void display() 
{
  if (rear == -1)
    printf("\nQueue is Empty!!!");
  else 
  {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("%d\t", a[i]);
  }
  printf("\n");
}

int main()
{   
    rear_insert(1);
    rear_insert(2);
    rear_insert(3);
    rear_insert(4);
    rear_insert(5);
    rear_insert(6);

    display();

    front_delete();
    front_delete();
    front_delete();

    display();

    return 0;
}

