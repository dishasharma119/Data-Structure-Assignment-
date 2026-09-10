#include <iostream>
#include <string>
using namespace std;

int precedence(char op) {
    if(op == '+' || op == '-')
        return 1;
    if(op == '*' || op == '/')
        return 2;
    if(op == '^')
        return 3;
    return 0;
}
int main() {
    string infix, postfix = "";
    char stack[100];
    int top = -1;
    cout << "Enter infix expression: ";
    cin >> infix;
    for(int i = 0; i < infix.length(); i++) {
        char ch = infix[i];

        if((ch >= 'a' && ch <= 'z') ||
           (ch >= 'A' && ch <= 'Z') ||
           (ch >= '0' && ch <= '9'))  {
            postfix = postfix + ch;
        }
        else if(ch == '(')  {
            top++;
            stack[top] = ch;
        }
        else if(ch == ')') {
            while(top != -1 && stack[top] != '(')  {
                postfix = postfix + stack[top];
                top--;
            }
            if(top != -1)
                top--;
        }
        else {
            while(top != -1 && stack[top] != '(' &&
                  precedence(stack[top]) >= precedence(ch)) {
                postfix = postfix + stack[top];
                top--;
            }
            top++;
            stack[top] = ch;
        }
    }
    while(top != -1) {
        postfix = postfix + stack[top];
        top--;
    }
    cout<<"Postfix expression: "<<postfix<<endl;
    return 0;
}
