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



void solve(ll TC){
    ll n;
    cin >> n;
    if(n == 2 || n == 3){cout << -1  << "\n"; return;}
    vll ans;
    if(n % 2 == 1){
        for(ll i = 1; i <= n; i += 2){
            ans.pb(i);
        }
        ll count = 0;
        for(ll i = n - 1; i > 0; i -= 2){
            count++;
            ans.pb(i);
            if(count == 2){
                swap(ans[ans.size()-1], ans[ans.size()- 2]);
            }
        }
    }
    if(n % 2 == 0){
        for(ll i = 1; i < n; i += 2){
            ans.pb(i);
        }
            swap(ans[ans.size()-1], ans[ans.size()- 2]);
        for(ll i = n; i > 0; i -= 2){
            ans.pb(i);
        }
    }
    for(ll i = 0; i < ans.size(); i++){cout << ans[i] << ' ';}
    cout << "\n";
}

int main() {
    FAST;
    tc;
}
