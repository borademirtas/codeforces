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
#include <fstream>
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
#define FIXED(A) cout << std::fixed << A << std::endl;


int main() {
    FAST;
    ll n, k;
    cin >> n >> k;
    vp a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    vll ans(n);
    vll mn(n, 0);
    ans[a[0].second] = 0;
    for (ll i = 1; i < n; i++) {
        if (a[i].first == a[i-1].first) { ans[a[i].second] = ans[a[i - 1].second]; }
        else { ans[a[i].second] = i; }
    }
    for (ll i = 0; i < k; i++) {
        ll x, y;
        cin >> x >> y;
        x--; y--;
        if (ans[y] > ans[x]) { mn[y]++; }
        if (ans[x] > ans[y]) { mn[x]++; }
    }
    for (ll i = 0; i < n; i++) {
        cout << max(ans[i] - mn[i], n - n) << " ";
    }
}
