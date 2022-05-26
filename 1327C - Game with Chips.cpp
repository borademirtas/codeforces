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
    ll n, m, k;
    cin >> n >> m >> k;
    map<pair<ll,ll>, ll> b;
    ll ve = 0, he = 0;
    for(ll i = 0; i < k; i++){
        ll x, y;
        cin >> x >> y;
        ve = max(ve, y - 1);
        he = max(he, x - 1);
    }
    string ans;
    for(ll i = 0; i < ve; i++){ans.pb('L');}
    for(ll i = 0; i < he; i++){ans.pb('U');}
    for(ll i = 0; i < k; i++){
        ll x, y;
        cin >> x >> y;
        b[make_pair(x, y)]++;
    }
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m - 1; j++){
            if(i%2== 0){ans.pb('R');}
            else{ans.pb('L');}
        }
        if(i != n - 1){ans.pb('D');}
    }
    cout << ans.size() << "\n" << ans;
}



int main() {
    FAST;
    tc1;
}
