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
    ll n, top = 0;
    cin >> n;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
    ll t;
    cin >> t;
    sort(a.begin(), a.end());
    for (ll i = 0; i < n; i++) {
        ll l = i, r = i;
        ll count = 0;
        while (r < n) {
            if (a[r] - a[l] > t) { break; }
            else { r++; count++; }
        }
        top = max(count, top);
    }
    cout << top;
}
