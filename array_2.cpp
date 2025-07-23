#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];  // You can also use dynamic allocation for larger sizes
    int sum = 0;

    // Input array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];  // Add each element to sum
    }

    // Output the sum
    cout << "Sum of all elements = " << sum << endl;

    return 0;
}
