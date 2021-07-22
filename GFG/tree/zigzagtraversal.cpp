//Function to store the zig zag order traversal of tree in a list.
vector <int> zigZagTraversal(Node* root)
{
	// Code here
	map<int, vector<int>> m;
	queue<pair<Node*,int>> q;
	vector<int> ans;
	q.push(make_pair(root, 0));
	while(!q.empty()){
	    Node* temp = q.front().first;
	    int lvl = q.front().second;
	    q.pop();
	    m[lvl].push_back(temp->data);
	    if(temp->left) q.push(make_pair(temp->left, lvl+1));
	    if(temp->right) q.push(make_pair(temp->right, lvl+1));
	}
	
	for(auto iter=m.begin(); iter!=m.end(); iter++){
	    int lvl = iter->first;
	    if(lvl%2==0){
	        for(int i=0; i<iter->second.size(); i++){
	            ans.push_back(iter->second[i]);
	        }
	    }
	    else{
	        for(int i=iter->second.size()-1; i>=0; i--){
	            ans.push_back(iter->second[i]);
	        }
	    }
	}
	return ans;
}

