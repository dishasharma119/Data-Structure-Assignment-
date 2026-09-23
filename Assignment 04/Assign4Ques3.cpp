#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;
    queue<int> q;
    
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        q.push(x);
    }
    queue<int> firstHalf;
    int half = n / 2;

    for(int i = 0; i < half; i++) {
        firstHalf.push(q.front());
        q.pop();
    }
    while(!firstHalf.empty()) {
        cout << firstHalf.front() << " ";
        firstHalf.pop();
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
