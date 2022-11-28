#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define  vll vector<ll>
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve(i, t);}
#define tc1 solve(1, 1);
#define mpvll map<ll, vll>
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define vll2 vector<vector<ll>> dp(n, vector<ll>(m));
#define FIXED(A) cout << fixed; cout.precision(20); cout << A << "\n";
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
struct tri{ll x = 0, y = 0, z = 0;};
template <typename num_t>
using ordered_set = tree<num_t, null_type, less_equal<num_t>, rb_tree_tag, tree_order_statistics_node_update>;
void setIO(string name) {freopen((name+".in").c_str(),"r",stdin);freopen((name+".out").c_str(),"w",stdout);}
ll rd(ll a, ll b){return (a+b-1) / b;}
ll isqrt(ll x){ll ans = 0; for(ll k = 1LL << 30; k != 0; k /= 2){if ((ans + k) * (ans + k) <= x) {ans += k;} } return ans;   }
vll prime(ll x){ll n = x; vll ans; while (n % 2 == 0) {ans.pb(2);n = n/2;} for (int i = 3; i <= sqrt(n); i = i + 2) {while (n % i == 0){ans.pb(i);n = n/i;}}if (n > 2){ans.pb(n);} return ans;}
ll binpow(ll a, ll b, ll m) { a %= m; ll res = 1; while (b > 0) { if (b & 1){res = res * a % m;}a = a * a % m; b >>= 1;} return res;}
ll lg2(ll n){ll cnt=0;while(n){cnt++;n/=2;}return cnt;}


void solve(ll TC, ll TC2) {
   ll n, q; cin >> n >> q;
   vll a(n); for(ll i = 0; i < n; i++){cin >> a[i]; } ll l,r ; cin >> l >> r;
    vll x(n+1); for(ll i  = 0; i < n; i++){x[i+1] = x[i] ^ a[i];}
   vll pre(n+1); for(ll i = 0; i < n; i++){pre[i+1] = pre[i] + a[i];}
   ll ans = -1; l = 1, r = n; ll bs = n;
   for(ll i = 1; i <= n; i++){
       if((pre[n]-pre[i-1] ) - (x[n] ^ x[i-1]) >= ans){ans = (pre[n]-pre[i-1] ) - (x[n] ^ x[i-1]);}
   }
   ll al = -1, ar = -1;
   for(ll i = 1; i<= n; i++){
       if((pre[n]-pre[i-1]) - (x[n] ^ x[i-1]) == ans){
           l = i-1, r = n+1;
           while(r-l > 1){
               ll mid = (l+r) / 2;
               if((pre[mid]-pre[i-1]) - (x[mid] ^ x[i-1]) == ans){r = mid;}
               else{l = mid;}
           }
           if(l-i+1 <= bs){
               bs = l-i+1;
               al = i, ar = r;
           }
       }
   }
   cout << al << " " << ar << "\n";
}

int main() {
    FAST;
    tc;
}
