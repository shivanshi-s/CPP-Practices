
#include<iostream>
using namespace std;

struct queue {
  int size;
  int front;
  int rear;
  int *Q;
};

void enqueue(queue *q, int x)
{
    if(q->rear == q->size-1)
            cout<<"Queue Overflow!....";
    else {
        q->rear++;
        q->Q[q->rear] = x;
    }
}

int dequeue(queue *q)
{
    int x = -1;
    if(q->front == q->rear)
            cout<<"queue empty - underflow ";
    else {
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}
void display(struct queue q)
{
    for(int i=q.front+1; i<= q.rear; i++)
        cout<<q.Q[i]<<" ";
    cout<<endl;
}

int main()
{
  struct queue q;
  cout<<"---QUEUE IS A FIFO DATA STRUCTURE---"
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
