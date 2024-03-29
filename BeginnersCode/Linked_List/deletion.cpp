#include<iostream>
using namespace std;

struct node {
  int data;
  struct node *next;
}*first;

void create(int arr[],int n)
{
  struct node *temp, *last;
  first = new node;
  first->data  = arr[0];
  first->next = NULL;
  last = first;

  for(int i=1; i<n; i++)
  {
    temp = new node;
    temp->data = arr[i];
    temp->next = NULL;
    last->next = temp; //connecting the nodes
    last = temp;
  }
}

int count(struct node *p)
{
  int l = 0;
  while(p)
  {
    l++;
    p=p->next;
  }
  return l;
}

void display(struct node *p)
{
  while(p!=NULL)
  {
    cout<<p->data<<" ";
    p=p->next;
  }

}

int Delete(struct node *p, int index)
{
  struct node *q;
  int x = -1;
  if(index < 1 || index > count(p))
  {
    return -1;
  }
  if(index==1)
  {
    q=first;
    x=first->data;
    first = first->next;
    delete q;
    return x;
  }
  else
  {
    for(int i = 0; i<index-1; i++)
    {
      q = p;
      p = p->next;
    }
    q->next = p->next;
    x = p->data;
    delete p;
    return x;
  }
}

int main()
{
  int arr[] = {12,34,35,46,47};
  create(arr,5);

  Delete(first,4);
  display(first);
  return 0;
}
