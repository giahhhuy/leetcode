//link: leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        int check[256] ={0};
        for(int i = 0; i < s.size(); i++)
            check[s[i]]++;
        for(int i = 0; i < t.size(); i++)
            if(check[t[i]] > 0)
                check[t[i]]--;
            else return 0;
        for(int i = 0; i < 256; i++)
            if(check[i] > 0)
                return 0;
        return 1;
    }
};
