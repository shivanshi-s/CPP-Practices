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
struct node *rinsert(struct node *p, int key)
{ struct node *t = NULL;
  if(p == NULL)
  {
    t = new node;
    t->data = key;
    t->lchild = t->rchild = NULL;
    return t;
  }

  if(key < p->data)
      p->lchild = rinsert(p->lchild,key);
  else if (key > p->data)
      p->rchild = rinsert(p->rchild,key);

  return p;
}

int Height(struct node *p)
{ int x,y;
  if (p == NULL)return 0;
  x = Height(p->lchild);
  y = Height(p->rchild);
  return x>y?x+1 : y+1;
}

struct node *InPre(struct node *p)
{
  while(p && p->rchild != NULL)
    p = p->rchild;

  return p;
}

struct node *InSucc(struct node *p)
{
  while(p && p->lchild != NULL)
    p = p->lchild;

  return p;
}

struct node *Delete(struct node*p, int key)
{
  struct node *q;

  if(p == NULL)
      return NULL;
  if(p->lchild == NULL && p->rchild == NULL)
  {
    if(p == root)
      root = NULL;
    delete(p);
    return NULL;
  }

  if(key < p->data)
      p->lchild = Delete(p->lchild,key);
  else if (key > p->data)
      p->rchild = Delete(p->rchild,key);
  else {
      if(Height(p->lchild) > Height(p->rchild))
        {
          q = InPre(p->lchild);
          p->data  = q->data;
          p->lchild = Delete(p->lchild,q->data);
        }
        else
        {
          q = InSucc(p->rchild);
          p->data  = q->data;
          p->rchild = Delete(p->rchild,q->data);
        }

  }
  return p;
}
int main()
{
  struct node *temp;
  root = rinsert(root,10);
  rinsert(root,5);
  rinsert(root,20);
  rinsert(root,8);
  rinsert(root,30);

  Delete(root,20);

  inorder(root);
  cout<<endl;

  temp = search(20);
  if(temp != NULL)
    cout<<"Element is found : "<<temp->data;
  else
      cout<<"Element not found!"<<endl;
  return 0;
}
