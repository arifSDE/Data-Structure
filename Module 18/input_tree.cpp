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
void level_order(Node*root)
{
    if(root==NULL)
    {
        cout<<"Root is empty"<<endl;
        return;
    }
    queue<Node*>q;
    while(!q.empty())
    {
        // value gula ber korlam 
        Node*p=q.front();
        q.pop();
        // jabotio ja kaj
        cout<<p->val<<" ";
        // queue theke Node gula ke ber korbo
        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);

    }
}
Node*input_tree()
{
    int val;
    cin>>val;
    Node*root;
    if(val==-1)
    {
        root==NULL;
    }
    queue<Node*>q;
    while(!q.empty())
    {
        Node*p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node*myleft;
        Node*myright;
        if(l==-1)
        {
            myleft=NULL;
        }
        else
        {
            myleft=new Node(l);
        }
        if(r==-1)
        {
            myright=NULL;
        }
        else
        {
            myright=new Node(r);
        }
        p->left=myleft;
        p->right=myright;
        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);
    }
    return root;
}
int main()
{
     Node*root=input_tree();
     level_order(root);
    return 0;
}