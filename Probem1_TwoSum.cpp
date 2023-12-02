//Link: https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            int numToFind = target - nums[i];
            if(mp.find(numToFind)!=mp.end()){
                res.push_back(mp[numToFind]);
                res.push_back(i);
                return res;
            }else{
                mp[nums[i]] = i;
            }
        }
        return res;
    }
};
