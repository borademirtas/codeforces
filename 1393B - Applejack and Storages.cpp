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

int main() {
    FAST;
    ll n;
    cin >> n;
    mpll b;
   ll count2 = 0, count4 = 0;
    vll a(n); for (ll i = 0; i < n; i++) {
        cin >> a[i];
        count2 -= b[a[i]] / 2;
        count4 -= b[a[i]] / 4;
        b[a[i]]++;
        count2 += b[a[i]] / 2;
        count4 += b[a[i]] / 4;
    }
    ll q;
    cin >> q;
    for (ll i = 0; i < q; i++) {
        char c;
        ll x;
        cin >> c >> x;
        count2 -= b[x] / 2;
        count4 -= b[x] / 4;
        if(c == '+'){ b[x]++; }
        else { b[x]--; }
        count2 += b[x] / 2;
        count4 += b[x] / 4;
        if (count4 >= 1 && count2 >= 4) { cout << "YES" << '\n'; }
        else { cout << "NO" << '\n'; }
    }
}
