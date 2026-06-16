#include <iostream>
#include <climits>
using namespace std;

void findLargestSmallest(int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty!" << endl;
        return;
    }
    int largest  = INT_MIN;
    int smallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest)  largest  = arr[i];
        if (arr[i] < smallest) smallest = arr[i];
    }
    cout << "Largest element  : " << largest  << endl;
    cout << "Smallest element : " << smallest << endl;
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    findLargestSmallest(arr, n);
    return 0;
}