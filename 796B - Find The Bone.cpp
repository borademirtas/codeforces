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
    ll n, m, k, bp = 1, ans = - 1;
    cin >> n >> m >> k;
    map<ll, ll> holes;
    for (ll i = 0; i < m; i++) { ll x; cin >> x; holes[x]++; }
    if (holes[1] == 1) { cout << 1; return 0; }
    for (ll i = 0; i < k; i++) {
        ll a, b;
        cin >> a >> b;
        if (bp == a) { bp = b; }
        else {
            if (bp == b) { bp = a; }
        }
        if (holes[bp] == 1) { ans = bp; break; }
    }
    if (ans != -1) { cout << ans; return 0; }
    cout << bp;
}
