#include<iostream>
using namespace std;
//NOT WORKINGGGGGGGGGGGGGGGGGGGGGGGG ERRRRRRRRRRORRRRRRRRRRRRRR
class node {
public:
  char data;
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

void stack::push(char x)
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

char stack::pop()
{
  char x = -1;
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

int isBalanced(char *exp)
{
  int i;
  for(i=0; exp[i]!='\0'; i++)
  {
    if(exp[i]=='(')
        push(exp[i]);
    else if(exp[i]==')')
    {
      if(top==NULL)
      return 0;
      pop();
    }
  }
  if(top==NULL)
    return 1;
  else
    return 0;
}
int main()
{
  char *exp ="((a+b)*(c-d))";
  cout<<isBalanced(exp)<<endl;
  return 0;
}
