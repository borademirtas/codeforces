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
#define mpll unordered_map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}

void solve(ll TC, ll TC2){
    ll n, p, k;
    cin >> n >> p >> k;
    vll a(n); for(ll i = 0; i < n; i++){cin >> a[i];}
    sort(all(a));
    vll dp(n, 0);
    ll ans = 0;
    vll pre(n+1, 0);
    for(ll i = 0; i < n; i++){pre[i+1] = pre[i] + a[i];}
    for(ll i = 0; i < k; i++){
        if(i != k- 1){dp[i] += pre[i+1];}
        else{dp[i] = a[i];}
        for(ll j = i + k; j < n; j += k){
            dp[j] = a[j] + dp[j-k];
        }
    }
    for(ll i = 0; i < n; i++){
        if(dp[i] <= p){ans = i + 1;}
    }
    cout << ans << "\n";
}


int main() {
    FAST;
    tc;
}
