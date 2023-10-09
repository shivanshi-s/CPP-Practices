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

int removingduplicate(struct node *p)
{
  struct node *q = p->next;
  while(q!=NULL)
  {
    if(p->data != q->data)
    {
      p = q;
      q = q->next;
    }
    else
    {
      p->next = q->next;
      delete(q);
      q = p->next;
    }
  }
}

int main()
{
  int arr[] = {10,10,20,30,40};
  create(arr,5);

  removingduplicate(first);
  display(first);
  return 0;
}
