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
    ll n, t, ans = 0;
    cin >> n >> t;
    vector<vector<double>> a(n, vector<double>(n, 0));
    for (ll i = 0; i < t; i++) {
        a[0][0] += 1;
        for (ll j = 0; j < n; j++) {
            for (ll t = 0; t <= j; t++) {
                if (a[j][t] > 1) { double num = a[j][t] - 1; a[j][t] = 1; if (j != n - 1) { a[j + 1][t] += num / 2; a[j + 1][t + 1] += num / 2;} }
            }
        }
    }
    for (ll j = 0; j < n; j++) {
        for (ll t = 0; t <= j; t++) {
            if (a[j][t] >= 1) { ans++; }
        }
    }
    cout << ans;
}
