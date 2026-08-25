#include <iostream>
using namespace std;

int main() {
    int arr[20], n;
    int i, j;
    int count = 0;
    int found;
    cout << "Enter the no. of elements: ";
    cin >> n;
    cout << "Enter array elements: ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(i = 0; i < n; i++) {
        found = 0;
        
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j])
            {
                found = 1;
                break;
            }
        }
        if(found == 0) {
            count++;
        }
    }
    cout << "Total number of distinct elements: "<< count << endl;
    return 0;
}
