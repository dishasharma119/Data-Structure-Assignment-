#include <iostream>
using namespace std;

int main() {
    int arr[20], n, i;
    int low, high, mid;
    cout << "enter value of n: ";
    cin >> n;
    cout << "enter "<< n - 1<< " elements : ";
    for(i = 0;i < n-1;i++)  {
        cin>>arr[i];
    }
    low= 0;
    high= n-2;

    while(low<=high) {
        mid=(low + high)/2;
        if(arr[mid] == mid + 1) {
            low= mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    cout<< "missing number is: "<< low + 1<< endl;
    return 0;
}
