#include <iostream>
using namespace std;

int main()
{
    int matrix[10][10];
    int rows, columns, i, j;
    int sum;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;
    cout << "Enter matrix elements:\n";

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "\nMatrix:\n";

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nSum of each row:\n";
    for(i = 0; i < rows; i++)
    {
        sum = 0;

        for(j = 0; j < columns; j++)
        {
            sum = sum + matrix[i][j];
        }
        cout << "Row " << i + 1 << " = " << sum << endl;
    }
    
    cout << "\nSum of each column:\n";
    for(j = 0; j < columns; j++)
    {
        sum = 0;
        for(i = 0; i < rows; i++)
        {
            sum = sum + matrix[i][j];
        }
        cout << "Column " << j + 1 << " = " << sum << endl;
    }
    return 0;
}
