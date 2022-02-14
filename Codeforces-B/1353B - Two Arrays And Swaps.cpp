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
    int t;
    cin >> t;
    while(t--){
        int x,k,sum=0;
        cin >> x >> k; //2 1
        int arr1[x];
        int arr2[x];
        for(int i=0;i<x;++i){
            cin >> arr1[i]; // 1 2
             //3 4
        }

         for(int i=0;i<x;++i){
            cin >> arr2[i]; // 1 2
             //3 4
        }

        sort(arr1,arr1+x); //1 2
        sort(arr2,arr2+x, greater<int>()); // 4 3

        for(int i=0;i<k;++i){
            if(arr1[i] < arr2[i]){
                swap(arr1[i],arr2[i]);
            }
            
        }

        for(int i=0;i<x;++i){
            sum=sum+arr1[i];

        }
        cout << sum << nl;

    }
    return 0;
}