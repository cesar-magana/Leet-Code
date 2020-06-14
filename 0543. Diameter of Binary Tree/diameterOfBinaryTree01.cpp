int depth( TreeNode* node) {
    if ( !node )
        return 0;
    return max( depth(node->left), depth(node->right) ) + 1;
}
int diameterOfBinaryTree(TreeNode* root) {
    if(root==NULL)
        return 0;

    int left_height=depth(root->left);
    int right_height=depth(root->right);        
    int left_dia= diameterOfBinaryTree(root->left);
    int right_dia= diameterOfBinaryTree(root->right);
    return max( left_height+right_height, max(left_dia,right_dia) );        
}