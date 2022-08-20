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




void solve(ll TC, ll TC2) {
    ll n;
    cin >> n;
    vll a(n);
    vll b;
    for(ll i = 0; i < n; i++){cin >> a[i];}
    for(ll i = 1; i < n; i++){
        b.pb(abs(a[i]-a[i-1]));
        if(i % 2 == 0){b[b.size()-1] *= -1;}
    }
    vll c = b;
    for(ll i = 0; i < c.size(); i++){c[i] *= -1;}
    ll best = 0;
    ll mx = INT_MIN, mxe = 0;
    for(ll i = 0; i < b.size(); i++){
        mxe += b[i];
        if(mxe > mx){mx = mxe;}
        if(mxe < 0){mxe = 0;}
    }
    best = max(best, mx);
    mx = INT_MIN; mxe = 0;
    for(ll i = 0; i < c.size(); i++){
        mxe += c[i];
        if(mxe > mx){mx = mxe;}
        if(mxe < 0){mxe = 0;}
    }
    best = max(best, mx);
    cout << best;
}

int main() {
    FAST;
    tc1;
}
