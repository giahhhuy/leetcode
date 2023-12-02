//Link: https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int *a = new int[n];
        a[0] = nums[0];
        for(int i = 1; i < n; i++){
            a[i] = nums[i]+a[i-1];
        }
        int max = a[0];
        int begin = 0;
        for(int end = 0; end < n; end++)
        {
            int sum;
            if(begin != 0)
                sum = a[end]-a[begin-1];
            else
                sum = a[end];
            max = (max < sum) ? sum : max;
            if(sum < 0)
                begin = end+1;
        }
        return max;
    }
};
