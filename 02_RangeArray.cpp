// Given an array of numbers containing n distinct numbers in the range [0,n], return the only number in the range that is missing from the array.

#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Enter size of array (n): ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " numbers (from 0 to " << n << "):\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int expectedSum = n * (n + 1) / 2;

    cout << "Missing number is: " << expectedSum - sum << endl;

    return 0;
}
