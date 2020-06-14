vector<int> rightSideView(TreeNode* root) {
    if ( root == nullptr ) return {};

    vector<int> result;
    queue<TreeNode*> queue({root});

    while ( !queue.empty() ) {
        int size = queue.size();
        TreeNode* node = nullptr;
        while (size--) {
            node = queue.front(); queue.pop();
            if ( node->left ) queue.emplace( node->left );
            if ( node->right ) queue.emplace( node->right );
        }
        result.push_back( node->val );
    }
    return result;
}