//2 methods - transposition and move to head
//tr - change val
//move - key bought to beginning

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

//iterative version
/*struct node * lsearch(struct node *p, int key)
{
  while(p!=NULL)
  {
    if(key==p->data)
      return p;
    p=p->next;
  }
} */

//move to head version
struct node * lsearch(struct node *p, int key)
{
  struct node *q;
  while(p!=NULL)
  {
    if(key==p->data)
    {
      q->next = p->next;
      p->next = first;
      first = p;
      return p;
    }
    q=p;
    p=p->next;
  }
}

//recursive function
struct node * Rsearch(struct node *p, int key)
{
  if(p==NULL)
    return NULL;
  if(key==p->data)
    return p;
  return Rsearch(p->next,key);
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
  int arr[] = {4,2,5,6,73,1,12};
  create(arr,7);
  struct node * temp;
  temp = lsearch(first,5);
  cout<<"key found : "<<temp->data<<endl;

  display(first); //to see head first search

  return 0;
}
