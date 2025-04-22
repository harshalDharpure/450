#include<bits/stdc++.h>
using namespace std;

// Typedefs
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;

// Macros
#define F first
#define S second
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

// Looping
#define rep(i,a,b) for(ll i=a; i<b; i++)
#define rev(i,a,b) for(ll i=a; i>=b; i--)
#define each(x, a) for (auto &x : a)

// Constants
const ll INF = 1e18;
const ll MOD = 1e9+7;
const ld PI = acos(-1);

// Fast IO
void fastio() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

// Random Number Generator
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll randll(ll a, ll b) { return uniform_int_distribution<ll>(a,b)(rng); }

// Debugging (disable before submission)
#ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x <<" = "; _print(x); cerr << endl;
#else
    #define debug(x)
#endif

// Printer Functions
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}

template<class T, class V> void _print(pair<T, V> p);
template<class T> void _print(vector<T> v);
template<class T> void _print(set<T> v);
template<class T> void _print(multiset<T> v);
template<class T, class V> void _print(map<T, V> v);

template<class T, class V> void _print(pair<T, V> p) { cerr << "{"; _print(p.F); cerr << ","; _print(p.S); cerr << "}"; }
template<class T> void _print(vector<T> v) { cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]"; }
template<class T> void _print(set<T> v) { cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]"; }
template<class T> void _print(multiset<T> v) { cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]"; }
template<class T, class V> void _print(map<T, V> v) { cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]"; }

// Useful Functions
ll gcd(ll a, ll b) { if (b==0) return a; return gcd(b,a%b); }
ll lcm(ll a, ll b) { return (a/gcd(a,b))*b; }
bool isPowOfTwo(ll n) { return (n && !(n & (n-1))); }
bool isPerfectSquare(ll x) { ll y = sqrt(x); return (y*y==x);}
ll mod_add(ll a, ll b) { return ((a%MOD)+(b%MOD))%MOD; }
ll mod_sub(ll a, ll b) { return ((a%MOD)-(b%MOD)+MOD)%MOD; }
ll mod_mul(ll a, ll b) { return ((a%MOD)*(b%MOD))%MOD; }
ll mod_pow(ll a, ll b) { ll res=1; a=a%MOD; while(b){if(b&1)res=mod_mul(res,a); a=mod_mul(a,a); b>>=1;} return res; }

// Shorthand Input Functions
template<typename T>
void input(vector<T> &v) { for(auto &i : v) cin >> i; }

template<typename T>
void print(vector<T> &v) { for(auto &i : v) cout << i << " "; cout << endl; }



// Main
int32_t main() {
    fastio();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
   
//random number between 1-10

    cout<<"randome number is "<<randll(100,200);    
    return 0;

    
}
