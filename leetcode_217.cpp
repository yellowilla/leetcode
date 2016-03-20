class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() <= 1)
            return false;
        sort(nums.begin(), nums.end());
        for(int j = 0; j < nums.size(); j++)
        {
            if(nums[j] == nums[j + 1])
                return true;
        }
        return false;
    }
};
