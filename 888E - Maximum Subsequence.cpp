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

vll gen(vll a, ll m){
    vll temp;
    for(ll mask = 0; mask < (1<<a.size()); mask++){
        ll cnt = 0;
        for(ll i = 0; i < a.size(); i++){
            if(mask & (1<<i)){
                cnt += a[i]; cnt %= m;
            }
        }
        temp.pb(cnt);
    }
    return temp;
}

void solve(ll TC, ll TC2) {
    ll n,m; cin >> n >> m;
    vll a(n); for(ll i =0 ; i < n; i++){cin >> a[i]; a[i] %= m;}
    vll b,c; for(ll i = 0; i < n / 2; i++){b.pb(a[i]);}
    for(ll i = n / 2; i < n; i++){c.pb(a[i]);}
    b = gen(b, m);
    c = gen(c,m);
    ll ans = 0;
    set<ll> nums; for(ll i = 0; i < c.size(); i++){ans = max(c[i], ans); nums.insert(c[i]);}
    for(ll i = 0; i < b.size(); i++){
        ans = max((b[i] +  *--nums.end()) % m, ans);
        ans = max(ans, b[i]);
        ll num = m - b[i];
        auto it = nums.lower_bound(num);
        if(it == nums.begin()){continue;}
        else{
            --it;
            ll x = b[i] + *it; x %= m;
            ans = max(x, ans);
        }
    }
    cout << ans;
}

int main() {
    FAST;
    tc1;
}
