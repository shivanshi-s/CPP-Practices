#include<iostream>
using namespace std;

struct node {
  struct node *lchild;
  int data;
  struct node *rchild;
}*root = NULL;

void insert(int key)
{
  struct node *t = root;
  struct node *r, *p;
  if(root == NULL)
  {
    p = new node;
    p->data = key;
    p->lchild = p->rchild = NULL;
    root = p;
    return;
  }

  while(t !=NULL)
  {
    r = t;
    if ( key < t->data)
        t = t->lchild;
    else if(key > t->data)
        t = t->rchild;
    else
        return;
  }

  p = new node;
  p->data = key;
  p->lchild = p->rchild = NULL;

  if(key < r->data) r->lchild = p;
  else r->rchild = p;
}

void inorder(struct node *p)
{
  if (p)
  {
    inorder(p->lchild);
    cout<<p->data<<" ";
    inorder(p->rchild);
  }
}

struct node * search(int key)
{
  struct node *t = root;
  while( t!= NULL)
  {
      if(key == t->data)
          return t;
      else if(key < t->data)
          t = t->lchild;
      else
          t = t->rchild;
  }
  return NULL;
}

int main()
{
  struct node *temp;
  insert(10);
  insert(5);
  insert(20);
  insert(8);
  insert(30);

  inorder(root);
  cout<<endl;

  temp = search(20);
  if(temp != NULL)
    cout<<"Element is found : "<<temp->data;
  else
      cout<<"Element not found!"<<endl;
  return 0;
}
