#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node* next;
  Node(int val){
    data=val;
    next=NULL;
  }
};
class List
{
  Node* head;
  Node* tail;
  public:
  List()
  {
    head=tail=NULL;
  }
  void push_front(int val)
  {
    Node* newNode= new Node(val);//create a new node 
    if(head == NULL){
      head=tail=newNode;
      return ;
    }
    else
    {
      newNode->next=head;
      head =newNode;
      return;
    }
  }

  void push_back(int val)
  {
    Node* newNode=new Node(val);
    if(head==NULL)
    {
      head=tail=newNode;
      return;
    }
    else
    {
      tail->next=newNode;
      tail= newNode;
      return ;
    }
  }

  void pop_front()
  {
    if(head==NULL)
    {
      cout<<"LL is empty";
      return;
    }
    Node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
  }
  void pop_back()
  {
    if(head==NULL)
    {
      cout<<"LL is empty";
      return;
    }
    if(head == tail)   //single node case
    {
      delete head;
      head = tail = NULL;
      return;
    }
    Node*temp=head;
    while(temp->next!=tail)
    {
      temp=temp->next;
    }
    temp->next=NULL;
    delete tail;
    tail=temp;
  }

  void insert(int val,int pos)
  {
    if (pos<0)
    {
      cout<<"invalid";
      return;
    }
    if(pos==0)
    {
      push_front(val);
      return;
    }
    Node* temp=head;
    for(int i=0;i<pos-1;i++)
    {
      if(temp==NULL)
      {
        cout<<"Invalid";
        return;
      }
      temp=temp->next;
    }
    Node* newNode=new Node(val);
    newNode->next=temp->next;
    temp->next=newNode;
  }
   
  void search(int val)
  {
    Node* temp=head;
    int i=0;
    while(temp!=NULL)
    {
      if(val==temp->data)
      {
        cout<<val<<"Is found at"<<i<<"position"<<endl;
        return;
      }
      temp=temp->next;
      i++;

    }
    cout<<"Not Found"<<endl;
  }
  void print()
  {
    Node* temp=head;
    while(temp != NULL)
    {
      cout<<temp->data<<",";
      temp=temp->next;
    }
    return;
  }
};

int main()
{
  List LL;
  LL.push_front(1);
  LL.push_front(2);
  LL.push_front(3);
  LL.push_front(4);
  LL.push_back(2);
  LL.push_back(3);
  LL.pop_front();
  LL.pop_back();
  LL.insert(20,2);
  LL.insert(11,0);
  LL.search(20);
  LL.search(22);
  LL.print();
  
return 0;
}