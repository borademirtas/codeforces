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
#include <fstream>
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
#define FIXED(A) cout << std::fixed << A << std::endl;


int main() {
    FAST;
    ll n, a, b, k;
    cin >> n >> a >> b >> k;
    vll c(n);
    ll you = 0;
    vll nums;
    for (ll i = 0; i < n; i++) {
        cin >> c[i]; if (c[i] % (a + b) <= a && c[i] % (a + b) != 0) { you++; }
        else {
            ll num = c[i] % (a + b);
            if (num == 0) { num = min(c[i], (a + b)); }
            num -= a;
            ll ans = num / a;
            if (num % a != 0) { ans++; }
            nums.push_back(ans);
        }
    }
    sort(nums.begin(), nums.end());
    ll l = 0;
   while (k != 0 && l != nums.size()) {
       if (k - nums[l] >= 0) {you++; k -= nums[l]; l++; }
       else { break; }
    }
    cout << you;
}
