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
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define tc1 solve();
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

void solve(){
    ll count = 0;
    ll n;
    cin >> n;
    mpll end;
    mpll extra;
    vll pre(n+1);
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
    vll b(n); for (ll i = 0; i < n; i++) { cin >> b[i]; }
    pre[0] = 0;
    for(ll i =0 ; i < n; i++){
        pre[i+1] = pre[i] + b[i];
    }
    pre.pb(1e18);
    for(ll i = 0; i < n; i++){
        if(a[i] < b[i]){end[i]++; extra[i] += a[i]; }
        else{
            ll l = -1, r = n + 1;
            while(r - l > 1){
                ll m = (l+r)/2;
                if(pre[m] - pre[i] > a[i]){r = m;}
                else{l = m;}
            }
            end[l]++;
            extra[l] += a[i] - (pre[l] - pre[i]);
        }
    }
    for(ll i = 0; i < n; i++){
        count++;
        count -= end[i];
        cout << b[i] * count + extra[i] << " ";
    }
}

int main() {
    FAST
    tc1
}
