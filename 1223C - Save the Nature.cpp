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
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout << std::fixed << A << std::endl;

void solve(){
    ll n;
    cin >> n;
    vll ar(n);
    for (ll i = 0; i < n; i++) { cin >> ar[i]; }
    sort(ar.begin(), ar.end());
    reverse(ar.begin(), ar.end());
    ll x, a, y, b, k;
    cin >> x >> a >>y >> b >> k;
    if(y > x){swap(y,x); swap(a, b);}
    vll pre(n+1);
    pre[0] = 0;
    for(ll i = 1; i <= n; i++){pre[i] = pre[i-1] + ar[i-1];}
    ll dc = 0, xc = 0, yc = 0;
    for(ll i = 0; i < n; i++){
        if((i+1) % a == 0 && (i+1) % b == 0){dc++;}
        else if((i+1) % a == 0){xc++;}
        else if((i+1) % b == 0){yc++;}
        ll count = 0;
        count += pre[dc] / 100 * (x+y);
        count += (pre[dc+xc] - pre[dc])/ 100 * (x);
        count += (pre[dc+xc+yc] - pre[dc+xc] ) / 100 * (y);
        if(count >= k){cout << i + 1 << "\n"; return;}
    }
    cout << -1 << "\n";
}

int main() {
    FAST;
    tc;
}
