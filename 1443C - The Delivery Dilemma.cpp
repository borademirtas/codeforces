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
    ll n, total = 0, num = 0;
    bool all = false;
    cin >> n;
    vp a(n);
    for (ll i = 0; i < n; i++) { cin >> a[i].first; }
    for (ll i = 0; i < n; i++) { cin >> a[i].second; }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    for (ll i = 0; i < n; i++) {
        if (a[i].second + total <= a[i].first) { total += a[i].second; if (i == n - 1) { all = true; } }
        else {num = i; break; }
    }
    if (all == true) { cout << total << "\n"; return; }
    cout << max(total, a[num].first) << "\n"; return;
}

int main() {
    FAST;
    tc;
}
