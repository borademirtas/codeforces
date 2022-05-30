#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
#include <cctype>
#include <map>
#include <cmath>
#include <set>
#include <numeric>
#include <queue>
#include <list>
#include <deque>
#include <climits>
#include <iomanip>
#include <fstream>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define tc1 solve();
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)

ll mn = 0;
vector<vll> adj;
vector<bool> vis(1000005, false);
vll a;
void dfs(ll v) {
    vis[v] = true;
    if(mn == -1){mn = a[v];}
    else{mn = min(mn, a[v]);}
    for (int u : adj[v]) {
        if (!vis[u])
            dfs(u);
    }
}

void solve() {
    ll n, m;
    cin >> n >> m;
    a.resize(n+1);
    adj.resize(n+1);
    vis.resize(n+1);
    for(ll i = 1; i < n+1; i++){cin >> a[i];}
    for(ll i = 0; i < m; i++){
        ll x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    ll total = 0;
    for(ll i = 1; i <=n; i++){
        mn = -1;
        if(!vis[i]){dfs(i); total += mn;}
    }
    cout << total;
}

int main() {
    FAST;
    tc1;
}
