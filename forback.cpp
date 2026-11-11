#include <iostream>
#include <vector>
using namespace std;

// Print Array in Forward Order
void printForward(int arr[], int index, int n) {

    // Base Case
    if (index == n) {
        return;
    }

    // Print before recursive call
    cout << arr[index] << " ";

    // Move to next index
    printForward(arr, index + 1, n);
}

// Print Array in Backward Order
void printBackward(int arr[], int index, int n) {

    // Base Case
    if (index == n) {
        return;
    }

    // Recursive call first
    printBackward(arr, index + 1, n);

    // Print after recursive call
    cout << arr[index] << " ";
}

int main() {

    int n;

    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size!";
        return 0;
    }

    int arr[n];

    // Take array elements from user
    cout << "Enter " << n << " array elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print Forward
    cout << "\nArray in Forward Order: ";
    printForward(arr, 0, n);

    // Print Backward
    cout << "\nArray in Backward Order: ";
    printBackward(arr, 0, n);

    return 0;
}
