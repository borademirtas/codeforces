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
    ll n;
    cin >> n;
    vp a(n);
    vp b(n);
    vll ans(n);
    ll hc = 1;
    mpll c;
    mpll d;
    for (ll i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
        b[i].first = n - a[i].first;
        b[i].second = i;
        c[b[i].first]++;
    }
    sort(b.begin(), b.end());
    for (ll i = 0; i < n; i++) { if (c[b[i].first] % b[i].first != 0) { cout << "Impossible"; return 0; } }
    cout << "Possible\n";
    ans[b[0].second] = hc;
    d[b[0].first]++;
    for (ll i = 1; i < n; i++) {
        ll num = d[b[i].first] / b[i].first;
        if (d[b[i].first] % b[i].first == 0) { num--; }
        d[b[i].first]++;
        ll nnum = d[b[i].first] / b[i].first;
        if (d[b[i].first] % b[i].first == 0) { nnum--; }
        if (b[i].first != b[i - 1].first) { hc++; }
        else {
            if (nnum != num) { hc++; }
        }
        ans[b[i].second] = hc;
    }
    for (ll i = 0; i < n; i++) { cout << ans[i] << " "; }

}
