#include <iostream>
using namespace std;

int main()
{
    int arr[20], temp[20];
    int n, k, choice, i;
    cout << "Enter the no. of elements: ";
    cin >> n;
    cout << "Enter array elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the value of K: ";
    cin >> k;

    k = k % n;

    cout << "\n1. Left Rotation";
    cout << "\n2. Right Rotation";
    cout << "\nEnter your choice: ";
    cin >> choice;

    if(choice == 1)
    {
        for(i = 0; i < n; i++)
        {
            temp[i] = arr[(i + k) % n];
        }
    }
    else if(choice == 2)
    {
        for(i = 0; i < n; i++)
        {
            temp[i] = arr[(i - k + n) % n];
        }
    }
    else
    {
        cout << "Invalid choice.";
        return 0;
    }
    cout << "Rotated array: [";

    for(i = 0; i < n; i++)
    {
        cout << temp[i];

        if(i < n - 1)
        {
            cout << ", ";
        }  
    }
    cout << "]" << endl;
    return 0;
}
