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
    tail->next=newNode;
    
  }

};

int main()
{


return 0;
}