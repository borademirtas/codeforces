#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h> 

using namespace std;

int main(){
    string s;
    cin >> s;
    bool o = false;
    for (long long i = 0; i < s.size(); i++) {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
            o = true;
        }
    }
    if (o == true) { cout << "YES"; }
    else { cout << "NO"; }
    
}
