#include<iostream>
using namespace std;

void print(int arr[], int start, int end) {
    for(int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int *arr, int start, int end, int key) {

    print(arr, start, end);  // Print current range of the array

    // Base case: element not found
    if(start > end) 
        return false;

    int mid = start + (end - start) / 2;

    // Element found
    if(arr[mid] == key) {
        return true;
    }

    // Recursive calls with corrected bounds
    if(arr[mid] > key) {
        return binarySearch(arr, start, mid - 1, key);  // Search left half
    } else {
        return binarySearch(arr, mid + 1, end, key);    // Search right half
    }
}

int main() {

    int arr[5] = {2, 4, 6, 10, 14};
    int size = 5;
    int key = 78;

    cout << "Present or not: " << binarySearch(arr, 0, size-1, key);

}
