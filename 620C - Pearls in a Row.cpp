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
    ll n, total = 0, num = 0;
    cin >> n;
    vp count;
    vll a(n);
    mpll b;
    mpll c;
    for (ll i = 0; i < n; i++) { cin >> a[i]; b[a[i]]++; if (b[a[i]] == 2) { count.push_back(make_pair(num + 1, i + 1)); num = i + 1; b = c; } }
    if (count.size() == 0) { cout << -1; return 0; }
    cout << count.size() << "\n";
    if (count[count.size() - 1].second != n) { count[count.size() - 1].second = n; }
    for (ll i = 0; i < count.size(); i++) { cout << count[i].first << " " << count[i].second << "\n"; }
}
