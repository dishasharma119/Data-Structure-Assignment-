#include <iostream>
using namespace std;

int main() {
    int n, arr[20], i;

    cout << "enter size of diagonal matrix: ";
    cin>>n;
    cout << "enter diagonal elements:\n";

    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "diagonal Matrix:\n";

    for(i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j)
                cout << arr[i] << " ";
            else
                cout << "0 ";
        }
        cout<<endl;
    }
    return 0;
}
