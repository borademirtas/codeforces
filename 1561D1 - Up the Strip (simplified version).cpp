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







void solve(ll TC, ll TC2) {
    int n, m; cin >> n >> m;
    vll cnt(n+1);
    cnt[n] = 1;
    ll na = 0;
    for(ll i = n; i >= 2; i--){
        cnt[i] += na; cnt[i] %= m;
        vector<int> a;
        int d = isqrt(i);
        for(int j = 1; j <= d; j++){
            a.pb(j);
        }
        for(int j = d; j >= 2; j--){
            if(i/j >= 2 && i / j != i){
                if(a.empty()){a.pb(i/j);}
                else if(i / j != a.back()){a.pb(i/j);}
            }
        }
        ll sz = a.size();
        for(ll j = 0; j < a.size(); j++){
            if(j == 0){
                cnt[1] += cnt[i] * (i-a.back());
            }
            else{
                cnt[a[j]] += cnt[i] * (a[sz-j] - a[sz-j-1]);
            }
        }
        na += cnt[i];
        na %= m;
    }
    cnt[1] += na; cnt[1] %= m;
    cout << cnt[1];
}

int main() {
    FAST;
    tc1;
}
