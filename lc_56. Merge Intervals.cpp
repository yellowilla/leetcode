class MyLess
{
public:
    bool operator() (vector<int>& a, vector<int>& b)
    {
        int la = a[0], ra = a[1];
        int lb = b[0], rb = b[1];
        if (la < lb)
        {
            return true;
        }
        else if (la > lb)
        {
            return false;
        }
        else
        {
            if (ra > rb)
            {
                return true;
            }
            else 
            {
                return false;
            }
        }
    }
};

class Solution 
{
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>> res;
        
        int length = intervals.size();
        if (length == 0)
        {
            return res;
        }
        
        sort(intervals.begin(), intervals.end(), MyLess());
        for (int i = 0; i < length; i++)
        {
            if (res.empty())
            {
                res.push_back(intervals[i]);
            }
            else
            {
                vector<int> last = res.back();
                if (intervals[i][1] <= last[1])
                {
                    continue;
                }
                else
                {
                    if (intervals[i][0] > last[1])
                    {
                        res.push_back(intervals[i]);
                    }
                    else
                    {
                        res.pop_back();
                        last[1] = intervals[i][1];
                        res.push_back(last);
                    }
                }
            }
        }
        
        return res;
    }
};
