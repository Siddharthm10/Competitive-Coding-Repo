void iterativePostOrder(struct Node* root)
{
	if(root==NULL){
		return;
	}

	stack<Node*> nodeStack;
	nodeStack.push(root);

	while(!nodeStack.empty())
	{
		Node* nTop = nodeStack.top();
		if(nTop->right)
			nodeStack.push(nTop->right);
		if(nTop->left)
			nodeStack.push(nTop->left);
	}
	while(!nodeStack.empty())
	{
		
	}
}