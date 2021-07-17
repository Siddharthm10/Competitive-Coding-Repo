class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0){return;}
        if(m==0){
            copy(nums2.begin(), nums2.end(), nums1.begin());
            return;
        }
        
        vector<int> answer(m+n);
        int i=0, j=0, k=0;
        while(i<m&&j<n){
            if(nums1[i]<=nums2[j]){
                answer[k++] = nums1[i++];
            }else{
                answer[k++] = nums2[j++];
            }
        }
        while(j<n){
            answer[k++] = nums2[j++];
        }
        while(i<m){
            answer[k++] = nums1[i++];
        }
        copy(answer.begin(), answer.end(), nums1.begin());
    }
};
