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
    ll n;
    ll total = 0;
    cin >> n;
    ll l = 0, r = n;
    if(n == 1) { cout << 1; return 0; }
    while (r >= l) {
        ll m = (l + r) / 2;
        total = 0;
        ll num = n;
        while (num > 0) {
            if (m <= num) { total += m; num -= m; }
            else { total += num; num = 0; }
            num -= num / 10;
        }
        ll total2 = 0;
        num = n;
        if (m == 1) { cout << 1; return 0; }
        while (num > 0) {
            if (m - 1 <= num) { total2 += m - 1; num -= m - 1; }
            else { total2 += num; num = 0; }
            num -= num / 10;
        }
        if (total * 2 >= n) { r = m; }
        else { l = m; }
        if (total * 2 >= n && total2 * 2 < n) { cout << m; return 0; }
    }
}
