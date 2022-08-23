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
    ll n;
    cin >> n;
    vll a(n);
    ll ans = 0;
    ll count = 0;
    ll sum = 0;
    ll targ1 = sum / 3;
    ll targ2 = sum / 3 * 2;
    for(ll i = 0; i < n; i++){cin >> a[i]; sum += a[i];}
    if(sum % 3 != 0){cout << 0 << "\n"; return;}
    else{
        targ1 = sum / 3;
        targ2 = sum / 3 * 2;
    }
    sum = 0;
    for(ll i = 0; i < n - 1; i++){
        sum += a[i];
        if(sum == targ2){count++;}
    }
    sum = 0;
    for(ll i = 0; i < n - 2; i++){
        sum += a[i];
        if(sum == targ2){
            count--;
        }
        if(sum == targ1){
            ans += count;
        }
    }
    cout << ans;
}

int main() {
    FAST;
    tc1;
}
