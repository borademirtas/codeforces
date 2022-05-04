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
    ll n, a, b;
    cin >> n >> a >> b;
    ll total = 0;
    ll pos = 0;
    vll c(n); for (ll i = 0; i < n; i++) { cin >> c[i]; }
    vll pre(n);
    pre[0] = c[0];
    for (ll i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + c[i];
    }
    total += b * c[0];
    for (ll i = 1; i < n; i++) {
        ll num = pre[n - 1] - pre[i - 1];
        if (num * b - pos * b * (n-i) > num * b - c[i-1] * b * (n - i) + ((c[i - 1] - pos) * a)) {total += (c[i - 1] - pos) * a;  pos = c[i - 1];}
        total += (c[i] - pos) * b;
    }
    cout << total << "\n";
}

int main() {
    FAST;
    tc;
}
