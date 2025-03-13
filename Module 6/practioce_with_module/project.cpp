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
        cout<<endl<<"Inserted head"<<endl<<endl;
        return;
    }
    Node*tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
    cout<<endl<<"Inseted at Node"<<endl<<endl;
}
void print_linked_list(Node*head)
{
    cout<<endl;
    cout<<"Enter your linked list"<<" ";
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
}
void insert_at_pos(Node*head,int pos,int v)
{
    Node*newNode=new Node(v);
    Node*tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        if(tmp==NULL)
        {
            cout<<endl<<"Invalid index"<<endl<<endl;
            return;
        }
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<endl<<"Insert at position"<<pos<<endl<<endl;
}
void insert_a_head(Node*&head,int v)
{
    Node*newNode=new Node(v);
    head->next=head;
    head=newNode;
    cout<<endl<<"Inserted at head"<<endl<<endl;
}
void delete_from_pos(Node*head,int pos)
{
    Node*tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<endl<<"Invalid index"<<endl<<endl;
            return;
        }
    }
    if(tmp->next==NULL)
    {
        cout<<endl<<"Invalid index"<<endl<<endl;
        return;
    }
    Node*deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
    cout<<endl<<"Delete Position"<<pos<<endl<<endl;
}
void delete_head(Node*&head)
{
    if(head==NULL)
    {
        cout<<endl<<"Head is not avaleable"<<endl<<endl;
        return;
    }
    Node*deleteNode=head;
    head=deleteNode->next;
    delete deleteNode;
    cout<<"Delete head"<<endl<<endl;
}
int main()
{
    Node*head=NULL;
    while(true)
    {
        cout<<"Option 1:insert a tail"<<endl;
        cout<<"Option 2:Print linked list"<<endl;
        cout<<"Option 3:Insert any position"<<endl;
        cout<<"Option 4:Insert at head"<<endl;
        cout<<"Option 5:Delete forom Position"<<endl;
        cout<<"Option 6:Terminaste"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Please Enter Value"<<endl;
            int v;
            cin>>v;
            insert_at_tail(head,v);
        }
        else if(op=2)
        {
            print_linked_list(head);
        }
        else if(op==3)
        {
            int pos,v;
            cout<<"Enter your position"<<endl;
            cin>>pos;
            cout<<"Enter your value"<<endl;
            cin>>v;
            if(op==0)
            {
                insert_a_head(head,v);
            }
            else
            {
                insert_at_pos(head,pos,v);
            }
        }
        else if(op==4)
        {
            int pos;
            cout<<"Insert at head";
            cin>>pos;
            insert_a_head(head,pos);
        }
        else if(op==5)
        {
            int pos;
            cout<<"Enter your position"<<endl;
            cin>>pos;
            if(pos==0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_pos(head,pos);
            }
        }
        else if(op==6)
        {
            delete_head(head);
        }
        else if(op==7)
        {
            break;
        }
    }
    
    return 0;
}