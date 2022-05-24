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
    ll n, hc;
    cin >> n >> hc;
    vp a(n);
    vll dif(n);
    ll ans = 1;
    for(ll i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
        dif[i] = a[i].first - a[i].second;
    }
    sort(dif.begin(), dif.end());
    reverse(dif.begin(), dif.end());
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    hc -= a[0].first;
    hc = max(hc, hc - hc);
    ll best = dif[0];
    if(hc > 0 && best <= 0){cout << -1 << "\n"; return;}
    if(hc % best == 0){ans += hc / best;}
    else{ans += hc / best + 1;}
    cout << ans << "\n";
}

int main() {
    FAST;
    tc;
}
