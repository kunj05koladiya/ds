#include <stdio.h>      
#define n 5          // Queue implementation in C
int a[n],front = -1,rear = -1;
void insert(int value) 
{
  if (rear == n - 1)
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

void delete() 
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
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    display();

    delete();
    delete();
    delete();

    display();

    return 0;
}

