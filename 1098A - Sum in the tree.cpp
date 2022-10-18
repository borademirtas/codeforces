#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
#include <cctype>
#include <map>
#include <cmath>
#include <unordered_map>
#include <set>
#include <numeric>
#include <queue>
#include <list>
#include <deque>
#include <climits>
#include <iomanip>
#include <cstring>
#include <fstream>
#include <stack>
#include <bitset>
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
#define tri pair<ll, pair<ll,ll>>
ll rd(ll a, ll b){return (a+b-1) / b;}
ll isqrt(ll x){ll ans = 0; for(ll k = 1LL << 30; k != 0; k /= 2){if ((ans + k) * (ans + k) <= x) {ans += k;} } return ans;   }
vll prime(ll x){ll n = x; vll ans; while (n % 2 == 0) {ans.pb(2);n = n/2;} for (int i = 3; i <= sqrt(n); i = i + 2) {while (n % i == 0){ans.pb(i);n = n/i;}}if (n > 2){ans.pb(n);} return ans;}
ll inverse(ll a){ll m = 998244353; ll m0 = m; ll y = 0, x = 1; while (a > 1) { ll q = a / m; ll t = m; m = a % m, a = t; t = y; y = x - q * y; x = t;}if (x < 0){x += m0;} return x;}
ll binpow(ll a, ll b, ll m) { a %= m; ll res = 1; while (b > 0) { if (b & 1){res = res * a % m;}a = a * a % m; b >>= 1;} return res;}

vector<vll> adj;
vll val;
vll pmax;


void solve(ll TC, ll TC2) {
    ll n; cin >> n; adj.resize(n+1);
    for(ll i = 2; i <= n; i++){
         ll x; cin >> x;
         adj[x].pb(i);
    }
    val.resize(n+1); pmax.resize(n+1);
    for(ll i = 1; i <= n; i++){cin >> val[i];}
    pmax[1] = val[1];
    queue<ll> q;
    q.push(1);
    vector<bool> used(n+1);
    vll p(n+1); p[1] = -1;
    used[1] = true;
    while (!q.empty()) {
        ll v = q.front();
        q.pop();

        if(v != 1){
            ll mx = pmax[p[v]];
            if(val[v] == -1){
                pmax[v] = mx;
            }
            else{
                if(val[v] < mx){cout << -1; return;}\
                pmax[v] = val[v];

            }
        }
        for (ll u : adj[v]) {
            if (!used[u]) {
                used[u] = true;
                q.push(u);
                p[u] = v;
            }
        }
    }
    for(ll i = 1; i <= n; i++){
        if(val[i] == -1){
            if(adj[i].size() == 0){
                val[i] = val[p[i]];
            }
            else{
                ll mx = INT_MAX;
                for(ll j = 0; j < adj[i].size(); j++){
                    mx = min(val[adj[i][j]], mx);
                }
                val[i] = mx;
            }
        }
    }
    ll ans = val[1];
    for(ll i = 2; i <= n; i++){
        ans += val[i] - val[p[i]];
    }
    cout << ans;

}

int main() {
    FAST;
    tc1;
}
