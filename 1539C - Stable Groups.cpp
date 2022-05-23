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
#define mp(A, B) make_pair[A, B]

void solve() {
    ll n, k, x;
    cin >> n >> k >> x;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
    sort(a.begin(), a.end());
    ll ans = 1;
    vll dif;
    for(ll i = 1; i < n; i++){
        ll pos = a[i] - a[i-1];
        if(pos == 0){dif.pb(0); continue;}
        if(pos % x == 0){pos /= x;}
        else{pos /= x; pos++;}
        dif.pb(pos - 1);
    }
    sort(dif.begin(), dif.end());
    for(ll i = 0; i < dif.size(); i++){
        k -= dif[i];
        if(k < 0){ans++;}
    }
    cout << ans << "\n";
}

int main() {
    FAST;
    tc1;
}
