#include <iostream>
using namespace std;

int main()
{
    int arr[20], n, i, temp;

    cout << "Enter the no. of elements: ";
    cin >> n;
    cout << "Enter array elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    cout << "Reversed array: [";

    for(i = 0; i < n; i++)
    {
        cout << arr[i];

        if(i < n - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    return 0;
}
