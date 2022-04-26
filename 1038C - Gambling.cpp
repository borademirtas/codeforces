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
    ll n;
    cin >> n;
    ll t1 = 0, t2 = 0;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
    vll b(n); for (ll i = 0; i < n; i++) { cin >> b[i]; }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    ll l = 0, r = 0;
    for (ll i = 0; i < n * 2; i++) {
        if (i % 2 == 0) {
            if (r == n || (l != n && a[l] > b[r])) { t1 += a[l]; l++; }
            else { r++; }
        }
        if (i % 2 == 1) {
            if (r == n || (l != n && a[l] > b[r])) {l++; }
            else { t2 += b[r]; r++; }
        }
    }
    cout << t1 - t2;
}
