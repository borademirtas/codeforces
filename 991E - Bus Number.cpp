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
    ll n; cin >> n; string s = to_string(n); vll fac(20); fac[0] = 1; for(ll i = 1; i <= 19; i++){fac[i] = fac[i-1] * i;}
    vll cnt(10); for(ll i = 0; i < s.size(); i++){cnt[s[i]-'0']++;} ll ans = 0;
    vector<vll> pos;
    ll num = 0;
    for(ll i = 0; i < 10; i++){
        if(cnt[i] != 0){num = i; break;}
    }
    for(ll i = num; i < 10; i++){
        vector<vll> temp;
        if(cnt[i] == 0){continue;}
        if(i == num){
            for(ll j = 1; j <= cnt[i]; j++){
                vll x;
                for(ll t = 1; t <= j; t++){x.pb(i);}
                temp.pb(x);
            }
            pos = temp;
        }
        else{ for(ll j = 1; j <= cnt[i]; j++){
                for(ll t = 0; t < pos.size(); t++){
                    vll x = pos[t];
                    for(ll z = 1; z <= j; z++){x.pb(i);}
                    temp.pb(x);
                }
            }
            pos = temp;
        }
    }
    bool zero = false;
    if(pos[0][0] == 0){zero = true;}
    for(ll i = 0; i < pos.size(); i++){
        ll add = fac[pos[i].size()];
        vll count(10);
        for(ll j = 0; j < pos[i].size(); j++){count[pos[i][j]]++;}
        if(count[0] == pos[i].size()){continue;}
        for(ll j = 0; j < count.size(); j++){add /= fac[count[j]];}
        ans += add;
        if(zero){
            ll sub = fac[pos[i].size() - 1]; count[0]--;
            for(ll j = 0; j < count.size(); j++){sub /= fac[count[j]];}
            ans -= sub;
        }
    }
    cout << ans;
}

int main() {
    FAST;
    tc1;
}
