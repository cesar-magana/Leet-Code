vector<int> rightSideView(TreeNode* root) {
    if ( !root ) return {};

    vector<int> view;
    queue<TreeNode*> queue;
    queue.push( root );
    while ( !queue.empty() ) {
        int n = queue.size();
        for ( int i = 0; i < n; i++ ) {
            TreeNode* node = queue.front();
            queue.pop();
            if (i == n - 1) {
                view.push_back( node -> val );
            }
            if (node -> left) {
                queue.push( node -> left );
            }
            if ( node -> right ) {
                queue.push( node -> right );
            }
        }
    }
    return view;
}