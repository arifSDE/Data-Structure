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
// void insert_node_tail(Node *head,int v)
// {
//     //eta ekta notun node
//     Node* newNode=new Node(v);
//     // eibar inset korbo
//     // heat ta ke copy kore tmp te rakhlam
//     if(head==NULL)
//     {
//         head=newNode;
//         return;
//     }
//     Node*tmp=head;
//     // ei loop ta totokkhon jbe jotokhon na tmp er next value null pacche
//     while(tmp->next!=NULL)
//     {
//         tmp=tmp->next;
//     }
//     // tmp eikhane seash 
//     //Notun node take connect korlam
//     tmp->next=newNode;  
// }
// void print_linked_list(Node *head)
// {
//     cout<<"Your linked list:";
//     Node *tmp=head;
//     while(tmp!=NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->next;
//     }
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
void insert_node_tail(Node*head,int v)
{
    Node* newNode=new Node(v);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node *tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
void print_linked_list(Node*head)
{
    cout<<"Your linked list:";
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}

int main()
{
    Node* head=NULL;
    cout<<"Option is 1: insert tail";
    int op;
    cin>>op;
    if(op==1)
    {
        cout<<"Please enter value";
        int v;
        cin>>v;
        insert_node_tail(head,v);
    }
    print_linked_list(head);
    
    return 0;
}