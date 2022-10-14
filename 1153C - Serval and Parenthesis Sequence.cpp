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
    ll n; string s; cin >> n;
    cin >> s; if(n%2==1){cout << ":("; return;}
    if(s[0] == ')' || s[1] == ')' || s[n-1] == '(' || s[n-2] == '(' ){cout << ":("; return;}
    ll cnt1 = 0, cnt2 = 0;
    for(ll i = 1; i < n - 1; i++){
        if(s[i] == ')'){cnt2++;}
        if(s[i] == '('){cnt1++;}
    }
    ll q = (n-2) / 2;
    ll need1 = q - cnt1, need2 = q- cnt2;
    ll num = 0;
    for(ll i = 1; i < n - 1; i++){
        if(s[i] == '?'){
            num++;
            if(num <= need1){s[i] = '(';}
            else{s[i] = ')';}
        }
    }

    s[n-1] = ')'; s[0] = '(';
    ll cnt = 0, mn = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == ')'){cnt--;}
        else{cnt++;}
        mn = min(mn, cnt);
        if(cnt == 0 && i != n - 1){mn = -1;}
    }
    if(mn < 0 || cnt != 0){cout << ":("; return;}
    cout << s;


}

int main() {
    FAST;
    tc1;
}
