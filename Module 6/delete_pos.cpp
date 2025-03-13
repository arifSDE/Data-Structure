#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_tail(Node*&head,int v)
{
    Node*newNode=new Node(v);
    if(head==NULL)
    {
        head=newNode;
        cout<<endl<<"insert a head"<<endl;
        return;
    }
    Node*tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
    cout<<endl<<"Insert a tail"<<endl<<endl;
}
void print_linked_list(Node*head)
{
    cout<<endl;
    cout<<"Enter your linked list"<<endl;
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void insert_at_position(Node*head,int val,int pos)
{
    Node*newNode=new Node(val);
    Node*tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<"Insert a position"<<pos<<endl<<endl;
}
void insert_at_head(Node*&head,int val)
{
    Node*newNode=new Node(val);
    newNode->next=head;
    head=newNode;
    cout<<endl<<"insert a head"<<endl<<endl<<endl;
}
int main()
{
   Node*head=NULL;
   while(true)
   cout<<"Position 1:Insert a tail"<<endl;
   cout<<"Position 2:print a linked list"<<endl;
   cout<<"Position 3:Insert any position"<<endl;
   cout<<"Position 4:Insert a head"<<endl;
   int op;
   cin>>op;
   if(op==1)
   {
    cout<<"Please enter a value"<<endl;
    int v;
    cin>>v;
    insert_at_tail(head,v);
   }
   else if(op==2)
   {
    print_linked_list(head);
   }
   else if(op==3)
   {
    int pos,val;
    cout<<"Enter your pos"<<endl;
    cin>>pos;
    cout<<"Enter your value"<<endl;
    cin>>val;
    if(op==0)
    {
        insert_at_head(head,val);
    }
    else
    {
        insert_at_position(head,val,pos);
    }
   }
    return 0;
}