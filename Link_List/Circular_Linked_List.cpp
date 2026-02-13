#include<iostream>
using namespace std;

class Node{
  public:
int data;
Node* next;
Node(int val)
{
  data=val;
  next=NULL;
}
};

class Circular
{
  Node* head;
  Node* tail;
  public:
  Circular()
  {
    head=tail=NULL;
  }

  void insert_head(int val)
  {
    Node* newNode=new Node(val);

    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      newNode->next=head;
      head=newNode;
      tail->next=head;
    }
  }

  void insert_tail(int val)
  {
    Node* newNode=new Node(val);

    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      newNode->next=head;
      tail->next=newNode;
      tail=newNode;
    }
  }

  void delete_head()
  {
    if(head==NULL)
    {
      return ;
    }
    if(head==tail)
    {
      head =tail=NULL;
      delete head;
    }
    else
    {
      Node* temp=head;
      head=head->next;
      tail->next=head;

      temp->next=NULL;
      delete temp;
    }
  }

  void delete_tail()
  {
    if(head==NULL)
    {
      return ;
    }
    if(head==tail)
    {
      head =tail=NULL;
      delete head;
    }
    else
    {
      Node* temp=tail;
      Node* prev=head;

      while (prev->next!=tail)
      {
        prev=prev->next;
      }
      tail=prev;
      tail->next=head;
      temp->next=NULL;
      delete temp;
    }

  }
  void print()
  {
    Node* temp=head->next;
    cout<<head->data<<",";
    while (temp!=head)
    {
      cout<<temp->data<<",";
      temp=temp->next;
    }
    
  }
};

int main()
{
  Circular ll;
  ll.insert_head(1);
  ll.insert_head(2);
  ll.insert_head(3);
  ll.insert_head(4);
  ll.insert_head(5);
  ll.insert_tail(2);
  ll.insert_tail(3);
  ll.insert_tail(4);
  ll.insert_tail(5);
  ll.insert_tail(6);
  ll.delete_head();
  ll.delete_tail();
  ll.print();
return 0;
}