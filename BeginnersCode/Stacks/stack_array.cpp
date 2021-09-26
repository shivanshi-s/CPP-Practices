#include<iostream>
using namespace std;

struct stack {
  int size;
  int top;
  int *s;
};
void create(struct stack *st)
{
  cout<<"Enter size : ";
  cin>>st->size;
  st->top = -1;
  st->s = (int *)malloc(st->size * sizeof(int));
}

void display(struct stack st)
{ int i;
  for( i = st.top; i>=0; i--)
  {
    cout<<st.s[i]<<" ";
  }
  cout<<endl;
}

void push(struct stack *st, int index)
{
  if( st->top == st->size - 1)
      cout<<"stack overflow ";
  else {
    st->top++;
    st->s[st->top] = index;
  }
}

int pop(struct stack *st)
{
  int x = -1;
  if(st->top == -1)
        cout<<"Stack underflow ";
  else {
    x = st->s[st->top--];
  }
  return x;
}

int peek(struct stack st, int pos)
{   int x =-1;
    if(st.top - pos+1 < 0)
            cout<<"Invalid Position ";
    else x = st.s[st.top - pos +1];
    return x;
}

int isEmpty(struct stack st)
{
    if(st.top == 1)
            return 1;
        return 0;
}

int isFull(struct stack st)
{
    return st.top == st.size-1;
}

int stackTop(struct stack st)
{
    if(!isEmpty(st))
        return st.s[st.top];
    return -1;
}

int main()
{
  struct stack st;
  create(&st);
  push(&st,10);
  push(&st,20);
  push(&st,30);
  push(&st,40);
  push(&st,50);

  display(st);

  cout<<"element popped is : "<<pop(&st)<<endl;

  display(st);

  cout<<"element at given pos : "<<peek(st,3);
}
