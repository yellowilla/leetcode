class Solution {
public:
    //注意：map的指针是个pair,first是key,second是value（第24行）
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        
        int length = strs.size();
        if (length == 0)
        {
            return res;
        }
        
        string cur;
        unordered_map<string, vector<string>> mp;
        for (int i = 0; i < length; i++)
        {
            cur = strs[i];
            sort(cur.begin(), cur.end());
            mp[cur].push_back(strs[i]);
        }
        
        for (auto i = mp.begin(); i != mp.end(); i++)
        {
            res.push_back(i->second);
        }
        
        return res;
    }
};
