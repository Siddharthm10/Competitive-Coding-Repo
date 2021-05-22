class Solution {
public:
	int countBits(int number){     
		int sum=0;
		while(number!=0){
			// if(number%2==0) break;
			sum+=number%2;
			number/=2;
		}
		return sum;
	}

	bool comparePair(pair<int,int> &a, pair<int,int> &b){
		return (a.second<b.second);
	}

    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> v;
        //O(nlogn)
	    sort(arr.begin(), arr.end());
	    //O(nlogn)
	    for(int i=0; i<arr.size(); i++){
			v.push_back(make_pair(countBits(arr[i]), arr[i]));
	    }
	    //Sorting v
	    sort(v.begin(), v.end());
	    vector<int> answer(v.size());
	    for(int i=0; i<v.size(); i++){
	    	answer[i] = v[i].second;
	    }
	    return answer;
    }
};