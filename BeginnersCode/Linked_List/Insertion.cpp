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

void display(struct node *p)
{
  while(p!=NULL)
  {
    cout<<p->data<<" ";
    p=p->next;
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

void insert(struct node *p, int index,int x)
{
  struct node *temp;
  if(index < 0 || index > count(p))
    return;
  temp = new node;
  temp->data = x;
  if(index == 0)
  {
    temp->next = first;
    first = temp;
  }
  else {
    for(int i=0; i< index-1; i++)
      p=p->next;
    temp->next = p->next;
    p->next = temp;
  }
}

//sorted insertion in Linked List

void sorted_insertion(struct node *p, int x)
{
    struct node *t, *q=NULL;
    t = new node;
    t->data = x;
    t->next = NULL;

    if(first == NULL)
        first = t;
    else
        {
            while(p && p->data < x)
            {
                q=p;
                p=p->next;
            }
            if(p==first)
            {
                t->next = first;
                first = t;
            }
            else
            {
                t->next = q->next;
                q->next = t;
            }
        }
}

int main()
{
  int arr[] = {12,34,35,46,47};
  create(arr,5);
  //insert(first,5,10);
  sorted_insertion(first,30);
  display(first);
  return 0;
}
