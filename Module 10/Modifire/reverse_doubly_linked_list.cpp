#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node*prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void reverse_linked(Node*head,Node*tail)
{
    Node*i=head;
    Node*j=tail;
    while(i!=j&&i->next!=j)
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->prev;
    }
}
void print_linked_list(Node*tail)
{
    Node*tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)break;
    print_linked_list(head);
    reverse_linked(head,tail);
    }
   
//    Node*head=new Node(10);
//    Node*a=new Node(20); 
//    Node*b=new Node(30);
//    Node*c=new Node(40);
//    Node*d=new Node(50);
//    Node*tail=d;
//    head->next=a;
//    a->prev=head;
//    a->next=b;
//    b->prev=a;
//    b->next=c;
//    c->prev=b;
//    c->next=d;
//    d->prev=c;
//    reverse_linked(head,tail);
//    print_linked_list(head);
    return 0;
}