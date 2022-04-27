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
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));

void solve() {
    ll n, tot = 0, top = -1;
    cin >> n;
    vll a(n);
    for (ll i = 0; i < n; i++) { cin >> a[i]; tot += a[i]; top = max(a[i], top); }
    ll num = (tot / (n - 1));
    if (tot % (n - 1) != 0 ) { num++; }
    num = max(top, num);
    cout << num * (n - 1) - tot << "\n";
}

int main() {
    FAST;
    tc;
}
