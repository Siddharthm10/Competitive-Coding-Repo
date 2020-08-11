#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n,char c) {

    for(int i=1; i<n+1; i++){
        cout<<string(n-i, ' ');        
        cout<<string(i, c)<<endl;
    }


}

int main()
{
    int n;
    char c = '#';
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n,c);

    return 0;
}
