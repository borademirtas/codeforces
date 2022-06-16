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

void solve(ll TC){
    ll n, k;
    cin >> n >> k;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
    ll mx = a[0];
    ll mn = a[0];
    for(ll i = 1; i < n; i++){
        mn = max(mn -  k + 1, a[i]);
        mx = min(mx + k -1, a[i] + k - 1);
        if(mn > mx){cout << "NO\n"; return;}
    }
    if(a[n-1] < mn || a[n-1] > mx){cout << "NO\n"; return;}
    {cout << "YES\n"; return;}
}

int main() {
    FAST;
    tc;
}
