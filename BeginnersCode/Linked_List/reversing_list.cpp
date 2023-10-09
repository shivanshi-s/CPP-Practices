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

void reverse1(struct node *p)
{
  int *a;
  int i;
  struct node *q =p;
  a=(int *)malloc(sizeof(int)*count(p));
  while(q!=NULL)
{
    a[i]=q->data;
    q=q->next;
    i++;
}
    q=p;
    i--;
while(q!=NULL)
{
    q->data=a[i];
    q=q->next;
    i--;
}
}

//recursively

void reverse2(struct node *p)
{
    struct node *q=NULL,*r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

int main()
{
  int arr[] = {12,34,35,46,47};
  create(arr,5);

  reverse2(first);
  display(first);
  return 0;
}
