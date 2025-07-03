#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

/*for(int i=0;i<s.length();i==){
       This for loop is for postfix Evaluation
       only conditions of for loop are changed, The body of for loop remains unchanged it is as same as the prefixEvaluation
}*/

int prefixEvaluation(string s)
{
    stack<char> st;
    // This for loop for prefixEvaluation
    for (int i = s.length()-1; i >= 0; i--)
    {

        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(pow(op1, op2));
                break;
            }
            
        }
    }
    return st.top();
}

int main()
{
    cout << "The prefix Evaluation of (- + 7 * 4 5 + 2 0) is given as: " << prefixEvaluation("-+7*45+20") << endl;
    return 0;
}