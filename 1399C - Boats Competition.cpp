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
    ll n, best = 0;
    cin >> n;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
    sort(a.begin(), a.end());
    if (n == 1) { cout << 0 << "\n"; return; }
    for (ll i = a[0] + a[1]; i <= a[n - 1] + a[n - 2]; i++) {
        ll l = 0, r = n - 1;
        ll total = 0;
        while (r >= l) {
            if (a[l] + a[r] == i && l != r ) { total++; l++; r--; }
            else if (a[l] + a[r] > i) { r--; }
            else { l++; }
        }
        best = max(best, total);
    }
    cout << best << "\n"; return;
}

int main() {
    FAST;
    tc;
}
