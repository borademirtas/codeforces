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
    ll n, k, A, total = 0, used = 0;
    cin >> n >> k;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; a[i] -= k; a[i] = max(a[i], n - n); }
    priority_queue<ll> q;
    cin >> A;
    vll need(n);
    vll b(n); for (ll i = 0; i < n; i++) {
        cin >> b[i];
        q.push(b[i] * - 1);
        need[i] = a[i] / A;
        if (a[i] % A != 0) { need[i]++; }
        need[i] = max(need[i] - used, used - used);
        while (need[i] != 0) {
            total += q.top() * -1;
            q.pop();
            used++;
            need[i]--;
            if (need[i] == 0) { break; }
            if (q.empty()) { cout << -1; return 0; }
        }
        
    }
    cout << total;
}
