#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
#include <cctype>
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
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve(i, t);}
#define tc1 solve(1, 1);
#define mpvll map<ll, vll>
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
#define tri pair<ll, pair<ll,ll>>
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}

string s;

ll check(char c1, char c2){
    ll x = s.size();
    ll count = 0;
    for(ll i = 0; i < s.size(); i++){
        if(count == 0 && s[i] == c1){x--; count++; continue;}
        else{
            if(count == 1 && s[i] == c2){x--; count--; continue;}
        }
    }
    if((s.size() - x) % 2 == 1){x++;}
    return x;
}

void solve(ll TC, ll TC2){

    cin >> s;
    ll best = s.size();
    for(ll i = '0'; i <= '9'; i++){
        for(ll j = '0'; j <= '9'; j++){
            best = min(best, check(i, j));
        }
    }
    for(ll i = '0'; i <= '9'; i++){
        ll x = s.size();
        for(ll j = 0; j < s.size(); j++){
            if(s[j] == i){x--;}
        }
        best = min(best, x);
    }
    cout << best << "\n";

}

int main() {
    FAST;
    tc;
}
