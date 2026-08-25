#include <iostream>
using namespace std;

int main() {
    int arr[20], n, item;
    int low, high, mid;
    int found=0;
    cout << "enter the no. of elements : ";
    cin>>n;
    cout<<"enter elements : ";
    
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout << "Enter element to search : ";
    cin>>item;
    low=0;
    high= n-1;

    while(low<=high) {
        mid = (low+high) / 2;
        if(arr[mid] == item) {
            cout << "element found at position "<< mid + 1<< endl;
            found = 1;
            break;
        }
        else if(item < arr[mid]) {
            high= mid - 1;
        }
        else {
            low= mid + 1;
        }
    }
    if(found == 0) {
        cout<< "Element not found." <<endl;
    }
    return 0;
}
