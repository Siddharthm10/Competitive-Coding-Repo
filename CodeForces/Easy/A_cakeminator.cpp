//"It's not a bug, It's a feature
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
#define ll long long int
using namespace std;


int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int r,c;
	scanf("%d %d", &r, &c);
	char matrix[r][c];
	bool eatenMatrix[r][c] = {false};


	//set all to be false;
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			eatenMatrix[i][j] = false;
		}
	}
	
	//taking input
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cin>>matrix[i][j];
		}
	}

	int answer = 0;
	for(int i=0; i<r; i++)
	{
		bool strawberryFound = false;	
		for(int j=0; j<c; j++)
		{
			if(matrix[i][j]=='S')
				strawberryFound = true;
		}
		if(!strawberryFound)
		{
			for(int j=0; j<c; j++)
			{
				if(!eatenMatrix[i][j]){
					answer++;
					eatenMatrix[i][j] = true;
				}
			}
		}
	}

	for(int i=0; i<c; i++)
	{
		bool strawberryFound = false;	
		for(int j=0; j<r; j++)
		{
			if(matrix[j][i]=='S')
				strawberryFound = true;
		}
		if(!strawberryFound)
		{
			for(int j=0; j<r; j++)
			{
				if(!eatenMatrix[j][i]){
					answer ++;
					eatenMatrix[j][i] = true;
				}
			}
		}
	}
	
	cout<<answer;

	return 0;
}	
