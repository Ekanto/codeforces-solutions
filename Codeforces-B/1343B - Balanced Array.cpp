#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,n) for(ll i = 0; i < n; i++)
#define all(x) (x).begin(), (x).end
#define unique(x) (x).begin(), (x).end()
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
#define md       10000007
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

int main()
{
    fast_cin();
    int t,n;
    cin >> t;
    while(t--){
        cin>> n;
        if(n%4!=0) {
            cout << "NO" << nl;
            continue;
        }
        else{
            n=n/2;
            cout<< "YES" << nl;
            for(int i=1;i<=n;++i){
                cout << 2*i << " ";
            }

            for(int i=1;i<n;++i){
                cout << 2*i-1 << " ";
            }
            cout<< 3*n-1 << nl; 
        }

    }
    return 0;
}