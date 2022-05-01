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

void solve() {
    ll n = 1, days = 0, target, total = 0;
    ll lowest = INT_MAX;
    vll a(7);
    cin >> n;
    for (ll i = 0; i < a.size(); i++) { cin >> a[i]; if (a[i] == 1) { days++; } }
    if (n % days != 0) { target = n % days; total += n / days * 7; }
    else { n -= days; target = days; total += n / days * 7; }
    if (target == 1) { total++; cout << total << "\n"; return; }
    else {
        for (ll i = 0; i < 7; i++) {
            ll j = i;
            ll count = 0;
            ll dist = 1;
            while (count != target) { if (a[j] == 1) { count++; } if (count == target) { break; }j++; if (j == 7) { j = 0; } dist++; }
            lowest = min(lowest, dist);
        }
    }
    cout << total + lowest << "\n"; return;
}

int main() {
    FAST;
    tc;
}
