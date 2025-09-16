#include <iostream>
using namespace std;
int main() {
    int i, n, nums[10], target;
    cout << "Enter the total no. of element in array :" << endl;
    cin >> n;

    cout << "Enter the Target Value :" << endl;
    cin >> target;

    cout << "enter the elements in array : " << endl;
    for (i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                cout << "the indices are : " << i << " " << j << endl;
            }
        }
    }

    return 0;
}