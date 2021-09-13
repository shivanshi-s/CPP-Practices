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

int sorted(struct node *p)
{
  struct node *q;
  int x  = -65536;
  while(p!=NULL)
  {
    if(p->data < x)
      return 0;
    x = p->data;
    p = p->next;
  }
  return 1;
}

int main()
{
  int arr[] = {12,34,35,46,47};
  create(arr,5);

  cout<<"Boolean val : "<<sorted(first)<<endl;
  display(first);
  return 0;
}
