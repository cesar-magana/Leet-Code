int ans;
int height( TreeNode* node) {
    if ( !node )
        return 0;
    int l = height( node->left );
    int r = height( node->right );        
    ans = max( ans, l + r + 1 );
    return max( l, r ) + 1; 
}
int diameterOfBinaryTree(TreeNode* root) {
    ans = 1;
    height( root );
    return ans - 1;
}