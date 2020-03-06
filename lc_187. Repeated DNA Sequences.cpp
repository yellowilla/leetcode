vector<string> findRepeatedDnaSequences(string s) 
    {
        vector<string> res;
        
        int length = s.size();
        unordered_map<string, int> mp;
        for (int i = 0; i < length - 9; i++)
        {
            string ky = s.substr(i, 10);
            if (mp[ky] > 0)
            {
                mp[ky]++;
                if (mp[ky] == 2)
                {
                    res.push_back(ky);
                }
            }
            else
            {
                mp[ky] = 1;
            }
        }
        
        return res;
    }
