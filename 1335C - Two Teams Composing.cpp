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
    ll n, top = 0;
    cin >> n;
    map<ll, ll> b;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; b[a[i]]++; top = max(b[a[i]], top); }
    ll num = b.size(), ans;
    if (top != 1) { ans = min(top - 1, num); ans = max(ans, min(top, num - 1)); }
    if (top == 1) { ans = 1; if (n == 1) { ans--; } }
    cout << ans << "\n";
}
int main() {
    FAST;
    tc;
}
