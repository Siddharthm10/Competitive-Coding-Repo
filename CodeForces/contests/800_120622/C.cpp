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

bool doable(string& src, string& tar, int n){
	int i=0, j=0;
	stack<int> cache;
	while(i<n && j<n){
		while(i<n && src[i]==tar[j]) {i++; j++;};
		if(i==n) return true;
		if(i==n-1) return false;
		if(src[i]=='b'&&tar[j]=='a' || src[i]=='c') return false;
		cache.push(i++);
		while(!cache.empty() && i<n){
			if(tar[j]=='a') return false;
			else if(tar[j]=='b' && src[cache.top()]=='c') return false;
			else if(tar[j]=='c' && src[cache.top()]=='a') return false;
			string temp = src.substr(cache.top(),2);
			if(temp=="ab" || temp=="bc") {
				swap(src[cache.top()], src[i]);
				cache.pop();
				i--;
			}
			else{
				cache.push(i++);
			}
		}
		if(i==n) return false;
	}
	return true;
}

void solve()
{
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	string src, tar;
    	cin>>src;
    	cin>>tar;
    	if(doable(src, tar, n)){
    		cout<<"YES";
    	}
    	else cout<<"NO";
    	cout<<endl;
    }
}
 
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    fastio();
    auto start1 = high_resolution_clock::now();
    solve();
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifndef ONLINE_JUDGE
    cerr << "Time: " << duration.count() / 1000 << endl;
#endif
 
    return 0;
}