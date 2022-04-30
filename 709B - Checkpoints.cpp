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
    ll n, x, best = INT_MAX;
    cin >> n >> x;
    vll a(n);
    for (ll i = 0; i < n; i++) { cin >> a[i]; }
    sort(a.begin(), a.end());
    if (n == 1) { cout << 0; return 0; }
    best = min(abs(x - a[0]) + abs(a[n - 2] - a[0]), best);
    best = min(abs(x - a[1]) + abs(a[n - 1] - a[1]), best);
    best = min(abs(x - a[n-1]) + abs(a[n - 1] - a[1]), best);
    best = min(abs(x - a[n-2]) + abs(a[n - 2] - a[0]), best);
    cout << best;
}
