int isSpecialBinary(TreeNode<int>*root)
{
    if(root->left==NULL&&root->right==NULL)return true;
    if(root->left==NULL||root->right==NULL)return false;
    bool l=isSpecialBinary(root->left);
    bool r=isSpecialBinary(root->right);
    if(l==false||r==false)return false;
    return true;
    
}