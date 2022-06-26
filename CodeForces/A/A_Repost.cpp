// clang-format off
 
#include <bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
using namespace std;
using namespace chrono;
 
 
#define ll long long
#define ull unsigned long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pll pair<long long, long long>
#define nline "\n"
#define all(a) a.begin(), a.end()
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(int a){cerr << a; }
void _print(ll a) {cerr << a;}
void _print(ull a) {cerr << a;}
void _print(string a) {cerr << a;}
void _print(bool a) {cerr << a;}
void _print(char a) {cerr << a;}
void _print(ld a) {cerr << a;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.fi); cerr << ","; _print(p.se); cerr << "}\n";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]\n";}
 
const ll MOD = 1000000007;
const ll INF = 1e18;
const ld PI = 3.141592653589793238462;
 
// clang-format on

void solve()
{
    int n;
    cin>>n;
    

    unordered_map<string, vector<string>> tr;
    for(int i=0; i<n; i++){
    	string temp, word1, word2;
    	cin>>word1>>temp>>word2;
    	for(int i=0; i<word1.length(); i++){
    		word1[i] = tolower(word1[i]);
    	}
    	for(int j=0; j<word2.length(); j++){
    		word2[j] = tolower(word2[j]);
    	}

    	tr[word2].push_back(word1);
    }
    int res = 0;
    queue<string> bfs;
    bfs.push("polycarp");
    while(!bfs.empty()){
    	int size = bfs.size();
    	res++;
    	for(int i=0; i<size; i++){
    		string postUser = bfs.front();
    		bfs.pop();
    		for(auto&x:tr[postUser]){
    			bfs.push(x);
    		}
    	}
    }
    cout<<res;
}
 
int main()
{
    fastio();
    solve(); 
    return 0;
}