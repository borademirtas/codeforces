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

ll n, k;

bool check(vll nums, ll m){
    ll ans = 0;
    for(ll i = 0; i < nums.size(); i++){
        ans += nums[i] / m;
    }
    if(ans >= k){return true;}
    else{return false;}
}

void solve(ll TC){

    mpll b;
    cin >> n >> k;
    vll num(n);
    vll a;
    for(ll i = 0; i < n; i++){
        cin >> num[i];
        b[num[i]]++;
        if(b[num[i]] == 1){a.pb(num[i]);}
    }
    vll u;
    for(ll i = 0; i < a.size(); i++){
        u.pb(a[i]);
        a[i] = b[a[i]];
    }
    ll l = 0, r = n + 1;
    sort(all(a));
    reverse(all(a));
    while(r - l > 1){
        ll m = (l+r) / 2;
        bool ok = check(a, m);
        if(ok){l = m;}
        else{r = m;}
    }
    ll count = 0;
    for(ll i = 0; i < u.size(); i++){
        if(count == k){return;}
        for(ll j = 0; j < b[u[i]]/ l; j++){
            cout << u[i] << " ";
            count++;
            if(count == k){return;}
        }
    }
}

int main() {
    FAST;
    tc1;
}
