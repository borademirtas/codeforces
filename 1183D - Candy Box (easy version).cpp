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
#include <climits>
#include <iomanip>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define PB push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));

void solve(){
    ll n, total = 0;
    cin >> n;
    mpll b;
    mpll used;
    vll a(n);
    vll nums;
    vll ans;
    for (ll i = 0; i < n; i++) { cin >> a[i]; b[a[i]]++; if (b[a[i]] == 1) { nums.push_back(a[i]); } }
    for (ll i = 0; i < nums.size(); i++) {
        ans.push_back(b[nums[i]]);
    }
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());
    total += ans[0];
    for (ll i = 1; i < ans.size(); i++) {
        if (ans[i] >= ans[i - 1]) { ans[i] = max(ans[i - 1] - 1, n - n); }
        total += ans[i];
    }
    cout << total << "\n";
}

int main() {
    FAST;
    tc;
}
