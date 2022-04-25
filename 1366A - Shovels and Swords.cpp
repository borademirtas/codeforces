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
    ll a, b, total = 0;
    cin >> a >> b;
    if (a == 0 || b == 0) { cout << 0 << "\n"; return; }
    if (b > a) { swap(a, b); }
    if (a > b) {
        ll dif = a - b;
        total += min(dif, b);
        a -= min(dif, b) * 2;
        b -= min(dif, b);
    }
    if (b == 0) { cout << total << "\n"; return; }
    total += (a / 3) * 2;
    if (a % 3 == 2) { total++; }
    cout << total << "\n"; return;
}

int main() {
    FAST;
    tc;
}
