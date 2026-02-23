#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:   
    pair<int, int> countEvenOdd(const vector<int>& arr) {
        int evenCount = 0;
        int oddCount = 0;
        for (int num : arr) {
            if (num % 2 == 0) {
                evenCount++;
            } 
            else {
                oddCount++;
            }
        }
        return {evenCount, oddCount};
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Solution sol;
    pair<int, int> result = sol.countEvenOdd(arr);
    cout << result.first << " " << result.second << endl;
    return 0;

}

