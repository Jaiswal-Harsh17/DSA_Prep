// Bubble Sort
#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void bubble(int arr[], int n) {
    int temp;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {55, 25, 35, 19, 23, 91, 29};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before sorting:" << endl;
    print(arr, n);
    bubble(arr, n);
    cout << "After sorting:" << endl;
    print(arr, n);
    return 0;
}
