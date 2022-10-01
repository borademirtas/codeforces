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

struct segtree{
    ll size;
    vll sums;
    void init(ll n){
        size = 1;
        while(size < n){size *= 2;}
        sums.assign(2*size, 0LL);
    }
    void build(vll a, ll x, ll lx, ll rx){
        if(rx - lx == 1){
            if(lx < a.size()){sums[x] = a[lx];}
            return;
        }
        ll m = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        sums[x] = sums[2*x+1] + sums[2*x+2];
    }
    void build(vll a){
        build(a, 0, 0, size);
    }
    void set(ll i, ll v,  ll x, ll lx, ll rx){
        if(rx - lx == 1){
            sums[x] = v;
            return;
        }
        ll m = (lx+rx) / 2;
        if(i < m){set(i, v, 2*x+1, lx, m);}
        else{set(i, v, 2*x+2, m, rx);}
        sums[x] = sums[2*x+1] + sums[2*x+2];
    }
    void set(ll i, ll v){
        set(i, v, 0, 0, size);
    }


    ll sum(ll l, ll r, ll x, ll lx, ll rx){
        if(lx >= r || l >= rx){return 0;}
        if(lx >= l && rx <= r){return sums[x];}
        ll m = (lx + rx) / 2;
        ll s1 = sum(l, r, 2 * x + 1, lx, m);
        ll s2 = sum(l, r, 2 * x + 2, m, rx);
        return s1 + s2;
    }
    ll sum(ll l, ll r){
        return sum(l, r, 0, 0, size);
    }
};



void solve(ll TC, ll TC2) {
    ll n; cin >> n;
    vll a(n*n); mpll b; vll u; vp nums;
    vector<vector<ll>> pos(n, vector<ll>(n));
    for(ll i = 0; i < n * n; i++){cin >> a[i]; b[a[i]]++; if(b[a[i]] == 1){u.pb(a[i]);}}
    for(ll i = 0; i < u.size(); i++){ nums.pb(mp(b[u[i]], u[i]));}
    ll num = 1;
    ll fc = 0, tw = 0, oc = 0;
    vll fours;
    vll twos;
    vll ones;
    for(ll i = 0; i < nums.size(); i++){
        fc += nums[i].first / 4; for(ll j = 0 ; j < nums[i].first / 4; j++){fours.pb(nums[i].second);}
        tw += (nums[i].first % 4) / 2; for(ll j = 0 ; j < (nums[i].first % 4) / 2; j++){twos.pb(nums[i].second);}
        oc += nums[i].first % 2; if(nums[i].first % 2 == 1){ones.pb(nums[i].second);}
    }
    if(n%2 == 0){
        if(oc > 0 || tw > 0){cout << "NO\n"; return;}
        else{cout << "YES\n";}
        for(ll i = 0; i < n / 2; i++){
            for(ll j = 0; j < n / 2; j++){
                pos[i][j] = fours.back();
                pos[n-1-i][j] = fours.back();
                pos[n-1-i][n-1-j] = fours.back();
                pos[i][n-1-j] = fours.back();
                fours.pop_back();
            }
        }
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                cout << pos[i][j] << " ";
            }
            cout << "\n";
        }
    }
    else{
        if(oc != 1 || tw % 2 == 1 || fc < (n*n -1 - 2 * (n-1)) / 4  ){cout << "NO\n"; return;}
        else{cout << "YES\n";}
        for(ll i = 0; i < n / 2; i++){
            for(ll j = 0; j < n / 2; j++){
                pos[i][j] = fours.back();
                pos[n-1-i][j] = fours.back();
                pos[n-1-i][n-1-j] = fours.back();
                pos[i][n-1-j] = fours.back();
                fours.pop_back();
            }
        }
        for(ll i = 0; i < fours.size(); i++){
            twos.pb(fours[i]); twos.pb(fours[i]);
        }
        for(ll i = 0; i < n / 2; i++){
            pos[n/2][i] = twos.back();
            pos[n/2][n-1-i] = twos.back();
            twos.pop_back();
        }
        for(ll i = 0; i < n / 2; i++){
            pos[i][n/2] = twos.back();
            pos[n-1-i][n/2] = twos.back();
            twos.pop_back();
        }
        pos[n/2][n/2] = ones[0];
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                cout << pos[i][j] << " ";
            }
            cout << "\n";
        }
    }
}


int main() {
    FAST;
    tc1;
}
