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
   ll n, m, k;
   cin >> n >> m >> k;
   vll a(k);
   for(ll i = 0; i < k; i++){cin >> a[i];}
   ll sum = 0;
   bool ok = false;
   for(ll i = 0; i < k; i++){
       ll x = a[i] / n;
       if(x == 1){x = 0;}
       if(x > 2){ok = true;}
       sum += x;
   }
   if(sum >= m && (ok || m % 2 == 0)){cout << "YES\n"; return;}
   ok = false;
   sum = 0;
    for(ll i = 0; i < k; i++){
        ll x = a[i] / m;
        if(x == 1){x = 0;}
        if(x > 2){ok = true;}
        sum += x;
    }
    if(sum >= n && (ok || n % 2 == 0)){cout << "YES\n"; return;}
    cout << "NO\n";
}


int main() {
    FAST;
    tc;
}
