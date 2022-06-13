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
    vll a(n);
    ll ans = 0;
    vll com;
    com.pb(0);
    for(ll i = 0; i < n; i++){cin >> a[i];}
    if(a[0] == 1){ans++;}
    for(ll i = 1; i < n; i++){
        if(a[i] == 1){com[com.size() - 1]++;}
        else{com.pb(0);}
    }
    for(ll i = 0; i < com.size(); i++){
        ans += com[i] / 3;
    }
    cout << ans << "\n";
}

int main() {
    FAST;
    tc;
}1418C - Mortal Kombat Tower
