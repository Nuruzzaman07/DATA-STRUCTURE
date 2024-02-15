#include<iostream>
using namespace std;

int main() {
   int n, i;
   cout << "Enter the number of elements: ";
   cin >> n;

   int arr[n];

   cout << "Enter " << n << " elements: ";


   for(i=0; i<n; i++) {
      cin >> arr[i];
   }

   cout << "Array in reverse order: ";
   for(i=n-1; i>=0; i--) {
      cout << arr[i] << " ";
   }

   return 0;
}
