void mirror(struct Node* node) {
    // code here
    if(!node) return;
    struct Node* temp = node->left;
    node->left = node->right;
    node->right = temp;
    mirror(node->left);
    mirror(node->right);
}
