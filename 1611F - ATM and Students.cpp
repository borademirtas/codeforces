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
ll inverse(ll a){ll m = 1e6+3; ll m0 = m; ll y = 0, x = 1;  while (a > 1) { ll q = a / m; ll t = m; m = a % m, a = t; t = y; y = x - q * y; x = t;} if (x < 0){x += m0;}return x;}


struct st{
    vector<vll> st;
    vll lg;
    void init(ll n, vll a){
        st.resize(n+2);
        for(ll i = 0; i < st.size(); i++){st[i].resize(26);}
        for(ll i = 0; i < a.size(); i++){st[i][0] = a[i];}
        for (int j = 1; j <= 25; j++){
            for (int i = 0; i + (1 << j) < n+2; i++){
                st[i][j] = min(st[i][j-1], st[i + (1 << (j - 1))][j - 1]);
            }
        }
        lg.resize(n+2);
        lg[1] = 0;
        for (ll i = 2; i <= n + 1; i++){lg[i] = lg[i/2] + 1;}
    }
    ll calc(ll l, ll r){
        ll j = lg[r-l+1];
        ll mx = min(st[l][j], st[r - (1 << j) + 1][j]);
        return mx;
    }

};

void solve(ll TC, ll TC2) {
    ll n, s; cin >> n >> s; ll ans = -1, al = -1, ar = -1;
    vll a(n); for(ll i = 0; i < n; i++){cin >> a[i];}  vll pre(n+1); for(ll i = 0; i < n; i++){pre[i+1] = a[i] + pre[i];}
    st p; p.init(n, pre);
    for(ll i = 0; i < n; i++){
        if(a[i] + s < 0){continue;}
        ll l = i + 1, r = n + 1;
        while(r - l > 1){
            ll m = (l+r) / 2;
            ll num = p.calc(i+1, m);
            if(s + num - pre[i] < 0){r = m;}
            else{l = m;}
        }
        if(l -(i+1) +1 > ans){ans = l -(i+1) +1; al = i + 1; ar = l;}
    }
    if(ans == -1){cout << ans << "\n";}
    else{
        cout << al << " " <<  ar << "\n";
    }
}

int main() {
    FAST;
    tc;
}
