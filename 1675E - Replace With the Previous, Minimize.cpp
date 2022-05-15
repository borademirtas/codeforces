#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
#include <cctype>
#include <map>
#include <cmath>
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

map<char, char> chars;
ll n, k, mn = 0;
string s;

void fix(ll x){
    while(k != 0 && chars[s[x]] != 'a'){
        chars[s[x]]--;
        k--;
        for(ll i = 'y'; i >= 'a'; i--){
            if(chars[i] > chars[i + 1]){chars[i] = chars[i+1];}
        }
    }
}

void solve(){
    cin >> n >> k >> s;
    for(ll i = 'a'; i <= 'z'; i++){
        chars[i] = i;
    }
    for(ll i = 0; i < n; i++){
        mn = max(chars[s[i]] - 'a' + mn - mn,  mn - mn);
        if(mn > k && i != 0){fix(i - 1); fix(i); break;}
        else if(mn > k && i == 0){fix(i); break;}
        else{continue;}
    }
    if(k != 0){
        for(ll i = 0; i < n; i++){
            cout << 'a';
        }
        cout << "\n"; return;
    }
    for(ll i = 0; i < n; i++){
        cout << chars[s[i]];
    }
    cout << "\n";

}

int main() {
    tc;
}
