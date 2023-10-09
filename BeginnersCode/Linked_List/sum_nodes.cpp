#include<iostream>
using namespace std;

struct node
{
  int data;
  struct node *next;
}*first;

void create(int A[],int n)
{
  int i;
  struct node *temp, *last;
  first = new node;
  first->data = A[0];
  first->next= NULL;
  last = first;

  for(i=1;i<n;i++)
  {
    temp = new node;
    temp->data = A[i];
    temp->next = NULL;
    last->next = temp;
    last = temp;
  }
}

void add(struct node *p)
{ int sum = 0;
  while(p!=NULL)
  {
    sum = sum + p->data;
    p=p->next;
  }
  cout<<"sum of the data is : "<<sum;
}


int main()
{
  int A[] = {3,5,7,10,15};
  create(A,5);

 add(first);
 // cout<<x;
  return 0;
}
