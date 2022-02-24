    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>
     
    using namespace std;
     
    int main()
    {
        long long n, streak = 1, max = 1;
        cin >> n;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++)  { cin >> arr[i]; }
        for (long long i = 1; i < n; i++){
            if (arr[i] >= arr[i - 1]) {
                streak += 1;
                if (streak > max) {
                    max = streak;
                }
            }
            else { streak = 1; }
        }
        cout << max;
     
    }
