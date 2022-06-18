#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
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
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve(i+1);}
#define tc1 solve(1);
#define mpvll map<ll, vll>
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll unordered_map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << (A) << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}

bool check(ll m, vll a) {
    vll b = a;
    for(ll i = 0; i < a.size() - 2; i++){
        ll bp = ((b[i] - m) / 3 * 3);
        ll num = min(a[i], bp);
        b[i+1] += num / 3;
        b[i+2] += num / 3 * 2;
        if(b[i+1] < m){return false;}
    }
    if(b[a.size()-1] < m){return false;}
    return true;
}

void solve(ll TC){
    ll n;
    cin >> n;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
    ll l = -1, r = a[n-1] + 1;
    reverse(all(a));
    while(r - l > 1){
        ll m = (l+r) / 2;
        bool ok = check(m, a);
        if(ok){l = m;}
        else{r = m;}
    }
    cout << l << "\n";
}

int main() {
    FAST;
    tc;
}
