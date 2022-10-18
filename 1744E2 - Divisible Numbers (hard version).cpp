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



vll factors(ll x){
    vll ans;
    for(ll i = 1; i <= isqrt(x); i++){
        if(x % i == 0){
            ans.pb(i);
            if(i * i != x){
                ans.pb(x/i);
            }
        }
    }
    return ans;
}

void solve(ll TC, ll TC2) {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    vll f1 = factors(a);
    vll f2(factors(b));
    set<ll> s;
    for(ll i = 0; i < f1.size(); i++){
        for(ll j = 0; j < f2.size(); j++){
            s.insert(f1[i] * f2[j]);
        }
    }
    vll pos;
    while(!s.empty()){
        pos.pb(*s.begin()); s.erase(*s.begin());
    }

    for(ll i = 0; i < pos.size(); i++){
        ll n1 = (a*b) / pos[i];
        ll n2 = (a*b) / n1;
        ll need = b + (n2 - b % n2);
        ll need1 = a + (n1 - a % n1);
        if(need <= d && need1 <= c){cout << need1 << " " << need << "\n"; return; }
    }
    cout << -1 << " " << -1 << "\n";
}

int main() {
    FAST;
    tc;
}
