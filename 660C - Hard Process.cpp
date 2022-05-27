#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
#include <cctype>
#include <map>
#include <cmath>
#include <set>
#include <numeric>
#include <queue>
#include <list>
#include <deque>
#include <climits>
#include <iomanip>
#include <fstream>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define tc1 solve();
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)

vll a;
ll n, k;

bool check(ll m){
    ll l = 0, r = m;
    ll zc = 0;
    for(ll i = 0; i < m; i++){if(a[i] == 0){zc++;}}
    if(zc <= k){return true;}
    while(r != n){
        if(a[r] == 0){zc++;}
        if(a[l] == 0){zc--;}
        if(zc <= k){return true;}
        r++; l++;
    }
    return false;
}

void solve() {
    cin >> n >> k;
    a.resize(n);
    ll c = 0;
    for (ll i = 0; i < n; i++) { cin >> a[i];  if(a[i] == 0){c++;}}
    if(c <= k){cout << n << "\n"; for(ll i = 0; i < n; i++){cout << 1 << " ";} return;}
    ll l = 0, r = n;
    ll ans = -1;
    while(r >= l){
        ll m = (l + r) / 2;
        bool ok = check(m);
        bool ok2 = check(m+1);
        if(ok && !ok2){ans = m; break;}
        if(ok){l = m;}
        else{r = m;}
    }
    l = 0, r = ans;
    ll zc = 0;
    for(ll i = 0; i < ans; i++){if(a[i] == 0){zc++;}}
    if(zc <= k){
        for(ll i = l; i < r; i++){a[i] = 1;}
    }
    while(r != n){
        if(a[r] == 0){zc++;}
        if(a[l] == 0){zc--;}
        r++; l++;
        if(zc <= k){
            for(ll i = l; i < r; i++){a[i] = 1;}
        }
    }
    cout << ans << "\n";
    for(ll i = 0; i < n; i++){
        cout << a[i] << " ";
    }

}



int main() {
    FAST;
    tc1;
}
