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


bool check(ll mid, ll m, ll n, ll sum, vll a){
    ll count = 0;
    for(ll i = 0; i < n; i++){
        count += max(n-n, a[i] - (i/mid));
    }
    if(count >= m){return true;}
    else{return false;}
}

void solve(ll TC, ll TC2){
    ll n, m;
    cin >> n >> m;
    ll l = 1, r = n + 1;
    ll sum = 0;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; sum += a[i]; }
    if(sum < m){cout << -1; return;}
    sort(all(a));
    reverse(all(a));
    if(check(1, m, n, sum, a)){cout << 1; return;}
    while(r- l > 1){
        ll mid = (l+r)/2;
        bool ok = check(mid, m, n, sum, a);
        if(ok){r = mid;}
        else{l = mid;}
    }
    cout << r;
}

int main() {
    FAST;
    tc1;
}
