    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>
     
    using namespace std;
     
    int main()
    {
        long long n;
        long long streak{0};
        string s;
        bool unlucky = false;
        cin >> n;
        cin >> s;
        string arr1 = s.substr(0, s.length() / 2);
        string arr2 = s.substr(s.length() / 2);
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        for (int i = 0; i < n; i++) {
            if (arr1[i] > arr2[i]) {streak += 1;}
            if (streak == n) { unlucky = true; }
        }
        streak = 0;
        for (int i = 0; i < n; i++) {
            if (arr1[i] < arr2[i]) { streak += 1; }
            if (streak == n) { unlucky = true; }
        }
        if (unlucky == true) { cout << "YES"; }
        else { cout << "NO"; }
     
    }
