#include <iostream>
using namespace std;

int main() {
    int n, arr[50], i, j, k = 0;
    cout<<"enter size of symmetric matrix: ";
    cin>>n;
    cout<<"enter the lower triangular elements:\n";

    for(i = 0; i < n * (n + 1) / 2; i++) {
        cin >> arr[i];
    }
    cout << "Symmetric Matrix:\n";

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i >= j)  {
                int index = i * (i + 1) / 2 + j;
                cout << arr[index] << " ";
            }
            else {
                int index = j * (j + 1) / 2 + i;
                cout<<arr[index] << " ";
            }
        }
        cout<<endl;
    }
    return 0;
}
