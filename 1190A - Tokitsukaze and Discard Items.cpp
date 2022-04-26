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


int main() {
    FAST;
    ll n, m, k, pos1, pos2, total = 1;
    cin >> n >> m >> k;
    vll a(m); for (ll i = 0; i < m; i++) { cin >> a[i]; }
    ll l = 0, r = 0;
    if (k == 1) { cout << m; return 0; }
    while (r < m) {
        if (l == 0) {
            pos1 = a[l] / k;
            if (a[l] % k == 0) { pos1--; }
            pos2 = a[r] / k;
            if (a[r] % k == 0) { pos2--; }
        }
        else {
            pos1 = (a[l] - l) / k;
            if ((a[l] - l) % k == 0) { pos1--; }
            pos2 = (a[r] - l) / k;
            if ((a[r] - l) % k == 0) { pos2--; }
        }
        if (pos1 == pos2) { r++; }
        else { l = r; total++; }
    }
    cout << total;
}
