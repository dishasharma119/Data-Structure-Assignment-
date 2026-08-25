#include <iostream>
using namespace std;
int main()
{
    int arr[20], n = 0;
    int choice, i, pos, item;
    int found = 0;

    do
    {
        cout << "\n------ MENU -----";
        cout << "\n1. Create";
        cout << "\n2. Display";
        cout << "\n3. Insert";
        cout << "\n4. Delete";
        cout << "\n5. Linear Search";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter the no. of elements: ";
                cin >> n;

                cout << "Enter array elements: ";
                for(i = 0; i < n; i++)
                {
                    cin >> arr[i];
                }

                cout << "Array: [";
                for(i = 0; i < n; i++)
                {
                    cout << arr[i];

                    if(i < n - 1)
                    {
                        cout << ", ";
                    }
                }
                cout << "]" << endl;

                break;

            case 2:
                if(n == 0)
                {
                    cout << "Array is empty." << endl;
                }
                else
                {
                    cout << "Array: [";

                    for(i = 0; i < n; i++)
                    {
                        cout << arr[i];

                        if(i < n - 1)
                        {
                            cout << ", ";
                        }
                    }
                    cout << "]" << endl;
                }
                break;

            case 3:
                cout << "Enter the position: ";
                cin >> pos;
                cout << "Enter element to insert: ";
                cin >> item;

                for(i = n; i >= pos; i--)
                {
                    arr[i] = arr[i - 1];
                }
                arr[pos - 1] = item;
                n++;

                cout << "Element is inserted." << endl;
                cout << "Array: [";
                for(i = 0; i < n; i++)
                {
                    cout << arr[i];

                    if(i < n - 1)
                    {
                        cout << ", ";
                    }
                }
                cout << "]" << endl;
                break;

            case 4:
                cout << "Enter position to delete: ";
                cin >> pos;

                for(i = pos - 1; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                n--;

                cout << "Element is deleted." << endl;
                cout << "Array: [";
                for(i = 0; i < n; i++)
                {
                    cout << arr[i];

                    if(i < n - 1)
                    {
                        cout << ", ";
                    }
                }
                cout << "]" << endl;
                break;

            case 5:
                cout << "Enter element to search: ";
                cin >> item;
                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(arr[i] == item)
                    {
                        cout << "Position of the element is "
                             << i + 1 << endl;

                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                {
                    cout << "Element not found" << endl;
                }
                break;

            case 6:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }

    } while(choice != 6);
    return 0;
}
