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
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define tc1 solve();
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)

void solve() {
    mpll b;
    map<pair<ll,ll>, ll> c;
    ll mx = INT_MIN;
    ll mn = INT_MAX;
    ll n;
    cin >> n;
    for(ll i = 0; i < n; i++){
        ll x, y, z;
        cin >> x >> y >> z;
        mn = min(x, mn);
        mx = max(mx, y);
        if(b[x] == 0){b[x] = z;}
        else{b[x] = min(b[x], z);}
        if(b[y] == 0){b[y] = z;}
        else{b[y] = min(b[y], z);}
        if(c[mp(x,y)] == 0){c[mp(x,y)] = z;}
        else{c[mp(x,y)]= min(c[mp(x,y)], z);}
        if(c[mp(mn, mx)] != 0){
            cout << min(c[mp(mn, mx)], b[mn] + b[mx]) << "\n";
        }
        else{cout << b[mn] + b[mx] << "\n";}
    }
}

int main() {
    FAST;
    tc;
}
