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

bool ended = false;

ll check(ll x, ll y){
    ll dist = y - x;
    if(dist < 0){cout << "IMPOSSIBLE\n"; ended = true; return -1;}
    return dist / 2;
}

void solve(){
    ll n, m;
    cin >> m >> n;
    vll a(n);  vll b(n); for (ll i = 0; i < n; i++) { cin >> a[i] >> b[i]; }
    ll best = b[0] + (a[0] - 1);
    for(ll i = 0; i < n - 1; i++){
        if(ended){return;}
        if(b[i] == b[i+1]){best = max(best, check(a[i], a[i+1]) + b[i]);}
        if(b[i] > b[i+1]){best = max(best, check(a[i], a[i+1] - (b[i] - b[i+1])) + b[i]);}
        if(b[i] < b[i+1]){best = max(check(a[i] + (b[i+1] - b[i]), a[i+1]) + b[i+1], best);}
    }
    if(ended){return;}
    best = max(best, b[n-1] + (m - a[n-1]));
    if(ended){return;}
    cout << best;
}

int main() {
    FAST;
    tc1;
}
