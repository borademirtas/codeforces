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

void solve() {
    string s;
    cin >> s;
    vector<string> strings;
    string temp;
    string empty;
    ll before = 0;
    for (ll i = 0; i < s.size(); i++) {
        if (s[i] != ':') { temp.push_back(s[i]); }
        if (s[i] == ':' && temp.size() != 0) { strings.push_back(temp); temp = empty; }
        if (i != 0 && s[i] == s[i - 1] && s[i] == ':') { before = strings.size(); }
    }
    temp = empty;
    vector<string> ans;
    ll num = s.size() - 1;
    if (s[s.size() - 1] != ':') { while (s[num] != ':') { temp.push_back(s[num]); num--; } strings.push_back(temp); reverse(strings[strings.size() - 1].begin(), strings[strings.size() - 1].end()); }
    for (ll i = 0; i < strings.size(); i++) { if (strings[i].size() != 4) { reverse(strings[i].begin(), strings[i].end()); for (ll j = strings[i].size(); j < 4; j++) { strings[i].push_back('0'); } reverse(strings[i].begin(), strings[i].end());} }
    for (ll i = 0; i < strings.size(); i++) { if (i == before) { for (ll j = strings.size(); j < 8; j++) { ans.push_back("0000:"); } } strings[i].push_back(':'); ans.push_back(strings[i]); }
    if(strings.size() == before){ for (ll j = strings.size(); j < 8; j++) { ans.push_back("0000:"); } }
    for (ll i = 0; i < ans.size() - 1; i++) { cout << ans[i]; }
    for (ll i = 0; i < 4; i++) { cout << ans[ans.size() - 1][i]; }
    cout << "\n";
}

int main() {
    FAST; 
    tc;   
}
