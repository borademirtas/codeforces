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

ll n, k;
vll a;
vll b;

bool check(ll m){
    ll sum = 0;
    for(ll i = 0; i < n; i++){
        ll x = max(n-n, a[i] * m - b[i]);
        if(x > k){return false;}
        sum += x;
        if(sum > k){return false;}
    }
    if(sum <= k){return true;}
    else{return false;}
}

void solve(ll TC, ll TC2){
    cin >> n >> k;
    ll sum = 0;
    a.resize(n);
    b.resize(n);
    for(ll i = 0; i < n; i++){cin >> a[i]; }
    for(ll i = 0; i < n; i++){cin >> b[i]; }
    ll l = -1, r = 3e9;
    while(r-l > 1){
        ll m = (r+l) / 2;
        bool ok = check(m);
        if(ok){l = m;}
        else{r = m;}
    }
    cout << l;
}

int main() {
    FAST;
    tc1;
}
