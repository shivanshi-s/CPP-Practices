#include<iostream>
using namespace std;

struct node
{
  int data;
  struct node *next;
}*head;

int length(struct node *p)
{
  int len = 0;
  do {
    len++;
    p = p->next;
  } while(p!=head);
  return len;
}

void create(int arr[],int n)  //creation
{
  int i;
  struct node *t, *last;
  head = new node;
  head->data = arr[0];
  head->next = head;
  last = head;

  for (int i=1; i<n; i++)
  {
    t = new node;
    t->data = arr[i];
    t->next = last->next;
    last->next = t;
    last = t;
  }
}

void display(struct node *h) //display
{
  do {
    cout<<h->data<<" ";
    h = h->next;
  } while(h != head);
  cout<<endl;
}

void insert(struct node *p,int index,int x)  //insertion
{
  struct node *t;
  int i;

  if(index <0 || index > length(p))
      return;

  if(index ==0)
  {
    t = new node;
    t->data = x;
    if(head == NULL)
    {
      head = t;
      head->next = head;
    }
    else
    {
      while(p->next != head) p=p->next;
      p->next = t;
      t->next = head;
      head = t;
    }
  }
  else {
    for(i=0;i<index-1;i++) p=p->next;
    t= new node;
    t->data = x;
    t->next = p->next;
    p->next = t;
  }
}


int main()
{
  int arr[] = {2,3,4,5,6};
  create(arr,5);

  insert(head,2,10);

  display(head);


  return 0;
}
