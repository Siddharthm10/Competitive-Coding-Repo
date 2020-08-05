#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    int a=0;
    char ch =0;
    vector<int> vec_integers;
    while(ss>>a){
        vec_integers.push_back(a);
        ss>>ch;
    }
    return vec_integers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(size_t i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
