#include <iostream>

using namespace std;

void bubbleSort(int arr[], int size){
    // Start your code from here
    for (int i=0; i<size-1; i++) {
        for (int j=0; j<size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
            int tmp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1]=tmp;
            }
        }
    }
}

void enter_arr(int arr[], int size) {
    cout << "Enter " << size << " integers: ";
    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }
}

void print_arr(int arr[], int size) {
    for(int i = 0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    
    int size = 10;
    int arr[size];

    enter_arr(arr, size);

    bubbleSort(arr, size);
    cout << "Sorted array: ";
    print_arr(arr, size);

    return 0;
}
