class Solution {
public:
    vector<int> minOperations(string boxes) {
    	int i=0, j=0;
        vector<int> answer(boxes.length());
        for(i=0; i<boxes.length(); i++){
    		int temp=0;
        	for(int j=0; j<boxes.length(); j++){
        		if(i==j) continue;
        		if(boxes[j]!='0'){
        			temp+=(abs(i-j));
        		}
        	}
        	answer[i] = temp;
        }
        return answer;
    }
};