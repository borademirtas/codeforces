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
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll unordered_map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
ll n, m, s, t;
vector<vll> adj;
vector<ll> edis;
vector<ll> bdis;
ll target;

void bfs(ll x){
    queue<ll> q;
    vector<bool> used(n+1);
    vector<ll> d(n+1), p(n+1);
    q.push(x);
    used[x] = true;
    p[x] = -1;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (ll u : adj[v]) {
            if (!used[u]) {
                used[u] = true;
                q.push(u);
                d[u] = d[v] + 1;
                p[u] = v;
            }
        }
    }
    edis[x] = d[t];
    bdis[x] = d[s];
    if(x == s){target = d[t];}
}

void solve(){
    cin >> n >> m >> s >> t;
    map<pair<ll,ll>, ll> used;
    adj.resize(n+1);
    edis.resize(n+1);
    bdis.resize(n+1);
    for(ll i = 0; i < m; i++){
        ll x, y;
        cin >> x >> y;
        if(x > y){swap(x, y);}
        adj[x].pb(y);
        adj[y].pb(x);
        used[mp(x,y)]++;
    }
    for(ll i = 1; i <= n; i++){
        bfs(i);
    }
    ll total = 0;
    for(ll i = 1; i <= n; i++){
        for(ll j = i; j <= n; j++){
            ll tdis = 1;
            tdis += min(bdis[i] + edis[j], bdis[j] + edis[i]);
            if(tdis >= target && i != j && used[mp(min(i,j), max(i,j))] == 0){total++;}
        }
    }
    cout << total;
}

int main() {
    FAST;
    tc1;
}
