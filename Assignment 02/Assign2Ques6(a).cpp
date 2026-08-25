#include <iostream>
using namespace std;

int main() {
    int sparse[20][3], transpose[20][3];
    int rows, columns, nonZero;
    int i, j, k = 1;

    cout<<"Enter no. of rows: ";
    cin>>rows;
    cout<<"Enter no. of columns: ";
    cin>>columns;
    cout<<"Enter no. of non-zero elements: ";
    cin>>nonZero;

    sparse[0][0] = rows;
    sparse[0][1] = columns;
    sparse[0][2] = nonZero;
    cout<<"Enter row, column and value of non-zero element:\n";

    for(i = 1; i <= nonZero; i++) {
        cin >> sparse[i][0] >> sparse[i][1] >> sparse[i][2];
    }
    transpose[0][0] = columns;
    transpose[0][1] = rows;
    transpose[0][2] = nonZero;

    for(i = 0; i < columns; i++) {
        for(j = 1; j <= nonZero; j++)  {
            if(sparse[j][1] == i) {
                transpose[k][0] = sparse[j][1];
                transpose[k][1] = sparse[j][0];
                transpose[k][2] = sparse[j][2];
                k++;
            }
        }
    }
    cout << "\nTranspose:\n";

    for(i = 0; i <= nonZero; i++) {
        cout << transpose[i][0] << " "
             << transpose[i][1] << " "
             << transpose[i][2] << endl;
    }
    return 0;
}
