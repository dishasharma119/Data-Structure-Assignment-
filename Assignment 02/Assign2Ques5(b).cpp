#include <iostream>
using namespace std;

int main() {
    int n, arr[50], i, j, k = 0;
    cout << "enter size of tri-diagonal matrix: ";
    cin >> n;
    cout << "enter non-zero elements:\n";

    for(i = 0; i < 3 * n - 2; i++) {
        cin >> arr[i];
    }
    cout << "TriDiagonal Matrix:\n";

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)  {
            if(i == j || i == j + 1 || j == i + 1) {
                cout << arr[k++] << " ";
            }
            else {
                cout << "0 ";
            }
        }
        cout<<endl;
    }
    return 0;
}
