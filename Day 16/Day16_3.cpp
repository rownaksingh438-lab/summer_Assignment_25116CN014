#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2, 7, 11, 15, 1, 8};
    int target = 9;

    unordered_set<int> seen;

    for (int num : arr) {
        int complement = target - num;
        if (seen.count(complement)) {
            cout << "Pair found: " << complement << " + " << num << " = " << target << endl;
            return 0;
        }
        seen.insert(num);
    }

    cout << "No pair found." << endl;
    return 0;
}