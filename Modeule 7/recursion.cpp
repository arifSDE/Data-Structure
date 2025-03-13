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
void print_recursion(Node*n)
{
    if(n==NULL)return;
    cout<<n->val<<" ";
    print_recursion(n->next);
}
void print_reverse(Node*n)
{
    if(n==NULL)return;
    print_reverse(n->next);
    cout<<n->val<<" ";
}
int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    int val;
    while()
    print_recursion(head);
    cout<<endl;
    print_reverse(head);  
    return 0;
}