#include <iostream>
using namespace std;

int main() {
    int len;
    cout << "Enter number of elements: ";
    cin >>len;

    if (len < 2) {
        cout << "Need at least two numbers!" << endl;
        return 0;
    }

    int arr[len];
    cout << "Enter " << len << " integers: ";
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < len; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
        cout << "No second greatest element (all elements are equal)." << endl;
    else
        cout << "Second greatest integer: " << second << endl;

    return 0;
}

