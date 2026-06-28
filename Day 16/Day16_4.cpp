#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {4, 2, 7, 2, 1, 4, 9, 7, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_set<int> seen;

    cout << "After removing duplicates: ";
    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) == seen.end()) {
            cout << arr[i] << " ";
            seen.insert(arr[i]);
        }
    }

    return 0;
}