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
  first->data = arr[0];
  first->next = NULL;
  last = first;

  for(int i=1; i<n; i++)
  {
    temp = new node;
    temp->data = arr[i];
    temp->next = NULL;
    last->next = temp;
    last = temp;
  }
}



int max(struct node *p)
{
  int max = INT32_MIN;
  while(p!=NULL)
  {
    if(p->data > max)
      max = p->data;
    p = p->next;
  }
  return max;
}


int main()
{
  int A[] = {3,5,7,10,15};
  create(A,5);
    int output;
 output = max(first);
 cout<<"largest is "<<output;
  return 0;
}
