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

int main() {
    FAST;
    ll n, k, total = 0 , last = 0, m, num;
    cin >> n >> k;
    vll a(n);
    for (ll i = 0; i < n; i++) { cin >> a[i];}
    for (ll i = 0; i < n - 1; i++) {
        m = 0;
        num = a[i] + last;
        ll newnum;
        total += num / k;
        newnum = num - (num / k * k);
        if (num / k * k < last) {
            m += last / k;
            if (last % k != 0) { m++; }
            newnum -= m * k;
        }
        total += m;
        last = max(newnum, last - last);
    }
    num = a[n - 1] + last;
    total += num / k;
    if (num % k != 0) { total++; }
    cout << total;
}
