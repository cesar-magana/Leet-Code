int rangeSumBST(TreeNode* root, int L, int R) {
    stack<TreeNode*> stk({root});
    int sum = 0;
    while ( !stk.empty() ) {
        TreeNode* node = stk.top();
        stk.pop();
        if ( node->val >= L && node->val <= R )
            sum += node->val;
        if ( node->right && node->val < R )
            stk.push( node->right );
        if ( node->left && node->val > L )
            stk.push( node->left );
    }
    return sum;
}