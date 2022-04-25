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
#include <iomanip>
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

int main() {
    FAST;
    ll n, top = 0;
    cin >> n;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
    sort(a.begin(), a.end());
    ll r = 0, l = 0;
    while (r != n) {
        while (a[r] - a[l] <= 5) { r++; if (r == n || a[r] - a[l] > 5) { break; }  top = max(r - l + 1, top);}
        l++;
    }
    if (top == 0) { top++; }
    cout << top;
}
