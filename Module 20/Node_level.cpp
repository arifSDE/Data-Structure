// int nodeLevel(TreeNode<int>*root,int searchedvalue)
// {
//     queue<pair<treeNode<int>*,int>>q;
//     q.push({root,1});
//     while(!q.empty())
//     {
//          pair<TreeNode<int> *, int> pr = q.front();
//         treeNode<int>*node=pr.first;
//         int level=pr.second;
//         q.pop();
//         // jabotio ja kaj
//         if(node==searchedvalue)
//         {
//             return level;
//         }
//         if(node->left)
//         {
//             q.push({node->left,level+1});
//         }
//         if(node->right)
//         {
//             q.push({node->right,level+1});
//         }
//     }
// }

int tree_level(treeNode<int>*root,int searchedVal)
{
    queue<pair<treeNode<int>*int>>q;
    q.push({root,1});
    while(!q.empty())
    {
        pair<treeNode<int>,int>pr=q.front();
        treeNode<int>*node=pr.first;
        int level=pr.second;
        q.pop();
        if(node->val==searchedVal)
        {
            return level;
        }
        if(node->left)
        {
            q.push({node->left,level+1});
        }
        if(node->right)
        {
            q.push({node->right,level+1});
        }
    }
}