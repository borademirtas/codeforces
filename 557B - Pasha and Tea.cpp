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
    ll n, m;
    cin >> n >> m;
    vll a(n * 2);
    for (ll i = 0; i < a.size(); i++) { cin >> a[i]; }
    sort(a.begin(), a.end());
    ll gmax = a[0];
    ll bmax = a[n];
    double num = min(bmax * n + bmax * (n * 1.0) / 2, gmax * n + gmax * n * 2 * 1.0);
    double ans = min(num, m * 1.0);
    cout << std::fixed << ans << std::endl;
}
