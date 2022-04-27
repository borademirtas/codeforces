#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>  
#include <fstream>
#include <string>
#include <cctype>
#include <bitset>
#include <math.h>
#include <map>
#include <set>
#include <numeric>
#include <queue>
#include <list>
#include <deque>
#include <climits>
#include <iomanip>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define PB push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));

void solve() {
    ll n, w, total = 0 ;
    cin >> n >> w;
    ll c = w / 2;
    if (w % 2 == 1) { c++; }
    vp a(n);
    vll ans;
    for (ll i = 0; i < n; i++) { cin >> a[i].first; total += a[i].first; a[i].second = i; }
    sort(a.begin(), a.end());
    ll l = 0, r = n - 1;
    while (r >= l) {
        if (total >= c && total <= w) { break; }
        if (total - a[r].first >= c) { total -= a[r].first; r--; }
        else { total -= a[l].first; l++; }
    }
    if (l > r) { cout << -1 << "\n"; return; }
    else { cout << r - l + 1 << "\n"; 
    for (ll i = l; i <= r; i++) { ans.push_back(a[i].second); }
    sort(ans.begin(), ans.end());
    for (ll i = 0; i < ans.size(); i++) { cout << ans[i] + 1 << " "; }
    cout << "\n"; return;
    }
}

int main() {
    FAST;
    tc;
}
