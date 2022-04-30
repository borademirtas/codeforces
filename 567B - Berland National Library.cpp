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
    ll n, already = 0, top = 0;
    cin >> n;
    mpll entered;
    vector<pair<char, ll>> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
        if (a[i].first == '+') { entered[a[i].second]++; }
        if (a[i].first == '-' && entered[a[i].second] == 0) { already++; }
    }
    ll total = already;
    top = already;
    for (ll i = 0; i < n; i++) {
        if (a[i].first == '+') { total++; }
        if (a[i].first == '-') { total--; }
        top = max(total, top);
    }
    cout << top;
    
}
