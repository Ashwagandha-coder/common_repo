
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char str: s) {
            if (str == '(' || str == '{' || str == '[') {
                st.push(str);
            } else {
                if (!st.empty()) {
                    char top = st.top();
                    if (top == '(' && str == ')' || top == '[' && str == ']' || top == '{' && str == '}') {
                        st.pop();
                    } else {
                        return false;
                    }
                } else {
                    st.push(str);
                    // return false;
                }
            }
        }
        if (st.empty() == true) {
            return true;
        } else {
            return false;
        }
    }

};
