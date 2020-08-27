#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
#define concatenate add
/*Write the class AddElements here*/
template <class T>
class AddElements {
    public:
    T element;
    AddElements(T& i){element = i;}
    T add(T x){
        return element+x;
    }
};

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int static r = start_up();

#define endl '\n';

int main () {
