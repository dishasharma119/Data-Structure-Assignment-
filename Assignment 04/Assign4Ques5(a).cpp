#include <iostream>
#include <queue>
using namespace std;

queue<int> q1, q2;
void push(int x) {
    q2.push(x);

    while(!q1.empty()) {
        q2.push(q1.front());
        q1.pop();
    }
    swap(q1, q2);
}
void pop() {
    if(q1.empty()) {
        cout << "Stack is Empty\n";
        return;
    }
    cout << "Popped: " << q1.front() << endl;
    q1.pop();
}
void top() {
    if(q1.empty())
        cout << "Stack is Empty\n";
    else
        cout << "Top: " << q1.front() << endl;
}

int main() {
    int choice, value;
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Top";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Enter value: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                top();
                break;

            case 4:
                break;

            default:
                cout << "Invalid choice\n";
        } while(choice != 4);
		  return 0;
}
