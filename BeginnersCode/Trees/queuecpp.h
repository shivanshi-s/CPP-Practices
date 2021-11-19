#include<stdio.h>
#ifndef queuecpp_h
#define queuecpp_h

class node {
public:
  node *lchild;
  int data;
  node *rchild;
};

class queue {
private:
  int front;
  int rear;
  int size;
  node **Q;
public:
  queue(){
    front = rear = -1;
    size = 10;
    Q = new node*[size];
  }
  queue(int size)
  {
    front = rear = -1;
    this->size = size;
    Q = new node*[this->size];
  }

  void enqueue(node *x);
  node* dequeue();
  void display();
};

void queue::enqueue(node *x)
{
  if(rear == size-1)
    printf("Queue is Full");
  else
        {
          rear++;
          Q[rear] = x;
        }
}

node * queue::dequeue()
{
  node* x=NULL;
  if(front==rear)
    printf("Queue is Empty\n");
  else
      {
        x = Q[front+1];
        front++;
      }
      return x;
}

void queue::display()
{
  for(int i = front+1; i <= rear; i++)
      printf("%d ",Q[i]);
    printf("\n");
}

#endif
