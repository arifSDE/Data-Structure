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
void insert_ar_tail(Node*&head,int v)
{
    Node*newNode=new Node(v);
    if(head==NULL)
    {
        head=newNode;
        cout<<endl<<"Insert a head"<<endl<<endl;
        return;
    }
    Node*tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;

    }
    tmp->next=newNode;
    cout<<endl<<"Ïnsert a tail"<<endl<<endl;
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
void insert_at_position(Node*head,int pos,int val)
{
    Node*newNode=new Node(val);
    Node*tmp=head;
    for(int i=1;i<=pos;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<endl<<"Insert at position"<<endl<<endl<<endl;
}
void insert_at_head(Node*&head,int v)
{
    Node*newNode=new Node(v);
    newNode->next=head;
    head=newNode;
    cout<<endl<<"Insert at head"<<endl<<endl;
}
int main()
{
    Node* head=NULL;
    while(true)
    {
        cout<<"Position 1:Insert at tail"<<endl;
        cout<<"Position 2:Print linked list"<<endl;
        cout<<"Position 3:Insert any position"<<endl;
        cout<<"Position 4:Insert head"<<endl;
        cout<<"Position 5:Terminate"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Enter a tail"<<endl;
            int v;
            cin>>v;
            insert_ar_tail(head,v);
        }
        else if(op==2)
        {
            print_linked_list(head);
        }
        else if(op==3)
        {
            int pos,val;
            cout<<"Enter your Position"<<endl;
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
        else if(op==4)
        {
            int v;
            cout<<"Enter your value"<<endl;
            cin>>v;
            insert_at_head(head,v);
        }

    }  
    return 0;
}