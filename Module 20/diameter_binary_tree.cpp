// int mx = 0;
// int maxHeight(TreeNode<int> *root)
// {
//     if (root == NULL)
//         return 0;
//     int l = maxHeight(root->left);
//     int r = maxHeight(root->right);
//     int d = l + r;
//     mx = max(mx, d);
//     return max(l, r) + 1;
// }
// int diameterOfBinaryTree(TreeNode<int> *root)
// {
//     // Write Your Code Here.
//     mx = 0;

//     int l = maxHeight(root->left);
//     int r = maxHeight(root->right);
//     return max(mx, l + r);
// }
int mx=0;
int max_node(treeNode<int>*root)
{
    if(root==NULL)return 0;
    int l=max_node(root->left);
    int r=max_node(root->right);
    int d=l+r;
    mx=max(mx,d);
    return max(l,r)+1;
}
int tree_node_diameter(treeNode<int>*root)
{
    int max=0;
    int l=max_node(root->left);
    int r=max_node(root->right);
    return max(l+r,mx);
}