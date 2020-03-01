class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        
        int length = nums.size();
        if (length == 0)
        {
            return res;
        }
        unordered_map<int, int> mp;//值=>位置+1
        for (int i = 0; i < length; i++)
        {
            int last = target - nums[i];
            if (mp[last] > 0)
            {
                res.push_back(i);
                res.push_back(mp[last] - 1);
            }
            mp[nums[i]] = i + 1;
        }
        
        return res;
    }
};
