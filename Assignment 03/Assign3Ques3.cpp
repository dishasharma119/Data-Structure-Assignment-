#include <iostream>
#include <string>
using namespace std;

int main() {
    string expression;
    char stack[100];
    int top = -1;
    int balanced = 1;
    cout<<"Enter an expression: ";
    cin>>expression;

    for(int i = 0; i < expression.length(); i++) {
        if(expression[i] == '(') {
            top++;
            stack[top] = '(';
        }
        else if(expression[i] == ')') {
            if(top == -1) {
                balanced = 0;
                break;
            }
            top--;
        }
    }
    if(top!=-1) {
        balanced = 0;
    }
    if(balanced==1) {
        cout<<"Parentheses are balanced."<<endl;
    }
    else {
        cout<<"Parentheses are not balanced."<<endl;
    }
    return 0;
}
