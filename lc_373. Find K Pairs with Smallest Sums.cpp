class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> res;
        
        int lth1 = nums1.size();
        int lth2 = nums2.size();
        if (lth1 == 0 || lth2 == 0)
        {
            return res;
        }
        
        priority_queue<pair<int, vector<vector<int>>>> ans;
        unordered_map<int, vector<vector<int>>> mp;
        
        for (int i = 0; i < lth1; i++)
        {
            for (int j = 0; j < lth2; j++)
            {
                int ky = nums1[i] + nums2[j];
                vector<int> cur(2);
                cur[0] = nums1[i];
                cur[1] = nums2[j];
                mp[-ky].push_back(cur);
            }
        }
        
        int lth_mp = mp.size();
        //cout << lth_mp << endl;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            ans.push(make_pair(it->first, it->second));
        }
        
        int count = 0;
        while (!ans.empty())
        {
            pair<int, vector<vector<int>>> pr = ans.top();
            int lth = pr.second.size();
            for (int i = 0; i < lth; i++)
            {
                res.push_back(pr.second[i]);
                count++;
                if (count == k)
                {
                    break;
                }
            }
            
            if (count == k)
            {
                break;
            }
            ans.pop();
        }
        
        return res;
    }
};
