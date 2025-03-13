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
void insert_at_head(Node*&head,int val)
{
    Node*newNode=new Node(val);
    newNode->next=head;
    head=newNode;
    cout<<endl<<"Inserted head"<<endl<<endl;
}
void delete_Node(Node*head,int pos)
{
    Node*tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    Node*deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
    cout<<endl<<"Deleted Node"<<pos<<endl<<endl;
}
void delete_head(Node*&head)
{
    Node*deletehead=head;
    head=head->next;
    delete deletehead;
    cout<<endl<<"Deleted head"<<endl<<endl;
}
int main()
{
    Node*head=NULL;
    while(true)
    {
        cout<<"Option 1:insert at tail"<<endl;
        cout<<"Option 2:print linked list"<<endl;
        cout<<"Option 3:Insert at any position"<<endl;
        cout<<"Option 4:Insert at Head"<<endl;
        cout<<"Option 5:Delete Node"<<endl;
        cout<<"Option 6:Delete head"<<endl;
        cout<<"Option 7:terminate"<<endl;
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
            if(op==0)
            {
                insert_at_head(head,val);
            }
            else
            {
                insert_at_any_pos(head,pos,val);
            }
        }
        else if(op==4)
        {
            int val;
            cout<<"Enter value"<<endl;
            cin>>val;
            insert_at_head(head,val);
        }
        else if(op==5)
        {
            int pos;
            cout<<"Enter position:"<<" ";
            cin>>pos;
            if(op==0)
            {
                delete_Node(head,pos);
            }
            else
            {
                delete_head(head);
            }
            delete_Node(head,pos);
        }
        else if(op==6)
        {
            delete_head(head);
        }
        else
        {
            break;
        }
    }  
    return 0;
}