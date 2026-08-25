#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1,str2;
    cout<<"enter first string : ";
    cin>> str1;
    cout<<"enter second string : ";
    cin>>str2;
    str1= str1+str2;
    cout<<"concatenated string: "<<str1<<endl;
    return 0;
}
