#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int i;
    cout<<"enter string: ";
    cin>>str;
    cout<<"reversed string: ";

    for(i= str.length()-1;i>=0;i--) {
        cout<<str[i];
    }
    cout<<endl;
    return 0;
}
