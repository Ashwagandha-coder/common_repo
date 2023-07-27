

#ifndef ABSTRACT_REPO_ALT_H
#define ABSTRACT_REPO_ALT_H


#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        pair<char,char>v1;
        pair<char,char>v2;
        pair<char,char>v3;
        v1 = {'(',')'};
        v2 = {'{','}'};
        v3 = {'[',']'};

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty()) return false;
                if(st.top()==v1.first)
                {
                    if(s[i]==v1.second)
                        st.pop();
                    else
                        return false;
                }
                else if(st.top()==v2.first)
                {
                    if(s[i]==v2.second)
                        st.pop();
                    else
                        return false;
                }
                else if(st.top()==v3.first)
                {
                    if(s[i]==v3.second)
                        st.pop();
                    else
                        return false;
                }
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};


#endif //ABSTRACT_REPO_ALT_H
