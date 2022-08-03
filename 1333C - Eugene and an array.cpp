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
    ll n;
    cin >> n;
    vll a(n);
    for (ll i = 0; i < n; i++) { cin >> a[i]; }
    map<ll, vll> b;
    ll sum = 0;
    ll ans = 0;
    ll best = -1;
    b[0].pb(0);
    for(ll i = 0; i < n; i++){
        sum += a[i];
        if(b[sum].size() != 0){
            best = max(best, b[sum][b[sum].size()-1]);
        }
        b[sum].pb(i+1);
        if(a[i] == 0){best = i; continue;}
        else{ans += i - best;}
    }
    cout << ans << "\n";
}



int main() {
    FAST;
    tc1;
}
