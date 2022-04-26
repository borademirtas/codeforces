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
    ll n, k, total = 0;
    string s;
    cin >> n >> k;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
    cin >> s;
    ll l = 0, r = 0;
    while (r < n) {
        vll b;
        while (r < n && s[r] == s[l]) { b.push_back(a[r]); r++;}
        l = r;
        sort(b.begin(), b.end());
        reverse(b.begin(), b.end());
        ll num = b.size();
        for (ll i = 0; i < min(num, k); i++) {
            total += b[i];
        }
    }
    cout << total;
}
