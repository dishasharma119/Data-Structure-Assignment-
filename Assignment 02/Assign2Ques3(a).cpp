#include <iostream>
using namespace std;

int main() {
    int arr[20], n, i;
    int sum = 0, total, missing;
    cout<< "Enter the value of n: ";
    cin>>n;
    cout<< "Enter "<< n - 1<< " elements: ";
    for(i = 0;i < n - 1;i++) {
        cin>>arr[i];
        sum= sum + arr[i];
    }
    total= n*(n + 1)/2;
    missing= total-sum;
    cout<<"Missing number is: "<< missing<<endl;
    return 0;
}
