#include <iostream>
using namespace std;

int main() {
    int a[20][3], b[20][3], c[40][3];
    int r, col, n1, n2;
    int i, j, k = 1;
    cout << "Enter rows, columns and non-zero elements of first matrix: ";
    cin >> r >> col >> n1;
    a[0][0] = r;
    a[0][1] = col;
    a[0][2] = n1;
    cout << "Enter triplets of first matrix:\n";

    for(i = 1; i <= n1; i++) {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }
    cout << "Enter rows, columns and non-zero elements of second matrix: ";
    cin>> r>>col>>n2;
    b[0][0] = r;
    b[0][1] = col;
    b[0][2] = n2;
    cout << "Enter triplets of second matrix:\n";
    for(i = 1; i <= n2; i++)  {
        cin >> b[i][0] >> b[i][1] >> b[i][2];
    }
    c[0][0] = a[0][0];
    c[0][1] = a[0][1];
    for(i = 1; i <= n1; i++) {
        c[k][0] = a[i][0];
        c[k][1] = a[i][1];
        c[k][2] = a[i][2];
        k++;
    }
    for(i = 1; i <= n2; i++) {
        bool found = false;
        for(j = 1; j < k; j++)
        {
            if(c[j][0] == b[i][0] && c[j][1] == b[i][1])
            {
                c[j][2] = c[j][2] + b[i][2];
                found = true;
                break;
            }
        }
        if(found == false)
        {
            c[k][0] = b[i][0];
            c[k][1] = b[i][1];
            c[k][2] = b[i][2];
            k++;
        }
    }
    c[0][2] = k - 1;
    cout << "\nAddition of sparse matrices:\n";
    for(i = 0; i < k; i++) {
        cout << c[i][0] << " "
             << c[i][1] << " "
             << c[i][2] << endl;
    }
    return 0;
}
