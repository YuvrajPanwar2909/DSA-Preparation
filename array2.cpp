//reverse an array without using another array 
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 5, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Initialize two pointers
    int start = 0;
    int end = n - 1;

    // Swap elements from both ends moving towards the center
    while (start < end) {
        // Swap elements using a temporary variable
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers
        start++;
        end--;
    }

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
