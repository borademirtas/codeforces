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
    ll n, q;
    cin >> n >> q;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    vector<pair<ll, ll>> arr(2 * pow(10, 5) + 1);
    vp nums(2 * pow(10, 5) + 1);
    for (ll i = 0; i < q; i++) {
        ll x, y;
        cin >> x >> y;
        arr[x].first++;
        arr[y].second++;
    }
    ll cur = 0;
    for (ll i = 1; i < nums.size(); i++) {
        cur += arr[i].first;
        nums[i].first = cur;
        nums[i].second = i;
        cur -= arr[i].second;
    }
    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    ll ans = 0;
    for (ll i = 0; i < a.size(); i++) {
        ans += nums[i].first * a[i];
    }
    cout << ans;
}
