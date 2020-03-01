class Solution 
{
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector<int> res;
        
        int length = nums.size();
        if (length == 0)
        {
            return res;
        }
        
        unordered_map<int, int> mp;
        for (int i = 0; i < length; i++)
        {
            mp[nums[i]]++;
        }
        
        priority_queue< pair<int, int> > pq;
        for (auto i = mp.begin(); i != mp.end(); i++)
        {
            pq.push(make_pair(i->second, i->first));
        }
        
        for (int i = 0; i < k; i++)
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        return res;
    }
};
