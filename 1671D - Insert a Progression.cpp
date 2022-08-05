#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
#include <cctype>
#include <map>
#include <cmath>
#include <unordered_map>
#include <set>
#include <numeric>
#include <queue>
#include <list>
#include <deque>
#include <climits>
#include <iomanip>
#include <fstream>
#include <stack>
#include <bitset>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve(i, t);}
#define tc1 solve(1, 1);
#define mpvll map<ll, vll>
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
#define tri pair<ll, pair<ll,ll>>
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}

void solve(ll TC, ll TC2){
    ll n, x;
    cin >> n >> x;
    ll mx = 0, mn = 1e9;
    vll a(n); for(ll i = 0; i < n; i++){cin >> a[i]; mx = max(mx, a[i]); mn = min(mn, a[i]);}
    ll ans = 0;
    for(ll i = 1; i < n; i++){ans += abs(a[i] - a[i-1]);}
    if(x >= mn && x <= mx){x = 1;}
    if(x <= mn){
        ans += min({a[0] - 1, (mn - 1) * 2, a[n-1] - 1});
        cout << ans << "\n"; return;
    }
    else{
        vll b{(mn - 1) * 2 + abs(x-a[0]), (mn - 1) * 2 + abs(x-a[n-1]), (mn - 1) * 2 + abs(x-mx) * 2,  abs(a[0] - 1) + abs(x - a[n-1]), abs(a[0] - 1) + abs(x-mx) * 2, a[n-1] - 1 + abs(x-a[0]), a[n-1] -1 + abs(x-mx) * 2};
        sort(all(b));
        cout << ans + b[0] << "\n";
    }
}

int main() {
    FAST;
    tc;
}
