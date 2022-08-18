#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
bool isoperand(char c)
{
    // to check if the character of the string is a digit(operand)
    return isdigit(c);
}
double evaluatePrefix(string s)
{
    stack<double> st;
    for(int i = s.length()-1 ; i>=0 ; i--)
    {
        if(isoperand(s[i]))
        {
            st.push(s[i]-'0');//Push operand to Stack
        // To convert s[i] to digit subtract
        // '0' from s[i].
        }
        else
        {// Operator encountered
            // Pop two elements from Stack
            double opnd1 = st.top();
            st.pop();
            double opnd2 = st.top();
            st.pop();
            
            double res;
            switch(s[i])
            {
                case '+':
                res = opnd1+opnd2;
                break;
                case '-':
                res = opnd1-opnd2;
                break;
                case '*':
                res = opnd1*opnd2;
                break;
                case '/':
                res = opnd1/opnd2;
                break;
                case '^':
                res = pow(opnd1,opnd2);
                break;
            }
            st.push(res);
        }
    }
    return st.top();
}
int main()
{
    string s = "-+7*45+20";
    cout << evaluatePrefix(s) << endl;
    return 0;
}