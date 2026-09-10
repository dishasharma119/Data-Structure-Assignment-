#include <iostream>
#include <string>
using namespace std;

int main() {
    string postfix;
    int stack[100];
    int top = -1;
    cout << "Enter postfix expression: ";
    cin >> postfix;
    for(int i = 0; i < postfix.length(); i++)  {
        char ch = postfix[i];
        
        if(ch >= '0' && ch <= '9')  {
            top++;
            stack[top] = ch - '0';
        }
        else {
            int b = stack[top];
            top--;

            int a = stack[top];
            top--;

            int result;
            if(ch == '+')
                result = a + b;
            else if(ch == '-')
                result = a - b;
            else if(ch == '*')
                result = a * b;
            else if(ch == '/')
                result = a / b;
            top++;
            stack[top] = result;
        }
    }
    cout<<"Result: "<<stack[top]<<endl;
    return 0;
}
