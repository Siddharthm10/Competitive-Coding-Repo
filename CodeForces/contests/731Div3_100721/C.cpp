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
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.fi); cerr << ","; _print(p.se); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
const ll MOD = 1000000007;
const ll INF = 1e18;
const ld PI = 3.141592653589793238462;
 
// clang-format on

vector<int> seqToFollow(vector<int> a, vector<int> b, int k)
{
	vector<int> sequence;
	int i=0;
	int j=0;
	for(i=0, j=0; i<a.size() && j<b.size();)
	{
		if(max(a[i],b[j])<=k)
		{
			sequence.push_back(a[i]);
			sequence.push_back(b[j]);
			if(a[i]==0) k++;
			if(b[j]==0) k++;
			i++;
			j++;
		}
		else{
			if(min(a[i],b[j])>k){
				return {-1};
			}
			else{
				if(min(a[i],b[j])==a[i]){
					sequence.push_back(a[i]);
					if(a[i]==0) k++;
					i++;
				}
				else{
					sequence.push_back(b[j]);
					if(b[j]==0) k++;
					j++;
				}
			}
		}
	}
	while(i<a.size())
	{
		if(a[i]>k) return {-1};
		else{
			sequence.push_back(a[i]);
			if(a[i]==0) k++;
			i++;
		}
	}
	while(j<b.size())
	{
		if(b[j]>k) return {-1};
		else{
			sequence.push_back(b[j]);
			if(b[j]==0) k++;
			j++;
		}
	}
	return sequence;
}


void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int k, n, m;
    	cin>>k>>n>>m;
    	vector<int> a(n);
    	vector<int> b(m);
    	
    	for(int i=0; i<n; i++)
    	{
    		cin>>a[i];
    	}
    	
    	for(int i=0; i<m; i++)
    	{
    		cin>>b[i];
    	}

    	vector<int> seq = seqToFollow(a,b,k);
    	for(int i=0; i<seq.size(); i++){
    		cout<<seq[i]<<" ";
    	}
    	cout<<nline;
    	
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