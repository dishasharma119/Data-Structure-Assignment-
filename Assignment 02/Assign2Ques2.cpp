#include <iostream>
using namespace std;

int main() {
    int arr[20], n, i, j, temp;
    cout<<"enter no. of elements : ";
    cin>>n;
    cout << "enter array elements : ";
    for(i = 0;i < n;i++)
    {
        cin>>arr[i];
    }
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++)  {
            if(arr[j] > arr[j + 1])  {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout<<"the sorted array is : [";

    for(i = 0; i < n; i++) {
        cout<<arr[i];
        if(i< n-1) {
            cout <<", ";
        }
    }
    cout<<"]"<<endl;
    return 0;
}
