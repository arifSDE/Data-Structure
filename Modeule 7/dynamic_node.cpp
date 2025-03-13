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
int main()
{
    Node* head=new Node(10);
    Node*a=new Node(20);
    Node*b=new Node(30);
    Node*c=new Node(40);
    Node*d=new Node(50);
    // Node create
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;
    // ekta dynamic node er value dekhbo 
    cout<<head->val<<endl;
    cout<<a->val<<endl;
    cout<<b->val<<endl;
    cout<<c->val<<endl;
    cout<<d->val<<endl;  
    return 0;
}