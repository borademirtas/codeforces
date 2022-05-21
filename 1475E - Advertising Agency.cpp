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
#define tc1 solve();
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout << std::fixed << A << std::endl;
#define mod 1000000007

ll find(ll r, ll n){
    if(n == r){return 1;}
    if(r > n -r){r = n -r;}
    vll c(r+1, 0);
    c[0] = 1;
    for(ll i = 1;i <= n; i++){
        for(ll j = min(i,r); j > 0; j--){
            c[j] = (c[j] + c[j - 1]) % mod;
        }
    }
    return c[r];
}

void solve(){
    ll n, k;
    cin >> n >> k;
    vll a(n);
    mpll b;
    mpll d;
    for (ll i = 0; i < n; i++) { cin >> a[i]; b[a[i]]++;}
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    vll c;
    for(ll i = 0; i < k; i++){
        c.pb(a[i]);
        d[a[i]]++;
    }
    vll un;
    vp nums;
    un.pb(c[0]);
    for(ll i = 1; i  < c.size(); i++){
        if(c[i] != c[i-1]){un.pb(c[i]);}
    }
    nums.resize(un.size());
    for(ll i = 0; i < un.size(); i++){
        nums[i].first = un[i];
        nums[i].second = d[un[i]];
    }
    vll ans(un.size());
    for(ll i = 0; i < ans.size(); i++){
        ans[i] = find(nums[i].second, b[nums[i].first]);
    }
    ll tot = 1;
    for(ll i = 0; i < ans.size(); i++){
        tot *= ans[i];
        tot %= mod;
    }
    cout << tot << "\n";
}

int main() {
    FAST;
    tc;
}
