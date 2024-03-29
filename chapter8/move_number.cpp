#include <iostream>
using namespace std;
int main() {
    const int N = 5;
    int arr[N] = {91, 98, 92, 93, 60};
    for (int i = 0; i < N; i++) {
        int max_idx = 0;
        for (int j = 1; j < N-i; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        
        int tmp = arr[max_idx];
        arr[max_idx] = arr[N-i-1];
        arr[N-i-1] = tmp;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}