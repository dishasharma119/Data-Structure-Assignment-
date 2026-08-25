#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[10], temp;
    int n, i, j;
    cout << "enter no. of strings: ";
    cin >> n;
    cout << "enter strings:\n";

    for(i = 0; i < n; i++) {
        cin >> str[i];
    }

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++)  {
            if(str[j] > str[j + 1])  {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    cout << "Strings in alphabetical order:\n";

    for(i = 0;i < n;i++) {
        cout<<str[i]<<endl;
    }
    return 0;
}
