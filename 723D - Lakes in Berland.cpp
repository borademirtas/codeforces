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
bool ok = true;
ll n, m, k;
ll cc = 0;
vector<string> s;

void dfs(int v) {
    used[v] = true;
    cc++;
    ll num1 = v / m;
    ll num2 = v % m;
    if(num1 == 0 || num1 == n - 1 || num2 == 0 || num2 == m - 1){ok = false;}
    for (int u : adj[v]) {
        if (!used[u])
            dfs(u);
    }
}

void fill(int v) {
    used[v] = true;
    ll num1 = v / m;
    ll num2 = v % m;
    s[num1][num2] = '*';
    for (int u : adj[v]) {
        if (!used[u])
            fill(u);
    }
}

void solve(){
    cin >> n >> m >> k;
    adj.resize(n*m);
    used.resize(n*m);
    s.resize(n);
    for (ll i = 0; i < n; i++) { cin >> s[i]; }
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            if(s[i][j] == '.'){
                if(i != 0 && s[i-1][j] == '.'){adj[m*i+j].pb(m*(i-1)+j); adj[m*(i-1)+j].pb(m*i+j); }
                if(j != m - 1 && s[i][j+1] == '.'){adj[m*i+j].pb(m*i+j+1); adj[m*i+j+1].pb(m*i+j);}
            }
        }
    }
    vp works;
    for(ll i = 0; i < n*m; i++){
        ok = true; cc = 0;
        if(!used[i] && s[i/m][i%m] == '.'){dfs(i); if(ok){works.pb(mp(cc, i));} }
    }
    sort(all(works));
    ll ans = 0;
    for(ll i = 0; i < n * m; i++){used[i] = false;}
    for(ll i = 0; i < works.size() - k; i++){
        ans += works[i].first;
        fill(works[i].second);
    }
    cout << ans << "\n";
    for(ll i = 0; i < s.size(); i++){
        cout << s[i] << "\n";
    }
}

int main() {
    FAST
    tc1
}
