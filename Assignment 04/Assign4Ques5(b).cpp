#include <iostream>
#include <queue>
using namespace std;

queue<int> q;
void push(int x) {
    q.push(x);
    int n = q.size();
    for(int i = 0; i < n - 1; i++) {
        q.push(q.front());
        q.pop();
    }
}
void pop() {
    if(q.empty()) {
        cout << "Stack is Empty\n";
        return;
    }

    cout << "Popped: " << q.front() << endl;
    q.pop();
}

void top() {
    if(q.empty())
        cout << "Stack is Empty\n";
    else
        cout << "Top: " << q.front() << endl;
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
        } 
		while(choice != 4);
		return 0;
}
