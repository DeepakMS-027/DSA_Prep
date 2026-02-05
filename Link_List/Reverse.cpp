#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node* next;
  Node(int val)
  {
    data = val;
    next=NULL;
  }
};

class List
{
  public:
  Node* head;
  Node* tail;
  
  List()
  {
    head=tail=NULL;
  }

  void push_back(int val)
  {
    Node* newNode= new Node(val);
    if(head==NULL)
    {
      head=tail=newNode;
      return;
    }
    else{
      tail->next=newNode;
      tail= newNode;
      return ;
    }
  }
  void print()
  {
    Node* temp=head;
    while(temp!=NULL)
    {
      cout<<temp->data<<",";
      temp=temp->next;
    }
  }
  void reverse()
  {
    Node* current =head;
    Node* next=NULL;
    Node* pre=NULL;
    while(current!=NULL)
    {
      next=current->next;
      current->next=pre;
      pre=current;
      current= next; 
    }
    head=pre;
  }

};

int main()
{
  List ll;
  ll.push_back(1);
  ll.push_back(2);
  ll.push_back(3);
  ll.push_back(4);
  ll.push_back(5);

  // ll.print();
  ll.reverse();
  ll.print();



return 0;
}