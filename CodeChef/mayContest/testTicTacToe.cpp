//"It's not a bug, It's a feature
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>

using namespace std;


int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	for(int i=0; i<t; i++){
		char a[3][3];
		int countx=0, counto=0, winx=0, wino=0, count_=0;
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				cin>>a[i][j];
				if(a[i][j]=='X') countx++;
				else if(a[i][j]=='O') counto++;
				else if(a[i][j]=='_') count_++;
			}
		}


		for(int i=0; i<3; i++){
			if(a[i][0]==a[i][1]&&a[i][1]==a[i][2]){
				if(a[i][0]=='X') winx++;
				else if(a[i][0]=='O') wino++;
			}
			if((a[0][i]==a[1][i])&&(a[1][i]==a[2][i])){
				if(a[0][i]=='X') winx++;
				else if(a[0][i]=='O') wino++;
			}
		}
		if(a[0][0]==a[1][1]&&a[1][1]==a[2][2]){
			if(a[0][0]=='X') winx++;
			else if(a[0][0]=='O') wino++;
		}
		if(a[2][0]==a[1][1]&&a[1][1]==a[0][2]){
			if(a[1][1]=='X') winx++;
			else if(a[1][1]=='O') wino++;
		}

		if(counto>countx) cout<<3<<endl;
		else if(countx-counto>1) cout<<3<<endl;
		else if(countx>counto &&winx==1&&wino==0) cout<<1<<endl;
		else if(countx==counto&&wino==1&&winx==0) cout<<1<<endl;
		else if(count_==0&&(winx+wino==0)) cout<<1<<endl;
		else if(count_==0&&winx==2) cout<<1<<endl;
		else if(count_>0&&(winx+wino==0)) cout<<2<<endl;
		else cout<<3<<endl;
	}

	return 0;
}	