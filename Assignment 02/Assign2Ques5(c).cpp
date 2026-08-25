#include <iostream>
using namespace std;

int main() {
    int n, arr[50], i, j, k = 0;
    cout << "enter the size of lower triangular matrix: ";
    cin >> n;
    cout << "enter the elements:\n";

    for(i = 0; i < n * (n + 1) / 2; i++)  {
        cin >> arr[i];
    }
    cout << "lower Triangular Matrix:\n";

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i >= j)
                cout << arr[k++] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}
