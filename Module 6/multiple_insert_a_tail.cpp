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
void insert_tail(Node*head,int v)
{
    Node*newNode=new Node(v);
    if(head==NULL)
    {
        head->next;
        return;
    }
    Node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
void print_a_tail(Node*head)
{
    cout<<"Successful"<<endl;
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->next<<endl;
        tmp=tmp->next;
    }
    cout<<endl;
}
int main()
{
    Node*head=NULL;
    while(true)
    {
        cout<<"Option 1:insert a tail:"<<endl;
        cout<<"Option 2: linked list:"<<endl;
        cout<<"Option 3:Terminal:"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Enter a tail:";
            int v;
            cin>>v;
            insert_tail(head,v);
        }
        else if(op==2)
        {
            print_a_tail(head);
        }
        else
        {
            break;
        }
        
    }
    
    return 0;
}