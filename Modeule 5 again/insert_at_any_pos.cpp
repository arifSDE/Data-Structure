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
        return;
    }
    Node*tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
    cout<<endl<<"inserted a tail"<<endl<<endl;
}
void print_linked_list(Node*head)
{
    cout<<endl;
    cout<<"Your Linked list"<<endl;
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
}
void insert_at_any_pos(Node*head,int pos,int val)
{
    Node*newNode=new Node(val);
    Node*tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<endl<<"Inserted position "<<pos<<endl<<endl;
}
int main()
{
    Node*head=NULL;
    while(true)
    {
        cout<<"Option 1:insert at tail"<<endl;
        cout<<"Option 2:print linked list"<<endl;
        cout<<"Option 3:Insert at any position"<<endl;
        cout<<"Option 4:terminate"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Enter value: " <<" ";
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
            cout<<"Enter Position: "<<" ";
            cin>>pos;
            cout<<"Enter value: "<<" ";
            cin>>val;
            insert_at_any_pos(head,pos,val);

        }
        else if(op==4)
        {
            break;
        }
    }  
    return 0;
}