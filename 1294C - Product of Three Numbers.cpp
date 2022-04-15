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
using namespace std;
#define ll long long 
#define vll vector<ll>
#define PB push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define MOD % 998244353
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll> b;
#define cout std::cout

void solve(ll n){
    vll a;
    while (n % 2 == 0)
    {
        a.push_back(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            a.push_back(i);
            n = n / i;
        }
    }
    if (n > 2) { a.push_back(n); }
    if (a.size() < 3) { cout << "NO\n"; return; }
    vll b;
    b.PB(a[0]);
    ll total = 1;
    ll num = 1;
    for (ll i = 1; i < a.size(); i++) {
        num *= a[i];
        if (total == 1 && b[0] != num) { b.push_back(num); num = 1; total++; continue; }
        if (total == 2 && b[0] != num && b[1] != num) { b.push_back(num); num = i + 1; break; }
    }
    if (b.size() < 3) { cout << "NO\n"; return; }
    for (ll i = num; i < a.size(); i++) { b[2] *= a[i]; }
    cout << "YES\n" << b[0] << " " << b[1] << " " << b[2] << "\n";
}

int main() {
	FAST;
    ll t; cin >> t; for (ll i = 0; i < t; i++) { ll n; cin >> n; solve(n); }
}
