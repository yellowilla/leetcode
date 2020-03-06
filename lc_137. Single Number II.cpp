int singleNumber(vector<int>& nums) {
        int res;
        
        int length = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < length; i++)
        {
            mp[nums[i]] += 1;
        }
        
        for (auto i = mp.begin(); i != mp.end(); i++)
        {
             if (i->second == 1)
             {
                 res = i->first;
                 return res;
             }
        }
        
        return res;
    }
