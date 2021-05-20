class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1,s2;

        for(int i=0; i<nums1.size(); i++){
            s1.insert(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++){
            s2.insert(nums2[i]);
        }

        vector<int>answer;
        set<int>::iterator itr1 = s1.begin();
        while(itr1!=s1.end()){
            if(s2.find(*itr1)!=s2.end()){
                answer.push_back(*itr1);
            }
            itr1++;
        }       
        return answer;
    }
};