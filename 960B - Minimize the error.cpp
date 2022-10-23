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
void setIO(string name) {ios_base::sync_with_stdio(0); cin.tie(0);freopen((name+".in").c_str(),"r",stdin);freopen((name+".out").c_str(),"w",stdout);}
ll rd(ll a, ll b){return (a+b-1) / b;}
ll isqrt(ll x){ll ans = 0; for(ll k = 1LL << 30; k != 0; k /= 2){if ((ans + k) * (ans + k) <= x) {ans += k;} } return ans;   }
vll prime(ll x){ll n = x; vll ans; while (n % 2 == 0) {ans.pb(2);n = n/2;} for (int i = 3; i <= sqrt(n); i = i + 2) {while (n % i == 0){ans.pb(i);n = n/i;}}if (n > 2){ans.pb(n);} return ans;}
ll inverse(ll a){ll m = 998244353; ll m0 = m; ll y = 0, x = 1; while (a > 1) { ll q = a / m; ll t = m; m = a % m, a = t; t = y; y = x - q * y; x = t;}if (x < 0){x += m0;} return x;}
ll binpow(ll a, ll b, ll m) { a %= m; ll res = 1; while (b > 0) { if (b & 1){res = res * a % m;}a = a * a % m; b >>= 1;} return res;}
ll lg2(ll n){ll cnt=0;while(n){cnt++;n/=2;}return cnt;}

void solve(ll TC, ll TC2) {
    ll n, k1, k2; cin >> n >> k1 >> k2;
    vll a(n); for(ll i = 0; i < n; i++){cin >> a[i];}
    vll b(n); for(ll i = 0; i < n; i++){cin >> b[i];}

    for(ll i = 0; i < k1; i++){
        ll mx = abs(a[0] - b[0]), mxp = 0;
        for(ll j = 0; j < n; j++){
            if(abs(a[j] - b[j]) > mx){
                mx = abs(a[j] - b[j]); mxp = j;
            }
        }

        if(a[mxp] >= b[mxp]){a[mxp]--;}
        else{a[mxp]++;}
    }

    for(ll i = 0; i < k2; i++){
        ll mx = abs(a[0] - b[0]), mxp = 0;
        for(ll j = 0; j < n; j++){
            if(abs(a[j] - b[j]) > mx){
                mx = abs(a[j] - b[j]); mxp = j;
            }
        }
        if(a[mxp] <= b[mxp]){b[mxp]--;}
        else{b[mxp]++;}
    }
    ll ans = 0; for(ll i = 0; i < n; i++){ll x = abs(a[i] - b[i]); ans += x * x;}
    cout << ans;
}

int main() {
    FAST;
    tc1;
}