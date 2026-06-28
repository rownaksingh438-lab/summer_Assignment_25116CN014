#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5, 3, 3, 3};
    int n = 10;
    int maxFreq = 0;
    int maxElement = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }
    cout << "Maximum frequency element is: " << maxElement << endl;
    cout << "Frequency: " << maxFreq;
    return 0;
}