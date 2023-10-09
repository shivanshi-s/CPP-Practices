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

int deletion(struct node *p, int index)
{
  struct node *q;
  int i,x;
  if(index < 0 || index > length(head))
      return -1;
    if(index == 1)
    {
      while(p->next != head)p=p->next;
      x = head->data;
      if(head == p)
      {
        delete(head);
        head = NULL;
      }
      else{
        p->next = head->next;
        delete(head);
        head = p->next;
      }
    }
  else {
    for(i = 0; i<index-2; i++)
          p =p->next;
      q =p->next;
      p->next = q->next;
      x = q->data;
      delete(q);
  }
  return x;
}

int main()
{
  int arr[] = {2,3,4,5,6};
  create(arr,5);
  display(head);
  deletion(head,2);
  display(head);
  return 0;
}
