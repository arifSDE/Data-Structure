// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//     int val;
//     Node* next;
//     Node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//     }
// };
// void print_linked_list(Node*head)
// {
//     Node*tmp=head;
//     while(tmp!=NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->next;
//     }
//     cout<<endl;
// }
// int size(Node*head)
// {
//     Node*tmp=head;
//     int count=0;
//     while(tmp!=NULL)
//     {
//         count++;
//         tmp=tmp->next;
//     }
//     return count;
// }
// void insert(Node*head,int pos,int val)
// {
//     Node*newnode=new Node(val);
//     Node*tmp=head;
//     for(int i=1;i<=pos-1;i++)
//     {
//         tmp=tmp->next;
//     }
//     newnode->next=tmp->next;
//     tmp->next=newnode;
// }


// int main()
// {
//     Node*head=new Node(10);
//     Node*a=new Node(20);
//     Node*b=new Node(30);
//     Node*c=new Node(40);
//     Node*d=new Node(50);
//     head->next=a;
//     a->next=b;
//     b->next=c;
//     c->next=d;
//     d->next=NULL;
//     print_linked_list(head);
//     int pos,val;
//     cin>>pos>>val;
//     if(pos>size(head))
//     {
//         cout<<"Invalid index"<<endl;
//     }
//     else
//     {
//         insert(head,pos,val);
//     }
//     print_linked_list(head);
 
//     return 0;
// }

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
void insert(Node*head,int pos,int val)
{
    Node*newnode=new Node(val);
    Node*tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
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
        cout<<"Invalid index"<<endl;
    }
    else if(pos==0)
    {
        insert(head,pos,val);
    }
    print_linked_list(head);
    return 0;
}