//Link: https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
            if((s[i] >= 'a' && s[i] <= 'z')|| (s[i] >= '0' && s[i] <= '9'))
                str.push_back(s[i]);
        }
        for(int i = 0; i < str.size()/2; i++){
            if(str[i] != str[str.size()-i-1])
                return 0;
        }
        return 1;
    }
};
