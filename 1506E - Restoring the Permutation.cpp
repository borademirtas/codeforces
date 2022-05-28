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
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)


void solve(){
    ll n;
    cin >> n;
    vll a(n);
    for (ll i = 0; i < n; i++) { cin >> a[i]; }
    set<ll> nums;
    for(ll i = 1; i < a[0]; i++){nums.insert(i);}
    cout << a[0] << " ";
    for(ll i = 1; i < n; i++){
        if(a[i] != a[i-1]){cout << a[i] << " "; for(ll j = a[i-1] + 1; j < a[i]; j++){nums.insert(j);} }
        else{
            cout << *nums.begin() << " ";
            nums.erase(*nums.begin());
        }
    }
    cout << "\n";
    nums.clear();
    for(ll i = 1; i < a[0]; i++){nums.insert(i);}
    cout << a[0] << " ";
    for(ll i = 1; i < n; i++){
        if(a[i] != a[i-1]){cout << a[i] << " "; for(ll j = a[i-1] + 1; j < a[i]; j++){nums.insert(j);} }
        else{
            cout << *--nums.end() << " ";
            nums.erase(*--nums.end());
        }
    }
    cout << "\n";
}

int main() {
    FAST;
    tc;
}
