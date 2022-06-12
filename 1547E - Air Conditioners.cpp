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
    ll n, k;
    cin >> n >> k;
    vp a(k);
    mpll ac;
    for(ll i = 0; i < k; i++){
        cin >> a[i].first;
    }
    for(ll i = 0; i < k; i++){
        cin >> a[i].second;
        ac[a[i].first] = a[i].second;
    }
    sort(all(a));
    multiset<ll> left;
    multiset<ll> right;
    for(ll i = 0; i < k; i++){
        ll num = n - a[i].first;
        right.insert(a[i].second - num);
    }
    for(ll i = 1; i <= n; i++){
        if(ac[i] != 0){
            ll num = i;
            num--;
            left.insert(ac[i] - num);
            num = ac[i] - (n - i);
            right.erase(right.lower_bound(num));
        }
        if(!left.empty() && !right.empty()){
            ll rb = *right.begin() + (n - i);
            ll lb = *left.begin() + (i-1);
            cout << min(rb, lb) << " ";
        }
        else if(left.empty()){
            ll rb = *right.begin() + (n - i);
            cout << rb << " ";
        }
        else if(right.empty()){
            ll lb = *left.begin() + (i-1);
            cout << lb << " ";
        }
    }
    cout << "\n";
}

int main() {
    FAST;
    tc;
}
