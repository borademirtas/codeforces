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

ll calcpow(ll a, ll b){
    ll num = 1;

    for(ll i = 0; i < b; i++){
        num *= a; if(num > 1e10){return -1;}
    }
    return num;

}




void solve(ll TC, ll TC2) {
    ll n, k; cin >> n >> k; vll a(n); ll cnt= 0; ll mx = 1e10;
    ll oc = 0; vll num(1e5+1);
    for(ll i = 0; i < n; i++){cin >> a[i]; }
    vll inv(n); vll mlt(1e5+1); mlt[1] = 1e5;

    for(ll i = 2; i <= 1e5; i++){
        ll cnum = 1;
        ll x = 0;
        while(cnum <= mx){x++; cnum *= i;}
        mlt[i] = x - 1;

    }


    for(ll i = 0; i < n; i++){
        if(a[i] == 1){continue;}
        vll fac = prime(a[i]);
        sort(all(fac));
        vll nw;
        vll op;
        ll cnum = fac[0], occ = 1;
        for(ll j = 1; j < fac.size(); j++){
            if(fac[j] != fac[j-1]){
                nw.pb(calcpow(cnum, occ % k));  op.pb(calcpow(cnum, (k - (occ % k)) % k));
                occ = 1; cnum = fac[j];

            }
            else{occ++;}
        }
        nw.pb(calcpow(cnum, occ %k));  op.pb(calcpow(cnum, (k - (occ % k)) % k));
        ll cur =  1; for(ll j = 0; j < nw.size(); j++){cur *= nw[j]; if(nw[j] == -1){cur = -1; break;}  }
        ll nv = 1; for(ll j = 0; j < nw.size(); j++){nv *= op[j];  if(op[j] == -1){nv = -1; break;}}
        a[i] = cur;
        inv[i] = nv;
    }
    for(ll i = 0; i < n; i++){
        if(a[i] == 1){oc++;} num[a[i]]++;
    }
    cnt += (oc*(oc-1)) / 2;
    for(ll i = 0; i < n; i++){
        if(a[i] <= 0 || a[i] > 1e5 || inv[i] <= 0 || inv[i] > 1e5 ){continue;}
        num[a[i]]--; if(a[i] == 1){continue;}
        cnt += num[inv[i]];
    }
    cout << cnt;
}

int main() {
    FAST;
    tc1;
}
