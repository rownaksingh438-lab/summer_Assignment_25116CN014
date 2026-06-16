#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int countFrequency(const vector<int>& arr, int target) {
    int count = 0;
    for (int num : arr) {
        if (num == target)
            count++;
    }
    return count;
}
void countAllFrequencies(const vector<int>& arr) {
    vector<int> visited(arr.size(), 0);

    cout << "\nFrequency of all elements:\n";
    cout << "Element\t | Frequency\n";
    cout << "---------+-----------\n";
    for (int i = 0; i < (int)arr.size(); i++) {
        if (visited[i]) continue;
        int freq = 1;
        for (int j = i + 1; j < (int)arr.size(); j++) {
            if (arr[j] == arr[i]) {
                freq++;
                visited[j] = 1;
            }
        }
        cout << "   " << arr[i] << "\t | " << freq << "\n";
    }
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int target;
    cout << "\nEnter the element to search: ";
    cin >> target;
    int freq = countFrequency(arr, target);
    if (freq > 0)
        cout << "Element " << target << " appears " << freq << " time(s).\n";
    else
        cout << "Element " << target << " not found in the array.\n";
    countAllFrequencies(arr);
    return 0;
}