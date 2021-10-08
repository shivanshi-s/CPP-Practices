  #include<iostream>
  using namespace std;
  struct node {
    int data;
    struct node *next;
  }*front=NULL,*rear=NULL;

  void enqueue(int x)
  {
    struct node *t;
    t = new node;
    if ( t== NULL )
          cout<<"Queue is null "<<endl;
    else {
      t->data = x;
      t->next = NULL;
      if(front==NULL)
          front = rear = t;
      else {
          rear->next = t;
          rear = t;
      }
    }
  }

  int dequeue()
  {
    int x = -1;
    struct node *t;
    if(front == NULL)
        cout<<"Queue is Empty"<<endl;
    else {
      x = front->data;
      t  = front;
      front = front->next;
      delete(t);
    }
    return x;
  }

  void display()
  {
    struct node *p;
    while(p!= NULL)
    {
      cout<<p->data<<" ";
      p = p->next;
    }
    cout<<endl;
  }

  int main()
  {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    cout<<dequeue();
    display();
    return 0;
  }
