#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int secondLargestSinglePass(const vector<int>& arr) {
    if (arr.size() < 2) {
        cout << "Array must have at least 2 elements.\n";
        return INT_MIN;
    }
    int first  = INT_MIN;
    int second = INT_MIN;
    for (int num : arr) {
        if (num > first) {
            second = first;
            first  = num;
        } else if (num > second && num != first) {
            second = num;
        }
    }
    return second;
}
int secondLargestBySorting(vector<int> arr) {
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    if (arr.size() < 2) {
        cout << "No distinct second largest element exists.\n";
        return INT_MIN;
    }
    return arr[arr.size() - 2]; 
}
int secondLargestTwoPass(const vector<int>& arr) {
    if (arr.size() < 2) return INT_MIN;
    int largest = INT_MIN;
    for (int num : arr)
        if (num > largest)
            largest = num;
    int second = INT_MIN;
    for (int num : arr)
        if (num > second && num != largest)
            second = num;
    return second;
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    if (n < 2) {
        cout << "Need at least 2 elements!\n";
        return 1;
    }
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "\nArray: [ ";
    for (int x : arr) cout << x << " ";
    cout << "]\n";
    cout << "\n--- Results ---\n";
    int res1 = secondLargestSinglePass(arr);
    if (res1 != INT_MIN)
        cout << "Method 1 (Single Pass) : " << res1 << "\n";
    int res2 = secondLargestBySorting(arr);
    if (res2 != INT_MIN)
        cout << "Method 2 (Sorting)     : " << res2 << "\n";
    int res3 = secondLargestTwoPass(arr);
    if (res3 != INT_MIN)
        cout << "Method 3 (Two Pass)    : " << res3 << "\n";
    return 0;
}