#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>  
#include <fstream>
#include <string>
#include <cctype>
#include <bitset>
#include <math.h>
#include <map>
#include <set>
#include <numeric>
#include <queue>
#include <list>
#include <deque>
#include <iomanip>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define PB push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>;
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
void solve() {
    ll n;
    
    cin >> n;
    vll a(n); vll ans;  for (ll i = 0; i < n; i++) { cin >> a[i]; }
    ans.push_back(a[0]);
    ll l = 0, r = 0;
    while(r < n - 1) {
        while (r < n - 1 && abs(a[l] - a[r]) <= abs(a[l] - a[r + 1]) && !((a[l] > a[r] && a[l] < a[r + 1])|| ((a[l] < a[r] && a[l] > a[r + 1])) )) { r++; }
        ans.push_back(a[r]);
        l = r;
    }
    cout << ans.size() << "\n";
    for (ll i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
    
}
int main() {
    FAST;
    tc;
}
