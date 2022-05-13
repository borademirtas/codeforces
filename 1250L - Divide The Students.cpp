#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
#include <cctype>
#include <map>
#include <cmath>
#include <set>
#include <numeric>
#include <queue>
#include <list>
#include <deque>
#include <climits>
#include <iomanip>
#include <fstream>
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
#define FIXED(A) cout << std::fixed << A << std::endl;

void solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    if(a > c){swap(c, a);}
    for(ll i = (a+b+c) / 3; i <= max({a, b, c}); i++){
        ll a1, b1, c1;
        a1 = max(i, a);
        b1 = max(b - (a1 - a), b - b);
        c1 = c;
        if((b1 + c1 + 1) / 2 <= i ){cout << max(i, a1) << "\n"; return;}
    }
}

int main() {
    FAST;
    tc;
}
