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



void solve(ll TC, ll TC2){
    ll n, k;
    cin >> n >> k;
    string s; cin >> s;
    ll ans = 0;
    ll mn = INT_MAX, mx = -1;
    for(ll i = 1; i < n; i++){
        if(s[i-1] == '0' && s[i] == '1'){ans++;}
        if(s[i-1] == '1' && s[i] == '0'){ans += 10;}
        if(s[i-1] == '1' && s[i] == '1'){ans += 11;}
        if(s[i-1] == '1'){mn = min(mn, i-1); mx = max(mx, i-1);}
        if(s[i] == '1'){mn = min(mn, i); mx = max(mx, i);}
    }
    if(ans == 0){cout << 0 << "\n"; return;}
    ll dis = n - mx;
    dis--;
    if(mn == mx){
        if(mn == 0){
            ans += 1;
        }
        if(mx == n -1){
            ans += 10;
        }
        bool both = false;
        bool right = false;
        bool left = false;
        if(dis+mn <= k){both = true;}
        if(mn <= k){left = true;}
        if(dis <= k){right = true;}
        if(right){ans -= 10;}
        else if(left){ans -= 1;}
        cout << ans << "\n"; return;
    }
    if(mn == 0){
        ans += 1;
    }
    if(mx == n -1){
        ans += 10;
    }
    bool both = false;
    bool right = false;
    bool left = false;
    if(dis+mn <= k){both = true;}
    if(mn <= k){left = true;}
    if(dis <= k){right = true;}
    if(both){ans -= 11;}
    else if (right){ans -= 10;}
    else if(left){ans -= 1;}
    cout << ans << "\n"; return;
}

int main() {
    FAST;
    tc;
}
