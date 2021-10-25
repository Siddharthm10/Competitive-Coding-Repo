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
    int t;
    cin>>t;
    while(t--){
    	int n; cin>>n;
    	int arr[n];
    	for(int i=0; i<n; i++){
    		cin>>arr[i];
    	}
    	int q;
    	cin>>q;
    	while(q--){
    		int x, k;
    		cin>>x>>k;
    		if(k==0) {
    			cout<<arr[x-1]<<"\n";
    			continue;
    		}
    		int prevAx = -1;
    		int prevToPrevAx = -1;
    		for(int i=0; i<k; i++){

				unordered_map<int,int> mp;
				for(int i=0; i<n; i++){
					mp[arr[i]]++;
				}

    			for(int i=0; i<n; i++){
    				arr[i] = mp[arr[i]];
    			}

    			if(arr[x-1]==prevAx && prevAx==prevToPrevAx){
    				break;
    			}
                
    			prevToPrevAx = prevAx;
    			prevAx = arr[x-1];
    		}
    		cout<<arr[x-1]<<"\n";
    	}
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