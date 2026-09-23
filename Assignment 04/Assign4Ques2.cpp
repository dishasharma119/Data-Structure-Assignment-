#include <iostream>
using namespace std;

int queueArr[100];
int front = -1;
int rear = -1;
int size;

bool isEmpty() {
    return front == -1;
}
bool isFull() {
    return (rear + 1) % size == front;
}
void enqueue(int value) {
    if(isFull()) {
        cout << "Queue is Full\n";
        return;
    }
    if(isEmpty()) {
        front = 0;
        rear = 0;
    }
    else {
        rear = (rear + 1) % size;
    }

    queueArr[rear] = value;
}

void dequeue() {

    if(isEmpty()) {
        cout << "Queue is Empty\n";
        return;
    }
    cout << "Deleted: " << queueArr[front] << endl;

    if(front == rear) {
        front = -1;
        rear = -1;
    }
    else {
        front = (front + 1) % size;
    }
}
void peek() {
    if(isEmpty())
        cout << "Queue is Empty\n";
    else
        cout << "Front: " << queueArr[front] << endl;
}

void display() {

    if(isEmpty()) {
        cout << "Queue is Empty\n";
        return;
    }

    int i = front;

    while(true) {
        cout << queueArr[i] << " ";

        if(i == rear)
            break;

        i = (i + 1) % size;
    }

    cout << endl;
}
int main() {
    cout << "Enter queue size: ";
    cin >> size;
    int choice, value;
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Peek";
        cout << "\n4. Display";
        cout << "\n5. Is Empty";
        cout << "\n6. Is Full";
        cout << "\n7. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << (isEmpty() ? "Queue is Empty" : "Queue is Not Empty") << endl;
                break;
            case 6:
                cout << (isFull() ? "Queue is Full" : "Queue is Not Full") << endl;
                break;
            case 7:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid choice";
        }
    while(choice != 7);
    return 0;
}
