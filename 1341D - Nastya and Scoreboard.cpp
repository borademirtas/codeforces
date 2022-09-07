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
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> dp(n+1, vector<ll>(k+1));
    dp[0][0] = 1;
    vll nums{0 ,1, 2, 3, 4, 5, 6, 7, 8, 9};
    vll need{6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    vector<string> sx(n);
    for(ll i = 0; i < n; i++){
        cin >> sx[i];
    }
    reverse(all(sx));
    for(ll i = 0; i < n; i++){
        vector<bool> ok(10, true);
        string s = sx[i];
        ll cnt = 0;
        if(s[0] == '1'){ok[1] = false; ok[4] = false; cnt++;}
        if(s[1] == '1'){ok[1] = false; ok[2] = false;  ok[3] = false; ok[7] = false; cnt++;}
        if(s[2] == '1'){ok[5] = false; ok[6] = false; cnt++;}
        if(s[3] == '1'){ok[1] = false; ok[7] = false; ok[0] = false; cnt++;}
        if(s[4] == '1'){ok[1] = false; ok[3] = false; ok[4] = false; ok[5] = false; ok[7] = false; ok[9] = false; cnt++;}
        if(s[5] == '1'){ok[2] = false; cnt++;}
        if(s[6] == '1'){ok[1] = false; ok[4] = false; ok[7] = false; cnt++;}
        for(ll j = 0; j < 10; j++){
            if(!ok[j]){continue;}
            ll add = need[j] - cnt;
            for(ll t = 0; t <= k; t++){
                if(dp[i][t] == 0 || add + t > k){continue;}
                dp[i+1][t+add] = 1;
            }
        }
    }
    if(dp[n][k] == 0){cout << -1; return;}
    ll num = k;
    for (ll i = n; i > 0; i--) {
        vector<bool> ok(10, true);
        string s = sx[i-1];
        ll cnt = 0;
        if(s[0] == '1'){ok[1] = false; ok[4] = false; cnt++;}
        if(s[1] == '1'){ok[1] = false; ok[2] = false;  ok[3] = false; ok[7] = false; cnt++;}
        if(s[2] == '1'){ok[5] = false; ok[6] = false; cnt++;}
        if(s[3] == '1'){ok[1] = false; ok[7] = false; ok[0] = false; cnt++;}
        if(s[4] == '1'){ok[1] = false; ok[3] = false; ok[4] = false; ok[5] = false; ok[7] = false; ok[9] = false; cnt++;}
        if(s[5] == '1'){ok[2] = false; cnt++;}
        if(s[6] == '1'){ok[1] = false; ok[4] = false; ok[7] = false; cnt++;}
        ll best = -1;
        ll newnum = num;
        for(ll j = 0; j < 10; j++){
            ll add = need[j] - cnt;
            if(!ok[j] || num - add < 0){continue;}
            if(dp[i-1][num-add] == 1){
                best = j;
                newnum = num-add;
            }
        }
        cout << best ;
        num = newnum;
    }
}

int main() {
    FAST;
    tc1;
}
