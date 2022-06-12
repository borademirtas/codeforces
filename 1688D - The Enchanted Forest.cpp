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
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define tc1 solve();
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


void solve(){
    ll n, k;
    cin >> n >> k;
    vll a(n);
    vll pre(n+1);
    for(ll i = 0; i < n; i++){cin >> a[i];}
    pre[0] = 0;
    for(ll i = 1; i <= n; i++){pre[i] = a[i-1] + pre[i-1];}
    if(k <= n){
        ll best = 0;
        for(ll i = k; i <= n; i++){
            best = max(best, pre[i] - pre[i-k]);
        }
        k--;
        cout << best + ((k*(k+1)) / 2) << "\n";
    }
    else{
        k--;
        k -= n;
        cout << pre[n] + ((n*(n+1)) / 2) + n*k << "\n";
    }
}

int main() {
    FAST;
    tc;
}
