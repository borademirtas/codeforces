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
    ll n, I;
    cin >> n >> I;
    ll target = 1;
    I *= 8;
    I /= n;
    if(I >= 20){cout << 0; return;}
    for(ll i = 0; i < I; i++){
        target *= 2;
    }
    mpll nums;
    vll a(n);
    vll u;
    for(ll i = 0 ; i < n; i++){
        cin >> a[i];
        nums[a[i]]++;
        if(nums[a[i]] == 1){u.pb(a[i]);}
    }
    sort(all(u));
    if(u.size() <= target){cout << 0; return;}
    vll b(u.size());
    vll e(u.size());
    b[0] = 0;
    e[u.size() - 1] = 0;
    for(ll i = 1; i < b.size(); i++){
        b[i] = b[i-1] + nums[u[i-1]];
    }
    for(ll i = b.size() - 2; i >= 0; i--){
        e[i] = e[i+1] + nums[u[i+1]];
    }
    ll l = 0, r = target - 1;
    ll best = INT_MAX;
    while(r != u.size()){
        best = min(best, b[l] + e[r]);
        l++; r++;
    }
    cout << best;
}

int main() {
    FAST
    tc1
}
