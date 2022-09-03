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
#define vll vector<ll>
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve(i, t);}
#define tc1 solve(1, 1);
#define mpvll map<ll, vll>
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(6); cout << A << "\n";
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
#define tri pair<ll, pair<ll,ll>>
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}


vll prime(ll x){
    ll n = x;
    vll ans;
    while (n % 2 == 0) {ans.pb(2);n = n/2;}
    for (int i = 3; i <= sqrt(n); i = i + 2) {while (n % i == 0){ans.pb(i);n = n/i;}}
    if (n > 2){ans.pb(n);}
    return ans;
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
  ll l, r, x, y;
  vll primes;
  mpll ok;
  cin >> l >> r >> x >> y;

    for(ll u: prime(y)){
        primes.pb(u);
    }
   vector<vll> pos;
    ll n = primes.size();
    vector<ll> temp;
    vector<vector<ll>> ans;
    for(ll i = 0; i < (1 << n); i++){
        for(ll j = 0; j < n; j++){
            if(i & (1 << j))
                temp.push_back(primes[j]);
        }
        ans.push_back(temp);
        temp.clear();
    }
    ll cnt = 0;
    map<pair<ll, ll>, ll> used;
    for(ll i = 0; i < ans.size(); i++){
        ll mlt1 = x, mlt2 = x;
        for(ll j = 0; j < ans[i].size(); j++){
            mlt1 *= ans[i][j];
        }
        mlt2 *= y / mlt1;
        if(mlt1 >= l && mlt1 <= r && mlt2 >= l && mlt2 <= r && used[mp(mlt1, mlt2)] == 0 && gcd(mlt2, mlt1) == x && lcm(mlt1, mlt2) == y){cnt++; used[mp(mlt1, mlt2)]++;}
    }
    cout << cnt;
}

int main() {
    FAST;
    tc1;
}
