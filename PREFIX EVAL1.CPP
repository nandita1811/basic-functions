#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

double evaluatePrefix(string s)
{
    stack<double> st;
    for(int i = s.length()-1 ; i>=0 ; i--)
    {
        if(s[i]==' ')
        continue;
        
        if(isdigit(s[i]))
        {
            double num = 0;
            double j = i;
            while(i<s.size()&&isdigit(s[i]))
                i--;
            i++;
            for(int k = i;k<=j;k++)
             num = num * 10 + double(s[k] - '0');
            st.push(num);
        //Push operand to Stack
       
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
    string s = "+ 9 * 12 6";
    cout << evaluatePrefix(s) << endl;
    return 0;
}
