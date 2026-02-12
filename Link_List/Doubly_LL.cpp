#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  Node* prev;

  Node(int val)
  {
    data=val;
    next=prev=NULL;
  }
};

class Doubly{
  Node* head;
  Node* tail;
  public:

  Doubly()
  {
    head=tail=NULL;
  }

  void push_front(int val)
  {
    Node* newNode = new Node(val);

    if(head ==NULL)
    {
      head=tail=newNode;
    }
    else
    {
      newNode->next=head;
      head->prev=newNode;
      head=newNode;
    }
  }

  void push_back(int val)
  {
    Node* newNode = new Node(val);
    if(head ==NULL)
    {
      head=tail=NULL;
    }
    else
    {
      newNode->prev=tail;
      tail->next=newNode;
      tail=newNode;
    }
  }

  void pop_front()
  {
    if(head == NULL)
    {
       cout<<"Empty";
       return ;
    }
    Node* temp=head;
    head=head->next;
    if(head!=NULL){
    head->prev=NULL;
    }
    temp->next=NULL;
    delete temp;
  }
  void pop_back()
  {
    if(head == NULL)
    {
       cout<<"Empty";
       return ;
    }
    Node* temp =tail;
    tail=tail->prev;
    if(tail!=NULL)
    {
      tail->next=NULL;
    }
    temp->prev=NULL;
    delete temp;
  }

  void print()
  {
    Node* temp=head;
    while (temp!=NULL)
    {
      cout<<temp->data<<",";
      temp=temp->next;
    }
    
  }
};

int main()
{
  Doubly LL;
  LL.push_front(1);
  LL.push_front(2);
  LL.push_front(3);
  LL.push_front(4);
  LL.push_back(2);
  LL.push_back(3);
  LL.push_back(4);
  LL.push_back(5);
  LL.pop_front();
  LL.pop_back();

  LL.print();

return 0;
}