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
    ll n;
    cin >> n;
    ll top = 0;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; top = max(a[i], top); }
    ll two = 0, one = 0;
    for(ll i = 0; i < n; i++){
        ll num = top - a[i];
        if(num % 2 == 1){one++;}
        two += num / 2;
    }
    ll l = -1, r = (two+one) * 10;
    while(r - l > 1){
        ll m = (l+r) / 2;
        ll pos1 = rounddiv(m, 2);
        ll pos2 = m - pos1;
        if(pos1 >= one && pos2 + ((pos1-one) / 2) >= two){r = m;}
        else{l = m;}
    }
    l++;
    ll ans = l;
    top++;
    two = 0, one = 0;
    for(ll i = 0; i < n; i++){
        ll num = top - a[i];
        if(num % 2 == 1){one++;}
        two += num / 2;
    }
    l = -1, r = (two+one) * 10;
    while(r - l > 1){
        ll m = (l+r) / 2;
        ll pos1 = rounddiv(m, 2);
        ll pos2 = m - pos1;
        if(pos1 >= one && pos2 + ((pos1-one) / 2) >= two){r = m;}
        else{l = m;}
    }
    l++;
    ll ans2= l;
    cout << min(ans, ans2) << "\n";
}

int main() {
    FAST;
    tc;
}
