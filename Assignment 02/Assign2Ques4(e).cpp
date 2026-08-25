#include <iostream>
using namespace std;

int main() {
    char ch;
    cout<<"enter an uppercase character: ";
    cin>>ch;

    if(ch >= 'A' && ch <= 'Z') {
        ch =ch + 32;
        cout<<"lowercase character: " <<ch <<endl;
    }
    else {
        cout<< "enter an uppercase character" << endl;
    }
    return 0;
}
