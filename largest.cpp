#include <iostream>
using namespace std;

int main() {
    int arr[50], n, max1, max2;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    max1 = max2 = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    cout << "The largest element in the array is " << max1 << endl;
    cout << "The second largest element in the array is " << max2 << endl;
    return 0;
}
