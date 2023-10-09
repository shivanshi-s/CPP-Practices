#include<iostream>
using namespace std;

struct node {
  int data;
  struct node *next;
}*first=NULL,*second=NULL,*third=NULL;

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
void create2(int arr[],int n)
{
  struct node *temp, *last;
  second = new node;
  second->data  = arr[0];
  second->next = NULL;
  last = second;

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

void merge(struct node *p, struct node *q)
{
    struct node *last;
    if(p->data < q->data)
    {
        third = last = p;
        p = p->next;
        third->next = NULL;
    } else
    {
        third = last = q;
        q = q->next;
        third->next = NULL;
    }

    while (p && q)
    {
        if(p->data < q->data)
        {
            last->next = p;
            last=p;
            p=p->next;
            last->next;
        }
        else
        {
            last->next = q;
            last=q;
            q=q->next;
            last->next;
        }
    }

    if(p)last->next = p;
    if(q)last->next = q;
}

int main()
{
  int arr[] = {12,34,35,46,47};
  int arr2[] = {11,24,23,56,75};
  create(arr,5);
  create2(arr2,5);

  merge(first,second);

  display(third);

  cout<<endl;

  return 0;
}
