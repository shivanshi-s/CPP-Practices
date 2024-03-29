#include<iostream>
using namespace std;

struct node {
  struct node *prev;
  int data;
  struct node *next;
}*first=NULL;

void create(int arr[],int n)
{
  struct node *t, *last;
  first = new node;
  first->data = arr[0];
  first->prev=first->next=NULL;
  last = first;

  for(int i=1; i<n; i++)
  {
    t = new node;
    t->data = arr[i];
    t->next = last->next;
    t->prev= last;
    last->next = t;
    last = t;
  }
}

void display(struct node *p)
{
  while(p!=NULL)
  {
    cout<<p->data<<" ";
    p=p->next;
  }
  cout<<endl;
}

int length(struct node *p)
{
  int len =0;
    while(p)
    {
      len++;
      p=p->next;
    }
  return len;
}

void insert(struct node *p,int index,int x)
{
  struct node *t;
  int i;

  if(index<0 || index> length(p))
      return;
  if(index==0)
  {
    t = new node;
    t->data = x;
    t->prev = NULL;
    t->next = first;
    first->prev = t;
    first = t;
  }
  else
  {
    for(i=0;i<index-1;i++)
     p=p->next;
    t= new node;
    t->data = x;
    t->prev =p ;
    t->next = p->next;
    if(p->next)p->next->prev = t;
    p->next = t;
  }
}

int main()
{
  int arr[] = {10,20,30,40,50};
  create(arr,5);
  cout<<"length is  : "<<length(first)<<endl;

    insert(first,5,25);
  display(first);
  return 0;
}
