#include <iostream>
using namespace std;

int main()
{
    int arr[20], n, i, j, k;
    cout << "Enter the no. of elements: ";
    cin >> n;
    cout << "Enter array elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                for(k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                n--;
                j--;
            }
        }
    }
    cout << "Array after removing duplicates: [";

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
