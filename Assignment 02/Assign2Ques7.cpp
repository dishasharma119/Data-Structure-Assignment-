#include <iostream>
using namespace std;

int main() {
    int arr[20], n;
    int i, j, count = 0;
    cout << "enter the no. of elements: ";
    cin >> n;
    cout << "enter array elements: ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] > arr[j])
            {
                count++;
            }
        }
    }
    cout << "Number of inversions: " << count << endl;
    return 0;
}
