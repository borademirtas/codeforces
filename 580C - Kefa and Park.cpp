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
#define PB push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout << std::fixed << A << std::endl;

int main() {
    FAST;
    ll n, m, total = 0;
    cin >> n >> m;
    vector<bool> used(n+1);
    vector<bool> cat(n+1);
    vector<bool> ok(n+1, true);
    vll streak(n+1, 0);
    queue<ll> q;
    vll parent(n+1);
    const ll num = n+1;
    vector<ll> adj[num];
    for(ll i = 1; i <= n; i++){ll x; cin >> x; cat[i] = x;}
    for(ll i = 0; i < n - 1; i++){
        ll x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    if(cat[1]){streak[1] = 1;}
    q.push(1);
    parent[1] = 0;
    used[1] = true;
    while(!q.empty()){
        ll v = q.front();
        q.pop();
        for (int u : adj[v]) {
            if (!used[u]) {
                parent[u] = v;
                if(!ok[parent[u]]){ok[u] = ok[parent[u]];}
                if(cat[u]){streak[u] = streak[parent[u]] + 1;}
                else{streak[u] = 0;}
                if(streak[u] > m){ok[u] = false;}
                if(adj[u].size() == 1 && ok[u]){total++;}
                used[u] = true;
                q.push(u);
            }
        }
    }
    cout << total;
}
