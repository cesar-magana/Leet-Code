int closestValue(TreeNode* root, double target) {
    int a = root->val;
    auto node = target < a ? root->left : root->right;
    if (!node) return a;
    int b = closestValue(node, target);
    return abs(a - target) < abs(b - target) ? a : b;
}