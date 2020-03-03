class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        
        int length = nums.size();
        if (length == 0)
        {
            return res;
        }
        
        unsigned int count = (1 << length) - 1; //int型，二进制首位是0，不能表示2的32次方
        unsigned int cur;
        for (int i = 0; i <= count; i++)
        {
            cur = i;
            vector<int> row;
            
            for (int j = length - 1; j >= 0; j--)
            {
                if (cur & 1) //末位为1
                {
                    row.push_back(nums[j]);
                }
                cur = cur >> 1;
            }
            
            res.push_back(row);
        }
        
        return res;
    }
};
