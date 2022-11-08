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
    void init(ll n, vll a){
        st.resize(n+2);
        for(ll i = 0; i < st.size(); i++){st[i].resize(26);}
        for(ll i = 0; i < a.size(); i++){st[i][0] = a[i];}
        for (int j = 1; j <= 25; j++){
            for (int i = 0; i + (1 << j) < n+2; i++){
                st[i][j] = max(st[i][j-1], st[i + (1 << (j - 1))][j - 1]);
            }
        }
    }


};

void solve(ll TC, ll TC2) {
    ll n; cin >> n; vll a(n); for(ll i = 0; i < n; i++){cin >> a[i];}
    vll pre(n+1); for(ll i = 0; i < n; i++){pre[i+1] = a[i] + pre[i];}
    vll suf(n+1); for(ll i = n -1; i >= 0; i--){suf[i] = suf[i+1] + a[i];}
    vll lg(n+2);
    lg[1] = 0;
    for (ll i = 2; i <= n + 1; i++){lg[i] = lg[i/2] + 1;}
    st f, p, s; f.init(n, a); p.init(n, pre); s.init(n, suf);
    vp nums(a.size());
    for(ll i = 0; i < a.size(); i++){
        if(a[i] <= 0){nums[i] = mp(-1,-1); continue;}
        ll x = a[i];
        ll l = i, r = n;
        while(r - l > 1){
            ll m = (l+r) / 2;
            ll j = lg[m - i + 1];
            ll mx = max(f.st[i][j], f.st[m - (1 << j) + 1][j]);
            if(mx > x){r = m;}
            else{l = m;}
        }
        ll n1 = l;
        l = -1, r = i;
        while(r - l > 1){
            ll m = (l+r) / 2;
            ll j = lg[i - m + 1];
            ll mx = max(f.st[m][j], f.st[i - (1 << j) + 1][j]);
            if(mx > x){l = m;}
            else{r  = m;}
        }
        ll n2 = r;
        nums[i] = mp(n1,n2);
    }
    for(ll i = 0; i < n; i++){
        if(nums[i].first == -1 && nums[i].second == -1){continue;}
        ll x = nums[i].first + 1, y = nums[i].second;
        ll cnt = 0;
        ll j = lg[x - (i+1) + 1];
        ll mx = max(p.st[i+1][j], p.st[x - (1 << j) + 1][j]);
        cnt += mx - pre[i+1];
        j = lg[i - y + 1];
        mx = max(s.st[y][j], s.st[i - (1 << j) + 1][j]);
        cnt += mx - suf[i];
        if(cnt > 0){cout << "NO\n"; return;}
    }
    cout << "YES\n";
}

int main() {
    FAST;
    tc;
}
