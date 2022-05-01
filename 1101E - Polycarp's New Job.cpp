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
    ll n;
    cin >> n;
    ll num1 = 0, num2 = 0;
    for (ll i = 0; i < n; i++) {
        char c;
        ll a, b;
        cin >> c >> a >> b;
        if (a > b) { swap(a, b); }
        if (c == '+') {
            num1 = max(num1, a);
            num2 = max(num2, b);
        }
        else {
            if (a >= num1 && b >= num2) { cout << "YES\n"; }
            else { cout << "NO\n"; }
        }
    }
}
