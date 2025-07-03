/********************STACK**************************/

#include <iostream>
#include <unordered_map>
#include <stack>
using namespace std;

// Function to check if the brackets in the string are balanced
string isBalanced(string s) {
    unordered_map<char, int> symbols = {{'[', -1}, {'{', -2}, {'(', -3}, {']', 1}, {'}', 2}, {')', 3}};
    stack<char> st;
    
    for (char bracket : s) {
        if (symbols[bracket] < 0) {
            // Push the opening bracket onto the stack
            st.push(bracket);
        } else {
            // Check if there are unmatched closing brackets
            if (st.empty()) return "NO";
            
            char top = st.top();
            st.pop();
            
            // Check if the brackets match
            if (symbols[bracket] + symbols[top] != 0) return "NO";
        }
    }
    
    // If the stack is empty, all brackets were matched
    if(st.empty()) return "YES";
    return "NO";
    //return st.empty() ? "YES" : "NO";
}

int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }
    
    return 0;
}
