#include<iostream>
using namespace std;

struct queue {
  int size;
  int front;
  int rear;
  int *Q;
};

void enqueue(struct queue *q, int x)
{
  if( (q->rear+1)%q->size == q->front)
          cout<<"QUEUE IS FULL";
  else {
    q->rear =(q->rear+1)%q->size;
    q->Q[q->rear] = x;
  }
}
int dequeue(struct queue *q)
{
  int x =-1;
  if(q->front == q->rear)
        cout<<"Queue is Empty"<<endl;
  else {
    q->front = (q->front+1)%q->size;
    x = q->Q[q->front];
  }
  return x;
}

void display(struct queue q)
{
  int i = q.front+1;
  do {
    cout<<q.Q[i]<<" ";
    i = (i+1)%q.size;
  } while(i != (q.rear+1)%q.size);
  cout<<endl;
}
int main()
{
  struct queue q;
  cout<<"---QUEUE IS A FIFO DATA STRUCTURE---";
  cout<<"Enter size : ";
  cin>>q.size;
  q.Q =(int *)malloc(q.size*sizeof(int));
  q.front = q.rear = -1;
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    enqueue(&q,50);
    display(q);
    cout<<"Item removed "<<dequeue(&q)<<endl;
    display(q);
}
