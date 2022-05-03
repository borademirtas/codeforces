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

int main() {
    FAST;
    ll n, m;
    cin >> n >> m;
    bool ok = false;
    vll a(n);
    vll b(m + 1);
    for (ll i = 0; i < n; i++) { cin >> a[i]; }
    for (ll i = 1; i <= m; i++) { cin >> b[i]; }
    mpll c;
    mpll d;
    for (ll i = 0; i < n; i++) {
        c = d;
        for (ll j = i; j < n; j++) {
            c[a[j]]++;
            ll streak = 0;
            for (ll k = 1; k <= m; k++) { if (c[k] == b[k]) { streak++; } }
            if (streak == m) { ok = true; }
        }
    }
    if (ok == true) { cout << "YES\n"; }
    else { cout << "NO\n"; }
}
