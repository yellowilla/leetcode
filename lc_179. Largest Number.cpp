class MyLess
{
public:
    bool operator() (string& a, string& b)
    {
        string m = a + b;
        string n = b + a;
        
        int length = m.size();
        for (int i = 0; i < length; i++)
        {
            int im = m[i] - '0';
            int in = n[i] - '0';
            if (im > in)
            {
                return true;
            }
            else if (im < in)
            {
                return false;
            }
            else
            {
                continue;
            }
        }
        
        return false;
    }
};

class Solution 
{
public:
    string largestNumber(vector<int>& nums) 
    {
        string res;
        
        int length = nums.size();
        if (length == 0)
        {
            return res;
        }
        
        vector<string> st;
        for (int i = 0; i < length; i++)
        {
            st.push_back(to_string(nums[i]));
        }
        
        sort(st.begin(), st.end(), MyLess());
        
        for (int i = 0; i < length; i++)
        {
            res += st[i];
        }
        
        int begin = 0;
        int lt_res = res.size();
        for (int i = 0; i < lt_res; i++)
        {
            if (res[i] == '0')
            {
                begin = i;
            }
            else
            {
                break;
            }
        }
        
        res = res.substr(begin, lt_res + 1 - begin);
        return res;
    }
};
