    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>
     
    using namespace std;
     
    int main()
    {
        long long n;
        long long sum{0};
        long long coin{ 0 };
        long long my_amount{ 0 };
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr.begin(), arr.end(), greater<>());
        while (my_amount * 2 <= sum) {
            coin += 1;
            my_amount += arr[coin - 1];
        }
        cout << coin;
     
    }
