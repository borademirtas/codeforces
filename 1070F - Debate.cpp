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
    ll n, total = 0;
    cin >> n;
    ll both = 0;
    vll b;
    vll a;
    vll none;
    for (ll i = 0; i < n; i++) {
        string s;
        ll x;
        cin >> s >> x;
        if (s == "11") { both++; total += x; }
        if (s == "10") { a.push_back(x); }
        if (s == "01") { b.push_back(x); }
        if (s == "00") { none.push_back(x); }
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());
    for (ll i = 0; i < min(a.size(), b.size()); i++) { total += a[i]; total += b[i]; }
    for (ll i = min(a.size(), b.size()); i < max(a.size(), b.size()); i++) { if (i < a.size()) { none.push_back(a[i]); }if (i < b.size()) { none.push_back(b[i]); }}
    sort(none.begin(), none.end());
    reverse(none.begin(), none.end());
    ll num = none.size();
    for (ll i = 0; i < min(both, num ); i++) { total += none[i]; }
    if (both == 0 && min(a.size(), b.size()) == 0) { cout << 0; return 0; }
    cout << total;
}
