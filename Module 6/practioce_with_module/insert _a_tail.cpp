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
        cout<<endl<<"Insert your head"<<endl<<endl;
        return;
    }
    Node*tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
void print_linked_list(Node*head)
{
    cout<<endl;
    cout<<"Your linked list"<<endl;
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp->next;
    }
    cout<<endl<<endl;
}
int main()
{
    Node*head=NULL;
    while(true)
    {
        cout<<"Option 1:Insert a tail"<<endl;
        cout<<"Option 2:Print linked list"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Please Give me value"<<endl;
            int v;
            cin>>v;
            insert_at_tail(head,v);
        }
        else if(op==2)
        {
            print_linked_list(head);
        }
    }  
    return 0;
}