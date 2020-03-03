class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        set<vector<int>> res_set;
        sort(nums.begin(), nums.end());
        
        int length = nums.size();
        
        for(int i = 0; i < length - 3; i++)
        {
            if (nums[i] + nums[i+1] + nums[i+2] + nums[i+3] > target){
                continue;
            }
            if (nums[i] + nums[length-1] + nums[length-2] + nums[length-3] < target){
                continue;
            }
            for(int j = i + 1; j < length - 2; j++)
            {
                if (nums[i] + nums[j] + nums[j+1] + nums[j+2] > target){
                    continue;
                }
                if (nums[i] + nums[length-1] + nums[length-2] + nums[j] < target){
                    continue;
                }
                for(int p = j + 1; p < length - 1; p++)
                {
                    if (nums[i] + nums[j] + nums[p] + nums[p+1] > target){
                        continue;
                    }
                    if (nums[i] + nums[length-1] + nums[p] + nums[j] < target){
                        continue;
                    }
                    for(int q = p + 1; q < length; q++)
                    {
                        if (nums[q] == target - nums[i] - nums[j] - nums[p])
                        {
                            vector<int> row;
                            row.push_back(nums[i]);
                            row.push_back(nums[j]);
                            row.push_back(nums[p]);
                            row.push_back(nums[q]);
                            res_set.insert(row);
                            //if (find(res.begin(), res.end(), row) == res.end())
                            //{
                            //   res.push_back(row);
                            //}
                        }
                    }
                }
            }
        }
        for(auto it = res_set.begin(); it != res_set.end(); it++){
            res.push_back(*it);
        }
        return res;
    }
};
