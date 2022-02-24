    #include <iostream>
    #include <string>
    #define ll long long 
    #include <math.h> 
    using namespace std;
     
    int main() {
    	ll streak{1};
    	string s;
    	bool y = false;
    	cin >> s;
    	for (long long i = 1; i < s.length(); i++) {
    		if (s[i] == s[i - 1]) { streak += 1; }
    		else { streak = 1; }
    		if (streak == 7) { y = true; }
    	}
    	if (y == true) { cout << "YES"; }
    	else { cout << "NO"; }
    		
    		
     
    }
