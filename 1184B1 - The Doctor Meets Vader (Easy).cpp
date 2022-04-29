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
    ll s, b;
    cin >> s >> b;
    vector<pair<ll, ll>> a(s);
    vector<pair<ll, ll>> c(b);
    for (ll i = 0; i < s; i++) { cin >> a[i].first; a[i].second = i; }
    for (ll i = 0; i < b; i++) { cin >> c[i].first >> c[i].second; }
    sort(a.begin(), a.end());
    sort(c.begin(), c.end());
    ll total = c[0].second;
    for (ll i = 1; i < b; i++) {
        c[i].second += total;
        total = c[i].second;
    }
    vll ans(s);
    ll l = 0, r = 0;
    while (l < s) {
        if (a[l].first < c[0].first) { ans[a[l].second] = 0; l++; continue; }
        if (a[l].first > c[b - 1].first) { ans[a[l].second] = c[b - 1].second; l++; continue; }
        if (r != b && a[l].first >= c[r].first) { r++; }
        else { ans[a[l].second] = c[r - 1].second; l++;}
    }
    for (ll i = 0; i < s; i++) {
        cout << ans[i] << " ";
   }
}
