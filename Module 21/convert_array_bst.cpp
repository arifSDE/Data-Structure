#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node*convert(int ar[],int n,int l,int r)
{
    if(l>r)return NULL;
    int mid=(l+r)/2;
    Node*root=new Node(ar[mid]);
    Node*leftRoot=convert(ar,n,l,mid-1);
    Node*rightRoot=convert(ar,n,r,mid+1);
    root->left=leftRoot;
    root->right=rightRoot;
    return root;
}
void levelOrder(Node*root)
{
    if(root==NULL)
    {
        cout<<"Tree nai"<<endl;
        return;
    }
    queue<Node*>q;
    while(!q.empty())
    {
        Node*p=q.front();
        q.pop();
        // jabotio ja kaj
        cout<<p->val<<" ";
        // children gula ke rakha
        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);
    }
}
int main()
{
     
    return 0;
}