//Link: https://leetcode.com/problems/valid-parentheses/
class Solution {
public:
    bool isValid(string s) {
        map<char, char> mp;
        mp[')'] = '(';
        mp['}'] = '{';
        mp[']'] ='[';
        stack<char> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            	st.push(s[i]);
            else if(s[i] == ')' || s[i] == ']' || s[i] == '}')
            {
                if(st.empty())
                    return 0;
            	char temp = st.top();
            	st.pop();
            	if(mp[s[i]] != temp)
            		return 0;
			}
        }
        if(!st.empty())
            return 0;
        return 1;
}
};
