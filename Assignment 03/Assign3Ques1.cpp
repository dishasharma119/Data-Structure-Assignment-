#include <iostream>
using namespace std;

int main() {
    int stack[5];
    int top = -1;
    int choice, item, i;

    do {
        cout << "\n------ STACK MENU ------";
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Is Empty";
        cout << "\n4. Is Full";
        cout << "\n5. Display";
        cout << "\n6. Peek";
        cout << "\n7. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;
        switch(choice)  {
            case 1:
                if(top == 4)   {
                    cout << "Stack is Full." << endl;
                }
                else  {
                    cout << "Enter element: ";
                    cin >> item;
                    top++;
                    stack[top] = item;
                    cout << "Element pushed successfully." << endl;
                }
                break;
            case 2:
                if(top == -1)   {
                    cout << "Stack is Empty." << endl;
                }
                else  {
                    cout << "Deleted element: " << stack[top] << endl;
                    top--;
                }
                break;
            case 3:
                if(top == -1)  {
                    cout << "Stack is Empty." << endl;
                }
                else  {
                    cout << "Stack is not Empty." << endl;
                }
                break;
            case 4:
                if(top == 4)   {
                    cout << "Stack is Full." << endl;
                }
                else
                {
                    cout << "Stack is not Full." << endl;
                }
                break;
            case 5:
                if(top == -1)  {
                    cout << "Stack is Empty." << endl;
                }
                else {
                    cout << "Stack elements: [";
                    for(i = top; i >= 0; i--)  {
                        cout << stack[i];

                        if(i != 0)   {
                            cout << ", ";
                        }
                    }
                    cout << "]" << endl;
                }
                break;
            case 6:
                if(top == -1)  {
                    cout << "Stack is Empty." << endl;
                }
                else {
                    cout << "Top element: " << stack[top] << endl;
                }
                break;
            case 7:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }

    } while(choice != 7);
    return 0;
}
