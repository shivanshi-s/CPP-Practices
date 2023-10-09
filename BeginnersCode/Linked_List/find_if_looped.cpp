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

void display(struct node *p)
{
  while(p!=NULL)
  {
    cout<<p->data<<" ";
    p=p->next;
  }
}

int isLoop(struct node *f)
{
  node *p, *q;
  p = q = f;
  do {
    p = p->next;
    q = q->next;
    q=q?q->next:q; //conditional = if q not equal to null then move to next otherwise remain there
  }
  while (p && q && p!=q);

 if(p==q)
return 1;
else
return 0;
}

int main()
{

    struct node *t1,*t2; //looping conditions
  int arr[] = {3,5,7,10,15};
  create(arr,5);

     t1=first->next->next;
 t2=first->next->next->next->next;
    t2->next=t1;

  if(isLoop(first) == true)
  {cout<<"its looped "<<endl<<"code exit : "<<isLoop(first);}
  else {cout<<"not looped "<<endl;}


  return 0;
}
