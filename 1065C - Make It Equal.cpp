#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
#include <cctype>
#include <map>
#include <cmath>
#include <set>
#include <numeric>
#include <queue>
#include <list>
#include <deque>
#include <climits>
#include <iomanip>
#include <fstream>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout << std::fixed << A << std::endl;

int main() {
    FAST;
    ll n, k;
    cin >> n >> k;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    vll b(a[0] + 1);
    ll l = 0;
    for(ll i = b.size() - 1; i > 0; i--){
        while(l != n && a[l] >= i){l++;}
        b[i] = l;
    }
    ll target = a[a.size() - 1];
    ll count = 0;
    ll cut = 0;
    ll r = 0;
    vll c;
    for(ll i = b.size() - 1; i > target; i--){c.pb(b[i]);}
    while(r != c.size()){
        if(r >= c.size()){break;}
        if(count + c[r] <= k){count += c[r]; r++;}
        else{count = 0; cut++;}
    }
    if(count != 0){cut++;}
    cout << cut;
}
