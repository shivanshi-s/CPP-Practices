#include<iostream>
using namespace std;

class node {
public:
  int data;
  node *next;
};

class stack{
private:
  node *top;
public:
  stack(){top = NULL;}
  void push(int x);
  int pop();
  void display();
};

void stack::push(int x)
{
  node *t = new node;
  if(t == NULL)
      cout<<"OVERFLOW!"<<endl;
  else {
    t->data = x;
    t->next = top;
    top = t;
  }
}

int stack::pop()
{
  int x = -1;
  node *p;
  if(top == NULL)
        cout<<"UNDERFLOW"<<endl;
  else {
    p = top;
    top=top->next;
    x = p->data;
    delete(p);
  }
  return x;
}

void stack::display()
{
  int x = -1;
  node *p = top;
    while(p!=NULL)
    {
      cout<<p->data<<" ";
      p = p->next;
    }
  cout<<endl;
}

int main()
{
  stack stk;
  int x;
  stk.push(10);
  stk.push(20);
  stk.push(30);
  cout<<"enter an element to push : "<<endl;
  cin>>x;
  stk.push(x);
  stk.display();
  cout<<"popping an element....."<<endl;
  //stk.pop();
  cout<<"popped element is  : "<<stk.pop()<<endl;
  stk.display();

  return 0;
}
