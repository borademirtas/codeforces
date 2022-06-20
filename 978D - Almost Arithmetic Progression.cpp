#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
#include <map>
#include <cmath>
#include <unordered_map>
#include <set>
#include <numeric>
#include <queue>
#include <list>
#include <deque>
#include <climits>
#include <iomanip>
#include <fstream>
#include <stack>
#include <bitset>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve(i+1);}
#define tc1 solve(1);
#define mpvll map<ll, vll>
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll unordered_map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << (A) << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}

ll check(vll b){
    ll dif = b[1] - b[0];
    ll count = 0;
    for(ll i = 2; i < b.size(); i++){
        if(b[i] - b[i-1] == dif){continue;}
        else if ((b[i] + 1) - b[i-1] == dif){b[i]++; count++; continue;}
        else if ((b[i] - 1) - b[i-1] == dif){b[i]--; count++; continue;}
        else{return INT_MAX;}
    }
    return count;
}


void solve(ll TC){
    ll n;
    cin >> n;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
    ll best = INT_MAX;
    if(n <= 2){cout << 0; return;}
    vll b = a;
    best = min(best, check(b)); b = a;
    b[1]++; best = min(best, check(b) + 1); b = a;
    b[1]--; best = min(best, check(b) + 1); b = a;
    b[0]--; b[1]--; best = min(best, check(b) + 2); b = a;
    b[0]--; best = min(best, check(b) + 1); b = a;
    b[0]--; b[1]++; best = min(best, check(b) + 2); b = a;
    b[0]++; best = min(best, check(b) + 1); b = a;
    b[0]++; b[1]--; best = min(best, check(b) + 2); b = a;
    b[0]++; b[1]++; best = min(best, check(b) + 2); b = a;
    if(best >= INT_MAX){cout << -1;}
    else{cout << best;}
}


int main(){
    FAST;
    tc1;
}
