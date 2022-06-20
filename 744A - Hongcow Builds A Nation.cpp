#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
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
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve(i+1);}
#define tc1 solve(1);
#define mpvll map<ll, vll>
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll unordered_map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << (A) << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}

vector<vll> adj;
vector<bool> used;
ll sum = 0;
bool ok = false;
ll cc = 0;
mpll h;

void dfs(int v) {
    used[v] = true;
    sum  += adj[v].size();
    cc++;
    if(h[v] > 0){ok = true;}
    for (int u : adj[v]) {
        if (!used[u])
            dfs(u);
    }
}

void solve(ll TC){
    ll n, m, k;
    cin >> n >> m >> k;
    adj.resize(n+1);
    used.resize(n+1);
    ll ans = 0;
    for(ll i = 0; i < k; i++){
        ll x;
        cin >> x;
        h[x]++;
    }
    for(ll i = 0; i < m; i++){
        ll x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    priority_queue<ll> cap;
    priority_queue<ll> ncap;
    for(ll i = 1; i <= n; i++){
        cc = 0;
        ok = false;
        sum = 0;
        if(!used[i]){
            dfs(i);
            ll num = ((cc - 1) * cc) / 2;
            sum /= 2;
            num -= sum;
            ans += num;
            if(ok){cap.push(cc);}
            else{ncap.push(cc);}
        }
    }
    while(!ncap.empty()){
        ll num1 = cap.top();
        ll num2 = ncap.top();
        ans += num1 * num2;
        cap.pop(); ncap.pop();
        cap.push(num1 + num2);
    }
    cout << ans;
}


int main(){
    FAST;
    tc1;
}
