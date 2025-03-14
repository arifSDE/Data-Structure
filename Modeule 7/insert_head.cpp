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
void print_linked_list(Node*head)
{
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int size(Node*head)
{
    Node*tmp=head;
    int count=0;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}
void insert(Node*head,int pos,int val)
{
    Node*newnode=new Node(val);
    Node*tmp=head;
    for(int i=0;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
}
void insert_head(Node*&head,int val)
{
    Node*newnode=new Node(val);
    newnode->next=head;
    head=newnode;
}
int main()
{
    Node*head=new Node(10);
    Node*a=new Node(20);
    Node*b=new Node(30);
    Node*c=new Node(40);
    Node*d=new Node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;
    print_linked_list(head);
    int pos,val;
    cin>>pos>>val;
    if(pos>size(head))
    {
        cout<<"invalid index"<<endl;
    }
    else if(pos==0)
    {
        insert_head(head,val);
    }
    else
    {
        insert(head,pos,val);
    }
    print_linked_list(head);

    return 0;
}