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
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
#define tri pair<ll, pair<ll,ll>>
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}

void solve(ll TC, ll TC2){
    ll n;
    cin >> n;
    vll a(n);
    vll ans(n+1);
    map<ll,ll> b;
    vll c;
    for(ll i = 0 ; i < n; i++){
        cin >> a[i];
        b[a[i]]++;
        if(b[a[i]] == 1){c.pb(a[i]);}
    }
    ll total = 0;
    for(ll i = 0; i < c.size(); i++){
        ans[b[c[i]]]++;
        total += b[c[i]];
    }
    ll tot = n;
    ll add = 0;
    ll cur = 0;
    for(ll i = n; i > 0; i--){
        total -= ans[i] * i;
        add += cur;
        tot = min(tot, add + total);
        cur += ans[i];
    }
    cout << tot << "\n";
}

int main() {
    FAST;
    tc;
}
