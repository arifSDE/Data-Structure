#include<bits/stdc++.h>
using namespace std;
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
bool binary_tree(Node<int>*root,int x)
{
    if(root==NULL)return false;
    if(root->val==x)return true;
    bool l=binary_tree(root->left,x);
    bool r=binary_tree(root->right,x);
    return (l||r);
}