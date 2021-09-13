//creating and displaying a Linked List

#include<iostream>
using namespace std;

struct node
{
  int data;
  struct node *next;  //self refrencial structure
}*first;

void create(int A[],int n)
{
  int i;
  struct node *temp, *last;
  first = new node;   //new node created
  first->data = A[0];  //first node given 0 index of array
  first->next= NULL;    //next is null right now
  last = first;         //last is first, list is empty right now

  for(i=1;i<n;i++)
  {
    temp = new node;
    temp->data = A[i];
    temp->next = NULL;
    last->next = temp;
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


int main()
{
  int A[] = {3,5,7,10,15};
  create(A,5);

  display(first);
  return 0;
}
