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
void insert_at_tail(Node*&head,int val)
{
    Node*newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        cout<<endl<<"Inserted head"<<endl;
        return;
    }
    Node*tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
    cout<<endl<<"Inserted at tail"<<endl<<endl;
}
void print_linked_list(Node*head)
{
    cout<<endl;
    cout<<"Your linked list"<<endl;
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
}
void insert_at_position(Node* head,int pos,int val)
{
    Node*newNode=new Node(val);
    Node*tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<endl<<endl<<"Insert at position"<<endl<<endl;
}
int main()
{
    Node* head=NULL;
    while(true)
    {
        cout<<"Option 1: Insert at tail:"<<endl;
        cout<<"Option 2:Print a linked list:"<<endl;
        cout<<"Option 3:Insert any position:"<<endl;
        cout<<"Option 4:Terminate"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Please Enter a Value:"<<endl;
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
            if(op=3)
            {
                int pos,val;
                cout<<"Enter posetion:"<<endl;
                cin>>pos;
                cout<<"Enter a value:"<<endl;
                cin>>val;
                insert_at_position(head,pos,val);
            }
        }
        else if(op==4)
        {
            break;
        }
    }  
    return 0;
}