class Solution {
public:
    int rob(vector<int>& nums) {
        int sum = 0;
        int tmp, pre_tmp = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            tmp = sum;
            sum = pre_tmp  + nums[i] > tmp ? pre_tmp  + nums[i] : sum;
            pre_tmp = tmp;
        }
        return sum;
    }
};
