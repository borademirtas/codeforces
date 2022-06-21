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
#include <fstream>
#include <stack>
#include <bitset>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define tc1 solve();
#define mpvll map<ll, vll>
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll unordered_map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}

vector<vll> adj;
vector<bool> used;
vll color;
mpll cnt;
ll best = 0;
ll cc = 0;

void dfs(int v) {
    cc++;
    used[v] = true;
    cnt[color[v]]++;
    best = max(best, cnt[color[v]]);
    for (int u : adj[v]) {
        if (!used[u])
            dfs(u);
    }
}

void solve(){
   ll n, m, k;
   cin >> n >> m >> k;
   color.resize(n+1);
   adj.resize(n+1);
   used.resize(n+1);
   for(ll i = 1; i <= n; i++){
       cin >> color[i];
   }
   for(ll i = 0; i < m; i++){
       ll x, y;
       cin >> x >> y;
       adj[x].pb(y);
       adj[y].pb(x);
   }
   ll ans = 0;
    for(ll i = 1; i <= n; i++){
        best = 0; cc = 0;
        if(!used[i]){cnt.clear(); dfs(i); ans += cc - best; }
    }
    cout << ans;
}

int main() {
    FAST;
    tc1;
}
