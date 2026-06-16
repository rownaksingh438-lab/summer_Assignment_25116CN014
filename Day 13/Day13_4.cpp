#include <iostream>
using namespace std;

void countEvenOdd(int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty!" << endl;
        return;
    }
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    cout << "\n--- Results ---" << endl;
    cout << "Even elements : " << evenCount << endl;
    cout << "Odd elements  : " << oddCount  << endl;
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
    cout << "\nArray: [ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << ", ";
    }
    cout << " ]" << endl;
    countEvenOdd(arr, n);
    return 0;
}