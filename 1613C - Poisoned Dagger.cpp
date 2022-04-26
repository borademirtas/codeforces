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
#define mpll map<ll,ll>;
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
void solve() {
    ll n, h;;
    cin >> n >> h;
    vll a(n);  
    vll dif(n);
    for (ll i = 0; i < n; i++) { cin >> a[i]; if (i != 0) { dif[i - 1] = a[i] - a[i - 1]; } }

    if (n == 1) { cout << h << "\n"; return; }
    dif[n - 1] = h + 1;
    ll l = 0, r = h;
    while (r >= l) {
        ll m = (l + r) / 2;
        ll total1 = 0;
        ll total2 = 0;
        for (ll i = 0; i < n; i++) {
            total1 += min(m, dif[i]);
            total2 += min(m - 1, dif[i]);
        }
        if (total1 >= h) { r = m; }
        else { l = m; }
        if (total1 >= h && total2 < h) { cout << m << "\n"; return; }
    }
    
}
int main() {
    FAST;
    tc;
}
