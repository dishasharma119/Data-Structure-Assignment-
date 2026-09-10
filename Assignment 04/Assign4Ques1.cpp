#include <iostream>
using namespace std;

int main() {
    int queue[5];
    int front = -1, rear = -1;
    int choice, item; {
        cout << "\n------ QUEUE MENU ------";
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Is Empty";
        cout << "\n4. Is Full";
        cout << "\n5. Display";
        cout << "\n6. Peek";
        cout << "\n7. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                if(rear == 4)
                {
                    cout << "Queue is Full." << endl;
                }
                else
                {
                    cout << "Enter element: ";
                    cin >> item;

                    if(front == -1)
                        front = 0;

                    rear++;
                    queue[rear] = item;

                    cout << "Element inserted successfully." << endl;
                }
                break;

            case 2:
                if(front == -1 || front > rear)
                {
                    cout << "Queue is Empty." << endl;
                }
                else
                {
                    cout << "Deleted element: " << queue[front] << endl;
                    front++;

                    if(front > rear)
                    {
                        front = -1;
                        rear = -1;
                    }
                }
                break;

            case 3:
                if(front == -1)
                    cout << "Queue is Empty." << endl;
                else
                    cout << "Queue is not Empty." << endl;
                break;

            case 4:
                if(rear == 4)
                    cout << "Queue is Full." << endl;
                else
                    cout << "Queue is not Full." << endl;
                break;

            case 5:
                if(front == -1)
                {
                    cout << "Queue is Empty." << endl;
                }
                else
                {
                    cout << "Queue elements: [";
                    for(int i = front; i <= rear; i++) {
                        cout << queue[i];

                        if(i != rear)
                            cout << ", ";
                    }
                    cout << "]" << endl;
                }
                break;
            case 6:
                if(front == -1)
                    cout << "Queue is Empty." << endl;
                else
                    cout<<"Front element: " << queue[front] << endl;
                break;
            case 7:
                cout<<"Exit program"<<endl;
                break;
            default:
                cout<<"Invalid choice."<<endl;
        }
    } while(choice!=7);
    return 0;
}
