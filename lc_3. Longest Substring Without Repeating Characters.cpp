class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        
        unordered_map<char, int> mp; //字符 => 出现的位置+1
        int length = s.size();
        int l = 1, r = 1;
        for (int i = 0; i < length; i++)
        {
            if (mp[s[i]] > 0)
            {
                l = max(l, mp[s[i]] + 1);
            }
            r = i + 1;
            mp[s[i]] = i + 1;
            
            int curlen = r - l + 1;
            if (curlen > res)
            {
                res = curlen;
            }
        }
        
        return res;
    }
};
