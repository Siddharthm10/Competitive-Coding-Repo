/*
 * @lc app=leetcode id=987 lang=cpp
 *
 * [987] Vertical Order Traversal of a Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    static bool comp(pair<int, int> &a, pair<int,int> &b){
        if(a.second==b.second){
            return a.first<b.first;
        }
        return a.second<b.second;
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(!root) return {};
        int hd=0; int lvl = 0;
        vector<vector<int>> ans;
        map<int, vector<pair<int,int>>> m;//value, lvl
        queue<pair<TreeNode*,pair<int, int>>> q;//hd, lvl
        q.push(make_pair(root,make_pair(0,1)));
        while(!q.empty()){
            TreeNode* temp = q.front().first;
            int hd = q.front().second.first;
            int lvl = q.front().second.second;
            q.pop();
            if(m[hd].size()==0){
                m[hd].push_back(make_pair(temp->val, lvl));
            }
            else{
                m[hd].push_back(make_pair(temp->val,lvl));
            }
            if(temp->left) q.push(make_pair(temp->left, make_pair(hd-1, lvl+1)));
            if(temp->right) q.push(make_pair(temp->right, make_pair(hd+1, lvl+1)));
        }
        

        for(auto x:m){
            vector<int> v;
            sort(x.second.begin(), x.second.end(), comp);
            for(int i=0; i<x.second.size(); i++){
                v.push_back(x.second[i].first);
            }
            ans.push_back(v);
        }
        return ans;
    }
};
// @lc code=end

