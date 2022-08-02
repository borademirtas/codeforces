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
#define tc1 solve(ll TC, ll TC2);
#define mpvll map<ll, vll>
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll unordered_map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}


vector<vll> a(26);
string s1, s2;


bool check(ll x){
    ll t = -1;
    for(ll i = 0; i < s1[x] - 'A'; i++){
        if(a[i].size() > 0 && a[i][a[i].size() - 1] > x){t = i; break;}
    }
    if(t == -1){return false;}
    string s = s1;
    ll num = a[t][a[t].size() - 1];
    s[num] = s[x];
    s[x] = t + 'A';
    for(ll i = 0; i < min(s.size(), s2.size()); i++){
        if(s[i] < s2[i]){cout << s << "\n"; return true; }
        if(s[i] > s2[i]){return false;}
    }
    if(s.size() < s2.size()){cout << s << "\n"; return true;}
    else{return false;}
}

void solve(ll TC, ll TC2){
    cin >> s1 >> s2;
    for(ll i = 0; i < 26; i++){a[i].clear();}
    for(ll i = 0; i < s1.size(); i++){
        ll x = s1[i] - 'A';
        a[x].push_back(i);
    }
    for(ll i = 0; i < min(s1.size(), s2.size()); i++){
        if(s1[i] < s2[i]){cout << s1 << "\n"; return;}
        else{
            bool ok = check(i);
            if(ok){return;}
            else{
                if(s1[i] > s2[i]){cout << "---" << "\n"; return;}
                else{continue;}
            }
        }
    }
    if(s1.size() < s2.size()){cout << s1 << "\n";}
    else{cout << "---" << "\n";}
}


int main() {
    FAST;
    tc;
}
