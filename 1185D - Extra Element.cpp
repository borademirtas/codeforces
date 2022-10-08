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
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}
ll isqrt(ll x){ll ans = 0; for(ll k = 1LL << 30; k != 0; k /= 2){if ((ans + k) * (ans + k) <= x) {ans += k;} } return ans;   }

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

void solve(ll TC, ll TC2) {
    ll n; cin >> n; ll tg = 1e10;

    vll a(n); for(ll i = 0; i < n; i++){cin >> a[i];}  vll op = a; sort(all(a)); mpll b; ll cnt = 0;
    vll nw; for(ll i = 1; i < n; i++){nw.pb(a[i] - a[i-1]); b[nw.back()]++; if(b[nw.back()] == 1){cnt++;} }
    if(n <= 3){cout << 1; return;}
    set<ll> s;
    for(ll i = 1; i < nw.size(); i++){
        ll x1 = nw[i], x2 = nw[i-1];
        ll ad = x1 + x2;
        b[x1]--; if(b[x1] == 0){cnt--;}
        b[x2]--; if(b[x2] == 0){cnt--;}
        b[ad]++; if(b[ad] == 1){cnt++;}
        if(cnt == 1){tg = a[i];}
        b[x1]++; if(b[x1] == 1){cnt++;}
        b[x2]++; if(b[x2] == 1){cnt++;}
        b[ad]--; if(b[ad] == 0){cnt--;}
    }
    for(ll i = 2; i < n; i++){s.insert(a[i] - a[i-1]);} if(s.size() == 1){tg = a[0];} s.clear();
    for(ll i = 1; i < n - 1; i++){s.insert(a[i] - a[i-1]);} if(s.size() == 1){tg = a.back();} s.clear();
    if(tg == 1e10){cout << -1; return;}
    for(ll i = 0; i < n; i++){
        if(op[i] == tg){cout << i + 1; return;}
    }



}


int main() {
    FAST;
    tc1;
}
