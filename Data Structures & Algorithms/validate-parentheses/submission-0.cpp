class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i = 0; i < s.size(); i++) {
            char ch = s[i];

            // Push opening brackets
            if(ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else {
                // If stack empty → invalid
                if(st.empty()) return false;

                char top = st.top();

                // Check matching
                if((ch == ')' && top == '(') ||
                   (ch == '}' && top == '{') ||
                   (ch == ']' && top == '[')) {
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }

        // If stack empty → valid
        return st.empty();
    }
};