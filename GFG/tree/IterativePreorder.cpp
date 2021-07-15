void iterativePreorder(Node* root){
	if(root==NULL) return;

	stack<Node*> nodeStack;
	nodeStack.push(root);

	while(!nodeStack.empty())
	{
		struct Node* nodeTop = nodeStack.top();
		cout<<nodeTop->val;
		nodeStack.pop();

		if(nodeTop->right)
			nodeStack.push(node->right);
		if(nodeTop->left)
			nodeStack.push(node->left);
	}
}