vector<int> rightSideView(TreeNode *root) {
    queue<TreeNode*> queue;
    vector<int> rightsideview;
    if( !root ) return rightsideview;
    queue.push( root );

    while( !queue.empty() ){
        rightsideview.push_back( queue.back()->val );
        for( int i = queue.size(); i>0; i-- ) {
            TreeNode* node = queue.front();
            queue.pop();
            if( node->left ) queue.push( node->left );
            if( node->right ) queue.push( node->right );
        }
    }
    return rightsideview;
}