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
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout << fixed; cout.precision(6); cout << A << "\n";
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
#define tri pair<ll, pair<ll,ll>>
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}


vll prime(ll x){
    ll n = x; vll ans;
    while (n % 2 == 0) {ans.pb(2);n = n/2;} for (int i = 3; i <= sqrt(n); i = i + 2) {while (n % i == 0){ans.pb(i);n = n/i;}}
    if (n > 2){ans.pb(n);} return ans;
}

ll inverse(ll a){
    ll m = 998244353; ll m0 = m; ll y = 0, x = 1;
    //if (m == 1){return 0;}
    while (a > 1) { ll q = a / m; ll t = m; m = a % m, a = t; t = y; y = x - q * y; x = t;}
    if (x < 0){x += m0;}
    return x;
}
ll binpow(ll a, ll b, ll m) {
    a %= m; ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

vll parent(26);

void make_set(int v) {
    parent[v] = v;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}


void solve(ll TC, ll TC2) {
    parent.clear();
    ll n; string nw; cin >> n >> nw;
    mpll cnt; vector<char> ans(26);
    string s;
    for(ll i = 0; i < n; i++){
        cnt[nw[i]]++; if(cnt[nw[i]] == 1){s.pb(nw[i]);}
    }
    for(ll i = 0; i < 26; i++){parent[i] = i;}
    for(ll i = 0; i < s.size(); i++){
        ll mn = INT_MAX;
        for(ll t = 0; t < 26; t++){
            for(ll j = 0; j < 26; j++){
                parent[j] = parent[parent[j]];
            }
        }
        for(ll j = 0; j < 26; j++){
            if(parent[j] == j && parent[s[i] - 'a'] != j){mn = min(mn, j);}
        }
        if(mn == INT_MAX){mn = parent[parent[s[i] - 'a']];}
        ans[s[i] - 'a'] = mn + 'a';
        union_sets(s[i] - 'a', mn);
    }
    for(ll i = 0; i < nw.size(); i++){
        cout << ans[nw[i] - 'a'];
    }
    cout << "\n";
}


int main() {
    FAST;
    tc;
}
