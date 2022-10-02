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

const int MAXN = 200005;
int st[MAXN][26];

void solve(ll TC, ll TC2) {
    ll n, m; cin >> n >> m;
    vll a(m); for(ll i = 0; i < m; i++){cin >> a[i];}
    for (ll i = 0; i < m; i++){
        st[i][0] = a[i];
    }
    for (int j = 1; j <= 25; j++){
        for (int i = 0; i + (1 << j) < MAXN; i++){
            st[i][j] = max(st[i][j-1], st[i + (1 << (j - 1))][j - 1]);
        }
    }
    int lg[MAXN+1];
    lg[1] = 0;
    for (int i = 2; i <= MAXN; i++){lg[i] = lg[i/2] + 1;}
    ll q; cin >> q;
    for(ll i = 0; i < q; i++){
        ll x1, y1, x2, y2, k;
        cin >> x1 >> y1 >> x2 >> y2 >> k;
        if(x1%k != x2 %k || y2%k != y1%k){cout << "NO\n"; continue;}
        ll l = min(y1, y2) - 1;
        ll r = max(y1, y2) - 1;
        ll mh = n - ((n-x2) % k);
        ll j = lg[r- l + 1];
        ll mx = max(st[l][j], st[r - (1 << j) + 1][j]);
        if(mh > mx){cout << "YES\n";}
        else{cout << "NO\n";}
    }

}


int main() {
    FAST;
    tc1;
}
