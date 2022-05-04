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

void solve() {
    ll n;
    cin >> n;
    vll a(n);
    for (ll i = 0; i < n; i++) { cin >> a[i]; }
    vll b(n);
    for (ll i = 0; i < n; i++) { cin >> b[i]; }
    ll b1 = pow(10, 10);
    ll b2 = pow(10, 10);
    ll b3 = pow(10, 10);
    ll b4 = pow(10, 10);
    for (ll i = 0; i < n; i++) {
        if (abs(a[i] - b[0]) < b2) { b2 = abs(a[i] - b[0]); }
        if (abs(a[0] - b[i]) < b1) { b1 = abs(a[0] - b[i]); }
        if (abs(a[n-1] - b[i]) < b3) { b3 = abs(a[n - 1] - b[i]); }
        if (abs(a[i] - b[n-1]) < b4) { b4 = abs(a[i] - b[n - 1]); }
    }
    ll ans = min({ b1 + b2 + b3 + b4, abs(a[0] - b[0]) + b3 + b4, abs(a[0] - b[n - 1]) + b2 + b3, abs(a[n - 1] - b[0]) + b1 + b4, abs(a[0] - b[0]) + abs(a[n - 1] - b[n - 1]), abs(a[0] - b[n - 1]) + abs(a[n - 1] - b[0]), abs(a[n - 1] - b[n - 1]) + b1 + b2 });
    cout << ans << "\n";
}

int main() {
    FAST;
    tc;
}
